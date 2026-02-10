// SPDX-License-Identifier: Apache-2.0
// Copyright (C) 2024-2025 Advanced Micro Devices, Inc. All rights reserved

#ifndef NPU3_REGISTERS_H_
#define NPU3_REGISTERS_H_

namespace npu3
{

// Register definitions for NPU3
// ###################################

// Register definitions for CM
// ###################################
// Program Memory (32 kbyte)
const unsigned int cm_program_memory = 0x00080000;
// Generate an internal event
const unsigned int cm_event_generate = 0x000A0008;
// Control of which Internal Event to Broadcast0
const unsigned int cm_event_broadcast0 = 0x000A0010;
// Control of which Internal Event to Broadcast1
const unsigned int cm_event_broadcast1 = 0x000A0014;
// Control of which Internal Event to Broadcast2
const unsigned int cm_event_broadcast2 = 0x000A0018;
// Control of which Internal Event to Broadcast3
const unsigned int cm_event_broadcast3 = 0x000A001C;
// Control of which Internal Event to Broadcast4
const unsigned int cm_event_broadcast4 = 0x000A0020;
// Control of which Internal Event to Broadcast5
const unsigned int cm_event_broadcast5 = 0x000A0024;
// Control of which Internal Event to Broadcast6
const unsigned int cm_event_broadcast6 = 0x000A0028;
// Control of which Internal Event to Broadcast7
const unsigned int cm_event_broadcast7 = 0x000A002C;
// Control of which Internal Event to Broadcast8
const unsigned int cm_event_broadcast8 = 0x000A0030;
// Control of which Internal Event to Broadcast9
const unsigned int cm_event_broadcast9 = 0x000A0034;
// Control of which Internal Event to Broadcast10
const unsigned int cm_event_broadcast10 = 0x000A0038;
// Control of which Internal Event to Broadcast11
const unsigned int cm_event_broadcast11 = 0x000A003C;
// Control of which Internal Event to Broadcast12
const unsigned int cm_event_broadcast12 = 0x000A0040;
// Control of which Internal Event to Broadcast13
const unsigned int cm_event_broadcast13 = 0x000A0044;
// Control of which Internal Event to Broadcast14
const unsigned int cm_event_broadcast14 = 0x000A0048;
// Control of which Internal Event to Broadcast15
const unsigned int cm_event_broadcast15 = 0x000A004C;
// Set block of broadcast signals to South
const unsigned int cm_event_broadcast_block_south_set = 0x000A0050;
// Clear block of broadcast signals to South
const unsigned int cm_event_broadcast_block_south_clr = 0x000A0054;
// Current value of block for broadcast signals to South
const unsigned int cm_event_broadcast_block_south_value = 0x000A0058;
// Set block of broadcast signals to West
const unsigned int cm_event_broadcast_block_west_set = 0x000A0060;
// Clear block of broadcast signals to West
const unsigned int cm_event_broadcast_block_west_clr = 0x000A0064;
// Current value of block for broadcast signals to West
const unsigned int cm_event_broadcast_block_west_value = 0x000A0068;
// Set block of broadcast signals to North
const unsigned int cm_event_broadcast_block_north_set = 0x000A0070;
// Clear block of broadcast signals to North
const unsigned int cm_event_broadcast_block_north_clr = 0x000A0074;
// Current value of block for broadcast signals to North
const unsigned int cm_event_broadcast_block_north_value = 0x000A0078;
// Set block of broadcast signals to East
const unsigned int cm_event_broadcast_block_east_set = 0x000A0080;
// Clear block of broadcast signals to East
const unsigned int cm_event_broadcast_block_east_clr = 0x000A0084;
// Current value of block for broadcast signals to East
const unsigned int cm_event_broadcast_block_east_value = 0x000A0088;
// Control of Trace 0
const unsigned int cm_trace0_control0 = 0x000A00D0;
// Control of Trace 0: packet destination
const unsigned int cm_trace0_control1 = 0x000A00D4;
// Status of trace engine
const unsigned int cm_trace0_status = 0x000A00D8;
// Control of which Internal Event to Trace in trace unit 0
const unsigned int cm_trace0_event0 = 0x000A00E0;
// Control of which Internal Event to Trace in trace unit 0
const unsigned int cm_trace0_event1 = 0x000A00E4;
// Control of Trace 1
const unsigned int cm_trace1_control0 = 0x000A00F0;
// Control of Trace 1: packet configuration
const unsigned int cm_trace1_control1 = 0x000A00F4;
// Status of trace engine
const unsigned int cm_trace1_status = 0x000A00F8;
// Control of which Internal Event to Trace in trace unit 1
const unsigned int cm_trace1_event0 = 0x000A0100;
// Control of which Internal Event to Trace in trace unit 1
const unsigned int cm_trace1_event1 = 0x000A0104;
// Control of Internal Timer
const unsigned int cm_timer_control = 0x000A0110;
// Internal Timer Event Value.
const unsigned int cm_timer_trig_event_low_value = 0x000A0114;
// Internal Timer Event Value.
const unsigned int cm_timer_trig_event_high_value = 0x000A0118;
// Internal Timer Low part Value.
const unsigned int cm_timer_low = 0x000A0120;
// Internal Timer High part Value.
const unsigned int cm_timer_high = 0x000A0124;
// Internal event status register0
const unsigned int cm_event_status0 = 0x000A0200;
// Internal event status register1
const unsigned int cm_event_status1 = 0x000A0204;
// Internal event status register2
const unsigned int cm_event_status2 = 0x000A0208;
// Internal event status register3
const unsigned int cm_event_status3 = 0x000A020C;
// Internal event status register4
const unsigned int cm_event_status4 = 0x000A0210;
// Internal event status register5
const unsigned int cm_event_status5 = 0x000A0214;
// Internal event status register6
const unsigned int cm_event_status6 = 0x000A0218;
// Internal event status register7
const unsigned int cm_event_status7 = 0x000A021C;
// Combo events input events A-D
const unsigned int cm_combo_event_inputs0 = 0x000A0400;
// Combo events input events E-H
const unsigned int cm_combo_event_inputs1 = 0x000A0404;
// Combo events control bits for combo 0-2
const unsigned int cm_combo_event_control0 = 0x000A0408;
// Combo events control bits for combo 4-6
const unsigned int cm_combo_event_control1 = 0x000A040C;
// Configuration for edge detection events 0-1
const unsigned int cm_edge_detection_event_control0 = 0x000A0410;
// Configuration for edge detection events 2-3
const unsigned int cm_edge_detection_event_control1 = 0x000A0414;
// Configuration for edge detection events 4-5
const unsigned int cm_edge_detection_event_control2 = 0x000A0418;
// Configuration for edge detection events 6-7
const unsigned int cm_edge_detection_event_control3 = 0x000A041C;
// Event enable for Group 0
const unsigned int cm_event_group_0_enable = 0x000A0500;
// Event enable for PC Group
const unsigned int cm_event_group_pc_enable = 0x000A0504;
// Event enable for AI Engine Stall Group
const unsigned int cm_event_group_core_stall_enable = 0x000A0508;
// Event enable for AI Engine Program Flow Group
const unsigned int cm_event_group_core_program_flow_enable = 0x000A050C;
// Event enable for Error Group 0
const unsigned int cm_event_group_errors0_enable = 0x000A0510;
// Event enable for Error Group 1
const unsigned int cm_event_group_errors1_enable = 0x000A0514;
// Event enable for Error Group 2
const unsigned int cm_event_group_errors2_enable = 0x000A0518;
// Event enable for Stream Switch Group
const unsigned int cm_event_group_stream_switch_enable = 0x000A051C;
// Event enable for Watchpoint Group
const unsigned int cm_event_group_watchpoint = 0x000A0520;
// Event enable for DMA Activity Group
const unsigned int cm_event_group_dma_enable = 0x000A0524;
// Event enable for Lock Group
const unsigned int cm_event_group_lock_enable = 0x000A0528;
// Event enable for Memory Conflict Group
const unsigned int cm_event_group_memory_conflict_enable = 0x000A052C;
// Event enable for Broadcast group
const unsigned int cm_event_group_broadcast_enable = 0x000A0530;
// Event enable for User group
const unsigned int cm_event_group_user_event_enable = 0x000A0534;
// Control Accumulator Cascade
const unsigned int cm_accumulator_control = 0x000A1060;
// Performance Counters 1-0 Start and Stop Event
const unsigned int cm_performance_control0 = 0x000A2500;
// Performance Counters 3-2 Start and Stop Event
const unsigned int cm_performance_control1 = 0x000A2504;
// Performance Counters 5-4 Start and Stop Event
const unsigned int cm_performance_control2 = 0x000A2508;
// Performance Counters 7-6 Start and Stop Event
const unsigned int cm_performance_control3 = 0x000A250C;
// Performance Counters 9-8 Start and Stop Event
const unsigned int cm_performance_control4 = 0x000A2510;
// Performance Counters 11-10 Start and Stop Event
const unsigned int cm_performance_control5 = 0x000A2514;
// Performance Counters 0-3 Reset Events
const unsigned int cm_performance_control6 = 0x000A2518;
// Performance Counters 4-7 Reset Events
const unsigned int cm_performance_control7 = 0x000A251C;
// Performance Counters 8-11 Reset Events
const unsigned int cm_performance_control8 = 0x000A2520;
// Performance Counter0
const unsigned int cm_performance_counter0 = 0x000A2530;
// Performance Counter1
const unsigned int cm_performance_counter1 = 0x000A2534;
// Performance Counter2
const unsigned int cm_performance_counter2 = 0x000A2538;
// Performance Counter3
const unsigned int cm_performance_counter3 = 0x000A253C;
// Performance Counter4
const unsigned int cm_performance_counter4 = 0x000A2540;
// Performance Counter5
const unsigned int cm_performance_counter5 = 0x000A2544;
// Performance Counter6
const unsigned int cm_performance_counter6 = 0x000A2548;
// Performance Counter7
const unsigned int cm_performance_counter7 = 0x000A254C;
// Performance Counter8
const unsigned int cm_performance_counter8 = 0x000A2550;
// Performance Counter9
const unsigned int cm_performance_counter9 = 0x000A2554;
// Performance Counter10
const unsigned int cm_performance_counter10 = 0x000A2558;
// Performance Counter11
const unsigned int cm_performance_counter11 = 0x000A255C;
// Performance Counter0 Snapshot
const unsigned int cm_performance_counter0_snapshot = 0x000A2560;
// Performance Counter1 Snapshot
const unsigned int cm_performance_counter1_snapshot = 0x000A2564;
// Performance Counter2 Snapshot
const unsigned int cm_performance_counter2_snapshot = 0x000A2568;
// Performance Counter3 Snapshot
const unsigned int cm_performance_counter3_snapshot = 0x000A256C;
// Performance Counter4 Snapshot
const unsigned int cm_performance_counter4_snapshot = 0x000A2570;
// Performance Counter5 Snapshot
const unsigned int cm_performance_counter5_snapshot = 0x000A2574;
// Performance Counter6 Snapshot
const unsigned int cm_performance_counter6_snapshot = 0x000A2578;
// Performance Counter7 Snapshot
const unsigned int cm_performance_counter7_snapshot = 0x000A257C;
// Performance Counter8 Snapshot
const unsigned int cm_performance_counter8_snapshot = 0x000A2580;
// Performance Counter9 Snapshot
const unsigned int cm_performance_counter9_snapshot = 0x000A2584;
// Performance Counter10 Snapshot
const unsigned int cm_performance_counter10_snapshot = 0x000A2588;
// Performance Counter11 Snapshot
const unsigned int cm_performance_counter11_snapshot = 0x000A258C;
// Performance Counter0 Event Value.
const unsigned int cm_performance_counter0_event_value = 0x000A2590;
// Performance Counter1 Event Value. When the Performance Counter1 reach this value, an event will be generated
const unsigned int cm_performance_counter1_event_value = 0x000A2594;
// Performance Counter2 Event Value. When the Performance Counter2 reach this value, an event will be generated
const unsigned int cm_performance_counter2_event_value = 0x000A2598;
// Performance Counter3 Event Value. When the Performance Counter3 reach this value, an event will be generated
const unsigned int cm_performance_counter3_event_value = 0x000A259C;
// Performance Counter4 Event Value. When the Performance Counter4 reach this value, an event will be generated
const unsigned int cm_performance_counter4_event_value = 0x000A25A0;
// Performance Counter5 Event Value. When the Performance Counter5 reach this value, an event will be generated
const unsigned int cm_performance_counter5_event_value = 0x000A25A4;
// Performance Counter6 Event Value. When the Performance Counter6 reach this value, an event will be generated
const unsigned int cm_performance_counter6_event_value = 0x000A25A8;
// Performance Counter7 Event Value. When the Performance Counter7 reach this value, an event will be generated
const unsigned int cm_performance_counter7_event_value = 0x000A25AC;
// Performance Counter8 Event Value. When the Performance Counter8 reach this value, an event will be generated
const unsigned int cm_performance_counter8_event_value = 0x000A25B0;
// Performance Counter9 Event Value. When the Performance Counter9 reach this value, an event will be generated
const unsigned int cm_performance_counter9_event_value = 0x000A25B4;
// Performance Counter10 Event Value. When the Performance Counter10 reach this value, an event will be generated
const unsigned int cm_performance_counter10_event_value = 0x000A25B8;
// Performance Counter11 Event Value. When the Performance Counter11 reach this value, an event will be generated
const unsigned int cm_performance_counter11_event_value = 0x000A25BC;
// Set performance counter snapshot registers load event
const unsigned int cm_performance_counter_snapshots_load_event = 0x000A25C0;
// Control of the AI Engine
const unsigned int cm_core_control = 0x000A3000;
// The status of the AI Engine
const unsigned int cm_core_status = 0x000A3004;
// Set reset event trigger
const unsigned int cm_enable_events = 0x000A3008;
// Set reset event trigger
const unsigned int cm_reset_event = 0x000A300C;
// Debug control of manual debug stall and single step count
const unsigned int cm_debug_control0 = 0x000A3010;
// Debug Halt Event Control
const unsigned int cm_debug_control1 = 0x000A3014;
// Debug Halt Control
const unsigned int cm_debug_control2 = 0x000A3018;
// Debug Status
const unsigned int cm_debug_status = 0x000A301C;
// PC_Event0
const unsigned int cm_pc_event0 = 0x000A3020;
// PC_Event1
const unsigned int cm_pc_event1 = 0x000A3024;
// PC_Event2
const unsigned int cm_pc_event2 = 0x000A3028;
// PC_Event3
const unsigned int cm_pc_event3 = 0x000A302C;
// PC_Event4
const unsigned int cm_pc_event4 = 0x000A3030;
// PC_Event5
const unsigned int cm_pc_event5 = 0x000A3034;
// PC_Event6
const unsigned int cm_pc_event6 = 0x000A3038;
// PC_Event7
const unsigned int cm_pc_event7 = 0x000A303C;
// PC_Event8
const unsigned int cm_pc_event8 = 0x000A3040;
// PC_Event9
const unsigned int cm_pc_event9 = 0x000A3044;
// Error Halt Control
const unsigned int cm_error_halt_control = 0x000A3050;
// Error Halt Event
const unsigned int cm_error_halt_event = 0x000A3054;
// Core Processor Bus Control
const unsigned int cm_core_processor_bus = 0x000A3060;
// Spare register
const unsigned int cm_spare_reg = 0x000A3070;
// Stream Switch Manager Configuration AI Engine 0
const unsigned int cm_stream_switch_manager_config_aie_core_0 = 0x000B4000;
// Stream Switch Manager Configuration AI Engine 1
const unsigned int cm_stream_switch_manager_config_aie_core_1 = 0x000B4004;
// Stream Switch Manager Configuration DMA 0
const unsigned int cm_stream_switch_manager_config_dma_0 = 0x000B4008;
// Stream Switch Manager Configuration DMA 1
const unsigned int cm_stream_switch_manager_config_dma_1 = 0x000B400C;
// Stream Switch Manager Configuration FIFO 0
const unsigned int cm_stream_switch_manager_config_fifo_0 = 0x000B4010;
// Stream Switch Manager Configuration FIFO 1
const unsigned int cm_stream_switch_manager_config_fifo_1 = 0x000B4014;
// Stream Switch Manager Configuration South 0
const unsigned int cm_stream_switch_manager_config_south_0 = 0x000B4018;
// Stream Switch Manager Configuration South 1
const unsigned int cm_stream_switch_manager_config_south_1 = 0x000B401C;
// Stream Switch Manager Configuration South X
const unsigned int cm_stream_switch_manager_config_south_x = 0x000B4020;
// Stream Switch Manager Configuration South 2
const unsigned int cm_stream_switch_manager_config_south_2 = 0x000B4024;
// Stream Switch Manager Configuration South 3
const unsigned int cm_stream_switch_manager_config_south_3 = 0x000B4028;
// Stream Switch Manager Configuration South Y
const unsigned int cm_stream_switch_manager_config_south_y = 0x000B402C;
// Stream Switch Manager Configuration West 0
const unsigned int cm_stream_switch_manager_config_west_0 = 0x000B4030;
// Stream Switch Manager Configuration West 1
const unsigned int cm_stream_switch_manager_config_west_1 = 0x000B4034;
// Stream Switch Manager Configuration West 2
const unsigned int cm_stream_switch_manager_config_west_2 = 0x000B4038;
// Stream Switch Manager Configuration West 3
const unsigned int cm_stream_switch_manager_config_west_3 = 0x000B403C;
// Stream Switch Manager Configuration North 0
const unsigned int cm_stream_switch_manager_config_north_0 = 0x000B4040;
// Stream Switch Manager Configuration North 1
const unsigned int cm_stream_switch_manager_config_north_1 = 0x000B4044;
// Stream Switch Manager Configuration North 2
const unsigned int cm_stream_switch_manager_config_north_2 = 0x000B4048;
// Stream Switch Manager Configuration North 3
const unsigned int cm_stream_switch_manager_config_north_3 = 0x000B404C;
// Stream Switch Manager Configuration North 4
const unsigned int cm_stream_switch_manager_config_north_4 = 0x000B4050;
// Stream Switch Manager Configuration North 5
const unsigned int cm_stream_switch_manager_config_north_5 = 0x000B4054;
// Stream Switch Manager Configuration North 6
const unsigned int cm_stream_switch_manager_config_north_6 = 0x000B4058;
// Stream Switch Manager Configuration North 7
const unsigned int cm_stream_switch_manager_config_north_7 = 0x000B405C;
// Stream Switch Manager Configuration East 0
const unsigned int cm_stream_switch_manager_config_east_0 = 0x000B4060;
// Stream Switch Manager Configuration East 1
const unsigned int cm_stream_switch_manager_config_east_1 = 0x000B4064;
// Stream Switch Manager Configuration East 2
const unsigned int cm_stream_switch_manager_config_east_2 = 0x000B4068;
// Stream Switch Manager Configuration East 3
const unsigned int cm_stream_switch_manager_config_east_3 = 0x000B406C;
// Stream Switch Manager Configuration North_Control 0
const unsigned int cm_stream_switch_manager_config_north_control_0 = 0x000B4070;
// Stream Switch Manager Configuration North_Control 1
const unsigned int cm_stream_switch_manager_config_north_control_1 = 0x000B4074;
// Stream Switch Manager Configuration 32-bit Switch 0
const unsigned int cm_stream_switch_manager_config_32b_switch_0 = 0x000B4078;
// Stream Switch Manager Configuration Tile_Ctrl 0
const unsigned int cm_stream_switch_manager_config_tile_ctrl_0 = 0x000B407C;
// Stream Switch Subordinate Configuration AI Engine 0
const unsigned int cm_stream_switch_subordinate_config_aie_core_0 = 0x000B4100;
// Stream Switch Subordinate Configuration DMA 0
const unsigned int cm_stream_switch_subordinate_config_dma_0 = 0x000B4104;
// Stream Switch Subordinate Configuration DMA 1
const unsigned int cm_stream_switch_subordinate_config_dma_1 = 0x000B4108;
// Stream Switch Subordinate Configuration FIFO 0
const unsigned int cm_stream_switch_subordinate_config_fifo_0 = 0x000B410C;
// Stream Switch Subordinate Configuration FIFO 1
const unsigned int cm_stream_switch_subordinate_config_fifo_1 = 0x000B4110;
// Stream Switch Subordinate Configuration South 0
const unsigned int cm_stream_switch_subordinate_config_south_0 = 0x000B4114;
// Stream Switch Subordinate Configuration South 1
const unsigned int cm_stream_switch_subordinate_config_south_1 = 0x000B4118;
// Stream Switch Subordinate Configuration South 2
const unsigned int cm_stream_switch_subordinate_config_south_2 = 0x000B411C;
// Stream Switch Subordinate Configuration South 3
const unsigned int cm_stream_switch_subordinate_config_south_3 = 0x000B4120;
// Stream Switch Subordinate Configuration South 4
const unsigned int cm_stream_switch_subordinate_config_south_4 = 0x000B4124;
// Stream Switch Subordinate Configuration South 5
const unsigned int cm_stream_switch_subordinate_config_south_5 = 0x000B4128;
// Stream Switch Subordinate Configuration South 6
const unsigned int cm_stream_switch_subordinate_config_south_6 = 0x000B412C;
// Stream Switch Subordinate Configuration South 7
const unsigned int cm_stream_switch_subordinate_config_south_7 = 0x000B4130;
// Stream Switch Subordinate Configuration West 0
const unsigned int cm_stream_switch_subordinate_config_west_0 = 0x000B4134;
// Stream Switch Subordinate Configuration West 1
const unsigned int cm_stream_switch_subordinate_config_west_1 = 0x000B4138;
// Stream Switch Subordinate Configuration West 2
const unsigned int cm_stream_switch_subordinate_config_west_2 = 0x000B413C;
// Stream Switch Subordinate Configuration West 3
const unsigned int cm_stream_switch_subordinate_config_west_3 = 0x000B4140;
// Stream Switch Subordinate Configuration North 0
const unsigned int cm_stream_switch_subordinate_config_north_0 = 0x000B4144;
// Stream Switch Subordinate Configuration North 1
const unsigned int cm_stream_switch_subordinate_config_north_1 = 0x000B4148;
// Stream Switch Subordinate Configuration North X
const unsigned int cm_stream_switch_subordinate_config_north_x = 0x000B414C;
// Stream Switch Subordinate Configuration North 2
const unsigned int cm_stream_switch_subordinate_config_north_2 = 0x000B4150;
// Stream Switch Subordinate Configuration North 3
const unsigned int cm_stream_switch_subordinate_config_north_3 = 0x000B4154;
// Stream Switch Subordinate Configuration North Y
const unsigned int cm_stream_switch_subordinate_config_north_y = 0x000B4158;
// Stream Switch Subordinate Configuration East 0
const unsigned int cm_stream_switch_subordinate_config_east_0 = 0x000B415C;
// Stream Switch Subordinate Configuration East 1
const unsigned int cm_stream_switch_subordinate_config_east_1 = 0x000B4160;
// Stream Switch Subordinate Configuration East 2
const unsigned int cm_stream_switch_subordinate_config_east_2 = 0x000B4164;
// Stream Switch Subordinate Configuration East 3
const unsigned int cm_stream_switch_subordinate_config_east_3 = 0x000B4168;
// Stream Switch Subordinate Configuration South_Control 0
const unsigned int cm_stream_switch_subordinate_config_south_control_0 = 0x000B416C;
// Stream Switch Subordinate Configuration South_Control 1
const unsigned int cm_stream_switch_subordinate_config_south_control_1 = 0x000B4170;
// Stream Switch Subordinate Configuration 32-bit Switch 0
const unsigned int cm_stream_switch_subordinate_config_32b_switch_0 = 0x000B4174;
// Stream Switch Subordinate Configuration AI Engine 0
const unsigned int cm_stream_switch_subordinate_aie_core_0_slot0 = 0x000B4200;
// Stream Switch Subordinate Configuration AI Engine 0
const unsigned int cm_stream_switch_subordinate_aie_core_0_slot1 = 0x000B4204;
// Stream Switch Subordinate Configuration AI Engine 0
const unsigned int cm_stream_switch_subordinate_aie_core_0_slot2 = 0x000B4208;
// Stream Switch Subordinate Configuration AI Engine 0
const unsigned int cm_stream_switch_subordinate_aie_core_0_slot3 = 0x000B420C;
// Stream Switch Subordinate Configuration DMA 0
const unsigned int cm_stream_switch_subordinate_dma_0_slot0 = 0x000B4210;
// Stream Switch Subordinate Configuration DMA 0
const unsigned int cm_stream_switch_subordinate_dma_0_slot1 = 0x000B4214;
// Stream Switch Subordinate Configuration DMA 0
const unsigned int cm_stream_switch_subordinate_dma_0_slot2 = 0x000B4218;
// Stream Switch Subordinate Configuration DMA 0
const unsigned int cm_stream_switch_subordinate_dma_0_slot3 = 0x000B421C;
// Stream Switch Subordinate Configuration DMA 1
const unsigned int cm_stream_switch_subordinate_dma_1_slot0 = 0x000B4220;
// Stream Switch Subordinate Configuration DMA 1
const unsigned int cm_stream_switch_subordinate_dma_1_slot1 = 0x000B4224;
// Stream Switch Subordinate Configuration DMA 1
const unsigned int cm_stream_switch_subordinate_dma_1_slot2 = 0x000B4228;
// Stream Switch Subordinate Configuration DMA 1
const unsigned int cm_stream_switch_subordinate_dma_1_slot3 = 0x000B422C;
// Stream Switch Subordinate Configuration FIFO 0
const unsigned int cm_stream_switch_subordinate_fifo_0_slot0 = 0x000B4230;
// Stream Switch Subordinate Configuration FIFO 0
const unsigned int cm_stream_switch_subordinate_fifo_0_slot1 = 0x000B4234;
// Stream Switch Subordinate Configuration FIFO 0
const unsigned int cm_stream_switch_subordinate_fifo_0_slot2 = 0x000B4238;
// Stream Switch Subordinate Configuration FIFO 0
const unsigned int cm_stream_switch_subordinate_fifo_0_slot3 = 0x000B423C;
// Stream Switch Subordinate Configuration FIFO 1
const unsigned int cm_stream_switch_subordinate_fifo_1_slot0 = 0x000B4240;
// Stream Switch Subordinate Configuration FIFO 1
const unsigned int cm_stream_switch_subordinate_fifo_1_slot1 = 0x000B4244;
// Stream Switch Subordinate Configuration FIFO 1
const unsigned int cm_stream_switch_subordinate_fifo_1_slot2 = 0x000B4248;
// Stream Switch Subordinate Configuration FIFO 1
const unsigned int cm_stream_switch_subordinate_fifo_1_slot3 = 0x000B424C;
// Stream Switch Subordinate Configuration South 0
const unsigned int cm_stream_switch_subordinate_south_0_slot0 = 0x000B4250;
// Stream Switch Subordinate Configuration South 0
const unsigned int cm_stream_switch_subordinate_south_0_slot1 = 0x000B4254;
// Stream Switch Subordinate Configuration South 0
const unsigned int cm_stream_switch_subordinate_south_0_slot2 = 0x000B4258;
// Stream Switch Subordinate Configuration South 0
const unsigned int cm_stream_switch_subordinate_south_0_slot3 = 0x000B425C;
// Stream Switch Subordinate Configuration South 1
const unsigned int cm_stream_switch_subordinate_south_1_slot0 = 0x000B4260;
// Stream Switch Subordinate Configuration South 1
const unsigned int cm_stream_switch_subordinate_south_1_slot1 = 0x000B4264;
// Stream Switch Subordinate Configuration South 1
const unsigned int cm_stream_switch_subordinate_south_1_slot2 = 0x000B4268;
// Stream Switch Subordinate Configuration South 1
const unsigned int cm_stream_switch_subordinate_south_1_slot3 = 0x000B426C;
// Stream Switch Subordinate Configuration South 2
const unsigned int cm_stream_switch_subordinate_south_2_slot0 = 0x000B4270;
// Stream Switch Subordinate Configuration South 2
const unsigned int cm_stream_switch_subordinate_south_2_slot1 = 0x000B4274;
// Stream Switch Subordinate Configuration South 2
const unsigned int cm_stream_switch_subordinate_south_2_slot2 = 0x000B4278;
// Stream Switch Subordinate Configuration South 2
const unsigned int cm_stream_switch_subordinate_south_2_slot3 = 0x000B427C;
// Stream Switch Subordinate Configuration South 3
const unsigned int cm_stream_switch_subordinate_south_3_slot0 = 0x000B4280;
// Stream Switch Subordinate Configuration South 3
const unsigned int cm_stream_switch_subordinate_south_3_slot1 = 0x000B4284;
// Stream Switch Subordinate Configuration South 3
const unsigned int cm_stream_switch_subordinate_south_3_slot2 = 0x000B4288;
// Stream Switch Subordinate Configuration South 3
const unsigned int cm_stream_switch_subordinate_south_3_slot3 = 0x000B428C;
// Stream Switch Subordinate Configuration South 4
const unsigned int cm_stream_switch_subordinate_south_4_slot0 = 0x000B4290;
// Stream Switch Subordinate Configuration South 4
const unsigned int cm_stream_switch_subordinate_south_4_slot1 = 0x000B4294;
// Stream Switch Subordinate Configuration South 4
const unsigned int cm_stream_switch_subordinate_south_4_slot2 = 0x000B4298;
// Stream Switch Subordinate Configuration South 4
const unsigned int cm_stream_switch_subordinate_south_4_slot3 = 0x000B429C;
// Stream Switch Subordinate Configuration South 5
const unsigned int cm_stream_switch_subordinate_south_5_slot0 = 0x000B42A0;
// Stream Switch Subordinate Configuration South 5
const unsigned int cm_stream_switch_subordinate_south_5_slot1 = 0x000B42A4;
// Stream Switch Subordinate Configuration South 5
const unsigned int cm_stream_switch_subordinate_south_5_slot2 = 0x000B42A8;
// Stream Switch Subordinate Configuration South 5
const unsigned int cm_stream_switch_subordinate_south_5_slot3 = 0x000B42AC;
// Stream Switch Subordinate Configuration South 6
const unsigned int cm_stream_switch_subordinate_south_6_slot0 = 0x000B42B0;
// Stream Switch Subordinate Configuration South 6
const unsigned int cm_stream_switch_subordinate_south_6_slot1 = 0x000B42B4;
// Stream Switch Subordinate Configuration South 6
const unsigned int cm_stream_switch_subordinate_south_6_slot2 = 0x000B42B8;
// Stream Switch Subordinate Configuration South 6
const unsigned int cm_stream_switch_subordinate_south_6_slot3 = 0x000B42BC;
// Stream Switch Subordinate Configuration South 7
const unsigned int cm_stream_switch_subordinate_south_7_slot0 = 0x000B42C0;
// Stream Switch Subordinate Configuration South 7
const unsigned int cm_stream_switch_subordinate_south_7_slot1 = 0x000B42C4;
// Stream Switch Subordinate Configuration South 7
const unsigned int cm_stream_switch_subordinate_south_7_slot2 = 0x000B42C8;
// Stream Switch Subordinate Configuration South 7
const unsigned int cm_stream_switch_subordinate_south_7_slot3 = 0x000B42CC;
// Stream Switch Subordinate Configuration West 0
const unsigned int cm_stream_switch_subordinate_west_0_slot0 = 0x000B42D0;
// Stream Switch Subordinate Configuration West 0
const unsigned int cm_stream_switch_subordinate_west_0_slot1 = 0x000B42D4;
// Stream Switch Subordinate Configuration West 0
const unsigned int cm_stream_switch_subordinate_west_0_slot2 = 0x000B42D8;
// Stream Switch Subordinate Configuration West 0
const unsigned int cm_stream_switch_subordinate_west_0_slot3 = 0x000B42DC;
// Stream Switch Subordinate Configuration West 1
const unsigned int cm_stream_switch_subordinate_west_1_slot0 = 0x000B42E0;
// Stream Switch Subordinate Configuration West 1
const unsigned int cm_stream_switch_subordinate_west_1_slot1 = 0x000B42E4;
// Stream Switch Subordinate Configuration West 1
const unsigned int cm_stream_switch_subordinate_west_1_slot2 = 0x000B42E8;
// Stream Switch Subordinate Configuration West 1
const unsigned int cm_stream_switch_subordinate_west_1_slot3 = 0x000B42EC;
// Stream Switch Subordinate Configuration West 2
const unsigned int cm_stream_switch_subordinate_west_2_slot0 = 0x000B42F0;
// Stream Switch Subordinate Configuration West 2
const unsigned int cm_stream_switch_subordinate_west_2_slot1 = 0x000B42F4;
// Stream Switch Subordinate Configuration West 2
const unsigned int cm_stream_switch_subordinate_west_2_slot2 = 0x000B42F8;
// Stream Switch Subordinate Configuration West 2
const unsigned int cm_stream_switch_subordinate_west_2_slot3 = 0x000B42FC;
// Stream Switch Subordinate Configuration West 3
const unsigned int cm_stream_switch_subordinate_west_3_slot0 = 0x000B4300;
// Stream Switch Subordinate Configuration West 3
const unsigned int cm_stream_switch_subordinate_west_3_slot1 = 0x000B4304;
// Stream Switch Subordinate Configuration West 3
const unsigned int cm_stream_switch_subordinate_west_3_slot2 = 0x000B4308;
// Stream Switch Subordinate Configuration West 3
const unsigned int cm_stream_switch_subordinate_west_3_slot3 = 0x000B430C;
// Stream Switch Subordinate Configuration North 0
const unsigned int cm_stream_switch_subordinate_north_0_slot0 = 0x000B4310;
// Stream Switch Subordinate Configuration North 0
const unsigned int cm_stream_switch_subordinate_north_0_slot1 = 0x000B4314;
// Stream Switch Subordinate Configuration North 0
const unsigned int cm_stream_switch_subordinate_north_0_slot2 = 0x000B4318;
// Stream Switch Subordinate Configuration North 0
const unsigned int cm_stream_switch_subordinate_north_0_slot3 = 0x000B431C;
// Stream Switch Subordinate Configuration North 1
const unsigned int cm_stream_switch_subordinate_north_1_slot0 = 0x000B4320;
// Stream Switch Subordinate Configuration North 1
const unsigned int cm_stream_switch_subordinate_north_1_slot1 = 0x000B4324;
// Stream Switch Subordinate Configuration North 1
const unsigned int cm_stream_switch_subordinate_north_1_slot2 = 0x000B4328;
// Stream Switch Subordinate Configuration North 1
const unsigned int cm_stream_switch_subordinate_north_1_slot3 = 0x000B432C;
// Stream Switch Subordinate Configuration North X
const unsigned int cm_stream_switch_subordinate_north_x_slot0 = 0x000B4330;
// Stream Switch Subordinate Configuration North X
const unsigned int cm_stream_switch_subordinate_north_x_slot1 = 0x000B4334;
// Stream Switch Subordinate Configuration North X
const unsigned int cm_stream_switch_subordinate_north_x_slot2 = 0x000B4338;
// Stream Switch Subordinate Configuration North X
const unsigned int cm_stream_switch_subordinate_north_x_slot3 = 0x000B433C;
// Stream Switch Subordinate Configuration North 2
const unsigned int cm_stream_switch_subordinate_north_2_slot0 = 0x000B4340;
// Stream Switch Subordinate Configuration North 2
const unsigned int cm_stream_switch_subordinate_north_2_slot1 = 0x000B4344;
// Stream Switch Subordinate Configuration North 2
const unsigned int cm_stream_switch_subordinate_north_2_slot2 = 0x000B4348;
// Stream Switch Subordinate Configuration North 2
const unsigned int cm_stream_switch_subordinate_north_2_slot3 = 0x000B434C;
// Stream Switch Subordinate Configuration North 3
const unsigned int cm_stream_switch_subordinate_north_3_slot0 = 0x000B4350;
// Stream Switch Subordinate Configuration North 3
const unsigned int cm_stream_switch_subordinate_north_3_slot1 = 0x000B4354;
// Stream Switch Subordinate Configuration North 3
const unsigned int cm_stream_switch_subordinate_north_3_slot2 = 0x000B4358;
// Stream Switch Subordinate Configuration North 3
const unsigned int cm_stream_switch_subordinate_north_3_slot3 = 0x000B435C;
// Stream Switch Subordinate Configuration North Y
const unsigned int cm_stream_switch_subordinate_north_y_slot0 = 0x000B4360;
// Stream Switch Subordinate Configuration North Y
const unsigned int cm_stream_switch_subordinate_north_y_slot1 = 0x000B4364;
// Stream Switch Subordinate Configuration North Y
const unsigned int cm_stream_switch_subordinate_north_y_slot2 = 0x000B4368;
// Stream Switch Subordinate Configuration North Y
const unsigned int cm_stream_switch_subordinate_north_y_slot3 = 0x000B436C;
// Stream Switch Subordinate Configuration East 0
const unsigned int cm_stream_switch_subordinate_east_0_slot0 = 0x000B4370;
// Stream Switch Subordinate Configuration East 0
const unsigned int cm_stream_switch_subordinate_east_0_slot1 = 0x000B4374;
// Stream Switch Subordinate Configuration East 0
const unsigned int cm_stream_switch_subordinate_east_0_slot2 = 0x000B4378;
// Stream Switch Subordinate Configuration East 0
const unsigned int cm_stream_switch_subordinate_east_0_slot3 = 0x000B437C;
// Stream Switch Subordinate Configuration East 1
const unsigned int cm_stream_switch_subordinate_east_1_slot0 = 0x000B4380;
// Stream Switch Subordinate Configuration East 1
const unsigned int cm_stream_switch_subordinate_east_1_slot1 = 0x000B4384;
// Stream Switch Subordinate Configuration East 1
const unsigned int cm_stream_switch_subordinate_east_1_slot2 = 0x000B4388;
// Stream Switch Subordinate Configuration East 1
const unsigned int cm_stream_switch_subordinate_east_1_slot3 = 0x000B438C;
// Stream Switch Subordinate Configuration East 2
const unsigned int cm_stream_switch_subordinate_east_2_slot0 = 0x000B4390;
// Stream Switch Subordinate Configuration East 2
const unsigned int cm_stream_switch_subordinate_east_2_slot1 = 0x000B4394;
// Stream Switch Subordinate Configuration East 2
const unsigned int cm_stream_switch_subordinate_east_2_slot2 = 0x000B4398;
// Stream Switch Subordinate Configuration East 2
const unsigned int cm_stream_switch_subordinate_east_2_slot3 = 0x000B439C;
// Stream Switch Subordinate Configuration East 3
const unsigned int cm_stream_switch_subordinate_east_3_slot0 = 0x000B43A0;
// Stream Switch Subordinate Configuration East 3
const unsigned int cm_stream_switch_subordinate_east_3_slot1 = 0x000B43A4;
// Stream Switch Subordinate Configuration East 3
const unsigned int cm_stream_switch_subordinate_east_3_slot2 = 0x000B43A8;
// Stream Switch Subordinate Configuration East 3
const unsigned int cm_stream_switch_subordinate_east_3_slot3 = 0x000B43AC;
// Stream Switch Subordinate Configuration South_Control 0
const unsigned int cm_stream_switch_subordinate_south_control_0_slot0 = 0x000B43B0;
// Stream Switch Subordinate Configuration South_Control 0
const unsigned int cm_stream_switch_subordinate_south_control_0_slot1 = 0x000B43B4;
// Stream Switch Subordinate Configuration South_Control 0
const unsigned int cm_stream_switch_subordinate_south_control_0_slot2 = 0x000B43B8;
// Stream Switch Subordinate Configuration South_Control 0
const unsigned int cm_stream_switch_subordinate_south_control_0_slot3 = 0x000B43BC;
// Stream Switch Subordinate Configuration South_Control 1
const unsigned int cm_stream_switch_subordinate_south_control_1_slot0 = 0x000B43C0;
// Stream Switch Subordinate Configuration South_Control 1
const unsigned int cm_stream_switch_subordinate_south_control_1_slot1 = 0x000B43C4;
// Stream Switch Subordinate Configuration South_Control 1
const unsigned int cm_stream_switch_subordinate_south_control_1_slot2 = 0x000B43C8;
// Stream Switch Subordinate Configuration South_Control 1
const unsigned int cm_stream_switch_subordinate_south_control_1_slot3 = 0x000B43CC;
// Stream Switch Subordinate Configuration 32-bit Switch 0
const unsigned int cm_stream_switch_subordinate_32b_switch_0_slot0 = 0x000B43D0;
// Stream Switch Subordinate Configuration 32-bit Switch 0
const unsigned int cm_stream_switch_subordinate_32b_switch_0_slot1 = 0x000B43D4;
// Stream Switch Subordinate Configuration 32-bit Switch 0
const unsigned int cm_stream_switch_subordinate_32b_switch_0_slot2 = 0x000B43D8;
// Stream Switch Subordinate Configuration 32-bit Switch 0
const unsigned int cm_stream_switch_subordinate_32b_switch_0_slot3 = 0x000B43DC;
// Stream Switch Deterministic Merge Arbiter:0 Subordinate:0,1
const unsigned int cm_stream_switch_deterministic_merge_arb0_subordinate0_1 = 0x000B4800;
// Stream Switch Deterministic Merge Arbiter:0 Subordinate:2,3
const unsigned int cm_stream_switch_deterministic_merge_arb0_subordinate2_3 = 0x000B4804;
// Stream Switch Deterministic Merge Arbiter:0 Control
const unsigned int cm_stream_switch_deterministic_merge_arb0_ctrl = 0x000B4808;
// Stream Switch Deterministic Merge Arbiter:1 Subordinate:0,1
const unsigned int cm_stream_switch_deterministic_merge_arb1_subordinate0_1 = 0x000B480C;
// Stream Switch Deterministic Merge Arbiter:1 Subordinate:2,3
const unsigned int cm_stream_switch_deterministic_merge_arb1_subordinate2_3 = 0x000B4810;
// Stream Switch Deterministic Merge Arbiter:1 Control
const unsigned int cm_stream_switch_deterministic_merge_arb1_ctrl = 0x000B4814;
// 32-bit Stream Switch Manager Configuration South 0
const unsigned int cm_stream_switch_32b_manager_config_south_0 = 0x000B4900;
// 32-bit Stream Switch Manager Configuration South 1
const unsigned int cm_stream_switch_32b_manager_config_south_1 = 0x000B4904;
// 32-bit Stream Switch Manager Configuration West 0
const unsigned int cm_stream_switch_32b_manager_config_west_0 = 0x000B4908;
// 32-bit Stream Switch Manager Configuration North 0
const unsigned int cm_stream_switch_32b_manager_config_north_0 = 0x000B490C;
// 32-bit Stream Switch Manager Configuration North 1
const unsigned int cm_stream_switch_32b_manager_config_north_1 = 0x000B4910;
// 32-bit Stream Switch Manager Configuration East 0
const unsigned int cm_stream_switch_32b_manager_config_east_0 = 0x000B4914;
// 32-bit Stream Switch Manager Configuration 512-bit Switch 0
const unsigned int cm_stream_switch_32b_manager_config_512b_switch_0 = 0x000B4918;
// Stream Switch Manager Configuration Tile_Ctrl 0
const unsigned int cm_stream_switch_32b_manager_config_tile_ctrl_0 = 0x000B491C;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 0
const unsigned int cm_stream_switch_32b_subordinate_config_tile_ctrl_0 = 0x000B4A00;
// 32-bit Stream Switch Subordinate Configuration AI Engine Trace 0
const unsigned int cm_stream_switch_32b_subordinate_config_aie_trace_0 = 0x000B4A04;
// 32-bit Stream Switch Subordinate Configuration Mem Trace 0
const unsigned int cm_stream_switch_32b_subordinate_config_mem_trace_0 = 0x000B4A08;
// 32-bit Stream Switch Subordinate Configuration South 0
const unsigned int cm_stream_switch_32b_subordinate_config_south_0 = 0x000B4A0C;
// 32-bit Stream Switch Subordinate Configuration South 1
const unsigned int cm_stream_switch_32b_subordinate_config_south_1 = 0x000B4A10;
// 32-bit Stream Switch Subordinate Configuration West 0
const unsigned int cm_stream_switch_32b_subordinate_config_west_0 = 0x000B4A14;
// 32-bit Stream Switch Subordinate Configuration North 0
const unsigned int cm_stream_switch_32b_subordinate_config_north_0 = 0x000B4A18;
// 32-bit Stream Switch Subordinate Configuration North 1
const unsigned int cm_stream_switch_32b_subordinate_config_north_1 = 0x000B4A1C;
// 32-bit Stream Switch Subordinate Configuration East 0
const unsigned int cm_stream_switch_32b_subordinate_config_east_0 = 0x000B4A20;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 0
const unsigned int cm_stream_switch_32b_subordinate_config_512b_switch_0 = 0x000B4A24;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 0
const unsigned int cm_stream_switch_32b_subordinate_tile_ctrl_0_slot0 = 0x000B4B00;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 0
const unsigned int cm_stream_switch_32b_subordinate_tile_ctrl_0_slot1 = 0x000B4B04;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 0
const unsigned int cm_stream_switch_32b_subordinate_tile_ctrl_0_slot2 = 0x000B4B08;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 0
const unsigned int cm_stream_switch_32b_subordinate_tile_ctrl_0_slot3 = 0x000B4B0C;
// 32-bit Stream Switch Subordinate Configuration AI Engine Trace 0
const unsigned int cm_stream_switch_32b_subordinate_aie_trace_0_slot0 = 0x000B4B10;
// 32-bit Stream Switch Subordinate Configuration AI Engine Trace 0
const unsigned int cm_stream_switch_32b_subordinate_aie_trace_0_slot1 = 0x000B4B14;
// 32-bit Stream Switch Subordinate Configuration AI Engine Trace 0
const unsigned int cm_stream_switch_32b_subordinate_aie_trace_0_slot2 = 0x000B4B18;
// 32-bit Stream Switch Subordinate Configuration AI Engine Trace 0
const unsigned int cm_stream_switch_32b_subordinate_aie_trace_0_slot3 = 0x000B4B1C;
// 32-bit Stream Switch Subordinate Configuration Mem Trace 0
const unsigned int cm_stream_switch_32b_subordinate_mem_trace_0_slot0 = 0x000B4B20;
// 32-bit Stream Switch Subordinate Configuration Mem Trace 0
const unsigned int cm_stream_switch_32b_subordinate_mem_trace_0_slot1 = 0x000B4B24;
// 32-bit Stream Switch Subordinate Configuration Mem Trace 0
const unsigned int cm_stream_switch_32b_subordinate_mem_trace_0_slot2 = 0x000B4B28;
// 32-bit Stream Switch Subordinate Configuration Mem Trace 0
const unsigned int cm_stream_switch_32b_subordinate_mem_trace_0_slot3 = 0x000B4B2C;
// 32-bit Stream Switch Subordinate Configuration South 0
const unsigned int cm_stream_switch_32b_subordinate_south_0_slot0 = 0x000B4B30;
// 32-bit Stream Switch Subordinate Configuration South 0
const unsigned int cm_stream_switch_32b_subordinate_south_0_slot1 = 0x000B4B34;
// 32-bit Stream Switch Subordinate Configuration South 0
const unsigned int cm_stream_switch_32b_subordinate_south_0_slot2 = 0x000B4B38;
// 32-bit Stream Switch Subordinate Configuration South 0
const unsigned int cm_stream_switch_32b_subordinate_south_0_slot3 = 0x000B4B3C;
// 32-bit Stream Switch Subordinate Configuration South 1
const unsigned int cm_stream_switch_32b_subordinate_south_1_slot0 = 0x000B4B40;
// 32-bit Stream Switch Subordinate Configuration South 1
const unsigned int cm_stream_switch_32b_subordinate_south_1_slot1 = 0x000B4B44;
// 32-bit Stream Switch Subordinate Configuration South 1
const unsigned int cm_stream_switch_32b_subordinate_south_1_slot2 = 0x000B4B48;
// 32-bit Stream Switch Subordinate Configuration South 1
const unsigned int cm_stream_switch_32b_subordinate_south_1_slot3 = 0x000B4B4C;
// 32-bit Stream Switch Subordinate Configuration West 0
const unsigned int cm_stream_switch_32b_subordinate_west_0_slot0 = 0x000B4B50;
// 32-bit Stream Switch Subordinate Configuration West 0
const unsigned int cm_stream_switch_32b_subordinate_west_0_slot1 = 0x000B4B54;
// 32-bit Stream Switch Subordinate Configuration West 0
const unsigned int cm_stream_switch_32b_subordinate_west_0_slot2 = 0x000B4B58;
// 32-bit Stream Switch Subordinate Configuration West 0
const unsigned int cm_stream_switch_32b_subordinate_west_0_slot3 = 0x000B4B5C;
// 32-bit Stream Switch Subordinate Configuration North 0
const unsigned int cm_stream_switch_32b_subordinate_north_0_slot0 = 0x000B4B60;
// 32-bit Stream Switch Subordinate Configuration North 0
const unsigned int cm_stream_switch_32b_subordinate_north_0_slot1 = 0x000B4B64;
// 32-bit Stream Switch Subordinate Configuration North 0
const unsigned int cm_stream_switch_32b_subordinate_north_0_slot2 = 0x000B4B68;
// 32-bit Stream Switch Subordinate Configuration North 0
const unsigned int cm_stream_switch_32b_subordinate_north_0_slot3 = 0x000B4B6C;
// 32-bit Stream Switch Subordinate Configuration North 1
const unsigned int cm_stream_switch_32b_subordinate_north_1_slot0 = 0x000B4B70;
// 32-bit Stream Switch Subordinate Configuration North 1
const unsigned int cm_stream_switch_32b_subordinate_north_1_slot1 = 0x000B4B74;
// 32-bit Stream Switch Subordinate Configuration North 1
const unsigned int cm_stream_switch_32b_subordinate_north_1_slot2 = 0x000B4B78;
// 32-bit Stream Switch Subordinate Configuration North 1
const unsigned int cm_stream_switch_32b_subordinate_north_1_slot3 = 0x000B4B7C;
// 32-bit Stream Switch Subordinate Configuration East 0
const unsigned int cm_stream_switch_32b_subordinate_east_0_slot0 = 0x000B4B80;
// 32-bit Stream Switch Subordinate Configuration East 0
const unsigned int cm_stream_switch_32b_subordinate_east_0_slot1 = 0x000B4B84;
// 32-bit Stream Switch Subordinate Configuration East 0
const unsigned int cm_stream_switch_32b_subordinate_east_0_slot2 = 0x000B4B88;
// 32-bit Stream Switch Subordinate Configuration East 0
const unsigned int cm_stream_switch_32b_subordinate_east_0_slot3 = 0x000B4B8C;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 0
const unsigned int cm_stream_switch_32b_subordinate_512b_switch_0_slot0 = 0x000B4B90;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 0
const unsigned int cm_stream_switch_32b_subordinate_512b_switch_0_slot1 = 0x000B4B94;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 0
const unsigned int cm_stream_switch_32b_subordinate_512b_switch_0_slot2 = 0x000B4B98;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 0
const unsigned int cm_stream_switch_32b_subordinate_512b_switch_0_slot3 = 0x000B4B9C;
// Select Stream Switch Ports for event generation
const unsigned int cm_stream_switch_event_port_selection_0 = 0x000B4F00;
// Select Stream Switch Ports for event generation
const unsigned int cm_stream_switch_event_port_selection_1 = 0x000B4F04;
// Status of control packet handling
const unsigned int cm_tile_control_packet_handler_status = 0x000B4F10;
// Trigger for CSSD (privileged)
const unsigned int cm_cssd_trigger = 0x000E0000;
// ECC control. Writing to this register has no effect on devices without ECC. (privileged)
const unsigned int cm_ecc_control = 0x000E0010;
// ECC Scrubbing Period. Writing to this register has no effect on devices without ECC. (privileged)
const unsigned int cm_ecc_scrubbing_period = 0x000E0014;
// ECC Failing Address. Writing to this register has no effect on devices without ECC. (privileged)
const unsigned int cm_ecc_failing_address = 0x000E0018;
// Status bits for Parity errors on stream switch ports (error on any 32-bit word) (privileged)
const unsigned int cm_stream_switch_parity_status = 0x000E0020;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int cm_stream_switch_parity_injection_0 = 0x000E0024;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int cm_stream_switch_parity_injection_1 = 0x000E0028;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int cm_stream_switch_32b_parity_injection = 0x000E002C;
// Control clock gating of modules (privileged)
const unsigned int cm_module_clock_control = 0x000E0030;
// Software override of medium-grained clock gating (privileged)
const unsigned int cm_medium_grained_clock_gating_control = 0x000E0034;
// Tile control register (Isolation) (privileged)
const unsigned int cm_tile_control = 0x000E0040;
// Core Reset Defeature Control (privileged)
const unsigned int cm_core_reset_defeature = 0x000E0050;
// Spare register (privileged)
const unsigned int cm_spare_reg_privileged = 0x000E0060;
// Single/two-application mode configuration (privileged)
const unsigned int cm_dual_app_mode = 0x000E0070;
// Control for memory (privileged)
const unsigned int cm_memory_control = 0x000E0080;
// Short loop disable control (privileged)
const unsigned int cm_short_loop_defeature = 0x000E0084;
// Control program memory (PM) interleaving (privileged)
const unsigned int cm_memory_interleaving = 0x000E0088;
// Program Memory Error Injection (32 kbyte) (privileged)
const unsigned int cm_program_memory_error_injection = 0x000E8000;

// Register definitions for CM_INT
// ###################################
// // Accumulator BM0LL0 Part 1
// const unsigned int cm_int_core_bm0ll0_part1 = 0x00090000;
// // Accumulator BM0LL0 Part 2
// const unsigned int cm_int_core_bm0ll0_part2 = 0x00090010;
// // Accumulator BM0LL0 Part 3
// const unsigned int cm_int_core_bm0ll0_part3 = 0x00090020;
// // Accumulator BM0LL0 Part 4
// const unsigned int cm_int_core_bm0ll0_part4 = 0x00090030;
// // Accumulator BM0LH0 Part 1
// const unsigned int cm_int_core_bm0lh0_part1 = 0x00090040;
// // Accumulator BM0LH0 Part 2
// const unsigned int cm_int_core_bm0lh0_part2 = 0x00090050;
// // Accumulator BM0LH0 Part 3
// const unsigned int cm_int_core_bm0lh0_part3 = 0x00090060;
// // Accumulator BM0LH0 Part 4
// const unsigned int cm_int_core_bm0lh0_part4 = 0x00090070;
// // Accumulator BM0HL0 Part 1
// const unsigned int cm_int_core_bm0hl0_part1 = 0x00090080;
// // Accumulator BM0HL0 Part 2
// const unsigned int cm_int_core_bm0hl0_part2 = 0x00090090;
// // Accumulator BM0HL0 Part 3
// const unsigned int cm_int_core_bm0hl0_part3 = 0x000900A0;
// // Accumulator BM0LH0 Part 4
// const unsigned int cm_int_core_bm0hl0_part4 = 0x000900B0;
// // Accumulator BM0HH0 Part 1
// const unsigned int cm_int_core_bm0hh0_part1 = 0x000900C0;
// // Accumulator BM0HH0 Part 2
// const unsigned int cm_int_core_bm0hh0_part2 = 0x000900D0;
// // Accumulator BM0HH0 Part 3
// const unsigned int cm_int_core_bm0hh0_part3 = 0x000900E0;
// // Accumulator BM0LH0 Part 4
// const unsigned int cm_int_core_bm0hh0_part4 = 0x000900F0;
// // Accumulator BM0LL1 Part 1
// const unsigned int cm_int_core_bm0ll1_part1 = 0x00090100;
// // Accumulator BM0LL1 Part 2
// const unsigned int cm_int_core_bm0ll1_part2 = 0x00090110;
// // Accumulator BM0LL1 Part 3
// const unsigned int cm_int_core_bm0ll1_part3 = 0x00090120;
// // Accumulator BM0LL1 Part 4
// const unsigned int cm_int_core_bm0ll1_part4 = 0x00090130;
// // Accumulator BM0LH1 Part 1
// const unsigned int cm_int_core_bm0lh1_part1 = 0x00090140;
// // Accumulator BM0LH1 Part 2
// const unsigned int cm_int_core_bm0lh1_part2 = 0x00090150;
// // Accumulator BM0LH1 Part 3
// const unsigned int cm_int_core_bm0lh1_part3 = 0x00090160;
// // Accumulator BM0LH1 Part 4
// const unsigned int cm_int_core_bm0lh1_part4 = 0x00090170;
// // Accumulator BM0HL1 Part 1
// const unsigned int cm_int_core_bm0hl1_part1 = 0x00090180;
// // Accumulator BM0HL1 Part 2
// const unsigned int cm_int_core_bm0hl1_part2 = 0x00090190;
// // Accumulator BM0HL1 Part 3
// const unsigned int cm_int_core_bm0hl1_part3 = 0x000901A0;
// // Accumulator BM0LH1 Part 4
// const unsigned int cm_int_core_bm0hl1_part4 = 0x000901B0;
// // Accumulator BM0HH1 Part 1
// const unsigned int cm_int_core_bm0hh1_part1 = 0x000901C0;
// // Accumulator BM0HH1 Part 2
// const unsigned int cm_int_core_bm0hh1_part2 = 0x000901D0;
// // Accumulator BM0HH1 Part 3
// const unsigned int cm_int_core_bm0hh1_part3 = 0x000901E0;
// // Accumulator BM0LH1 Part 4
// const unsigned int cm_int_core_bm0hh1_part4 = 0x000901F0;
// // Accumulator BM0LL2 Part 1
// const unsigned int cm_int_core_bm0ll2_part1 = 0x00090200;
// // Accumulator BM0LL2 Part 2
// const unsigned int cm_int_core_bm0ll2_part2 = 0x00090210;
// // Accumulator BM0LL2 Part 3
// const unsigned int cm_int_core_bm0ll2_part3 = 0x00090220;
// // Accumulator BM0LL2 Part 4
// const unsigned int cm_int_core_bm0ll2_part4 = 0x00090230;
// // Accumulator BM0LH2 Part 1
// const unsigned int cm_int_core_bm0lh2_part1 = 0x00090240;
// // Accumulator BM0LH2 Part 2
// const unsigned int cm_int_core_bm0lh2_part2 = 0x00090250;
// // Accumulator BM0LH2 Part 3
// const unsigned int cm_int_core_bm0lh2_part3 = 0x00090260;
// // Accumulator BM0LH2 Part 4
// const unsigned int cm_int_core_bm0lh2_part4 = 0x00090270;
// // Accumulator BM0HL2 Part 1
// const unsigned int cm_int_core_bm0hl2_part1 = 0x00090280;
// // Accumulator BM0HL2 Part 2
// const unsigned int cm_int_core_bm0hl2_part2 = 0x00090290;
// // Accumulator BM0HL2 Part 3
// const unsigned int cm_int_core_bm0hl2_part3 = 0x000902A0;
// // Accumulator BM0LH2 Part 4
// const unsigned int cm_int_core_bm0hl2_part4 = 0x000902B0;
// // Accumulator BM0HH2 Part 1
// const unsigned int cm_int_core_bm0hh2_part1 = 0x000902C0;
// // Accumulator BM0HH2 Part 2
// const unsigned int cm_int_core_bm0hh2_part2 = 0x000902D0;
// // Accumulator BM0HH2 Part 3
// const unsigned int cm_int_core_bm0hh2_part3 = 0x000902E0;
// // Accumulator BM0LH2 Part 4
// const unsigned int cm_int_core_bm0hh2_part4 = 0x000902F0;
// // Accumulator BM0LL3 Part 1
// const unsigned int cm_int_core_bm0ll3_part1 = 0x00090300;
// // Accumulator BM0LL3 Part 2
// const unsigned int cm_int_core_bm0ll3_part2 = 0x00090310;
// // Accumulator BM0LL3 Part 3
// const unsigned int cm_int_core_bm0ll3_part3 = 0x00090320;
// // Accumulator BM0LL3 Part 4
// const unsigned int cm_int_core_bm0ll3_part4 = 0x00090330;
// // Accumulator BM0LH3 Part 1
// const unsigned int cm_int_core_bm0lh3_part1 = 0x00090340;
// // Accumulator BM0LH3 Part 2
// const unsigned int cm_int_core_bm0lh3_part2 = 0x00090350;
// // Accumulator BM0LH3 Part 3
// const unsigned int cm_int_core_bm0lh3_part3 = 0x00090360;
// // Accumulator BM0LH3 Part 4
// const unsigned int cm_int_core_bm0lh3_part4 = 0x00090370;
// // Accumulator BM0HL3 Part 1
// const unsigned int cm_int_core_bm0hl3_part1 = 0x00090380;
// // Accumulator BM0HL3 Part 2
// const unsigned int cm_int_core_bm0hl3_part2 = 0x00090390;
// // Accumulator BM0HL3 Part 3
// const unsigned int cm_int_core_bm0hl3_part3 = 0x000903A0;
// // Accumulator BM0LH3 Part 4
// const unsigned int cm_int_core_bm0hl3_part4 = 0x000903B0;
// // Accumulator BM0HH3 Part 1
// const unsigned int cm_int_core_bm0hh3_part1 = 0x000903C0;
// // Accumulator BM0HH3 Part 2
// const unsigned int cm_int_core_bm0hh3_part2 = 0x000903D0;
// // Accumulator BM0HH3 Part 3
// const unsigned int cm_int_core_bm0hh3_part3 = 0x000903E0;
// // Accumulator BM0LH3 Part 4
// const unsigned int cm_int_core_bm0hh3_part4 = 0x000903F0;
// // Accumulator BM0LL4 Part 1
// const unsigned int cm_int_core_bm0ll4_part1 = 0x00090400;
// // Accumulator BM0LL4 Part 2
// const unsigned int cm_int_core_bm0ll4_part2 = 0x00090410;
// // Accumulator BM0LL4 Part 3
// const unsigned int cm_int_core_bm0ll4_part3 = 0x00090420;
// // Accumulator BM0LL4 Part 4
// const unsigned int cm_int_core_bm0ll4_part4 = 0x00090430;
// // Accumulator BM0LH4 Part 1
// const unsigned int cm_int_core_bm0lh4_part1 = 0x00090440;
// // Accumulator BM0LH4 Part 2
// const unsigned int cm_int_core_bm0lh4_part2 = 0x00090450;
// // Accumulator BM0LH4 Part 3
// const unsigned int cm_int_core_bm0lh4_part3 = 0x00090460;
// // Accumulator BM0LH4 Part 4
// const unsigned int cm_int_core_bm0lh4_part4 = 0x00090470;
// // Accumulator BM0HL4 Part 1
// const unsigned int cm_int_core_bm0hl4_part1 = 0x00090480;
// // Accumulator BM0HL4 Part 2
// const unsigned int cm_int_core_bm0hl4_part2 = 0x00090490;
// // Accumulator BM0HL4 Part 3
// const unsigned int cm_int_core_bm0hl4_part3 = 0x000904A0;
// // Accumulator BM0LH4 Part 4
// const unsigned int cm_int_core_bm0hl4_part4 = 0x000904B0;
// // Accumulator BM0HH4 Part 1
// const unsigned int cm_int_core_bm0hh4_part1 = 0x000904C0;
// // Accumulator BM0HH4 Part 2
// const unsigned int cm_int_core_bm0hh4_part2 = 0x000904D0;
// // Accumulator BM0HH4 Part 3
// const unsigned int cm_int_core_bm0hh4_part3 = 0x000904E0;
// // Accumulator BM0LH4 Part 4
// const unsigned int cm_int_core_bm0hh4_part4 = 0x000904F0;
// // Accumulator BM0LL5 Part 1
// const unsigned int cm_int_core_bm0ll5_part1 = 0x00090500;
// // Accumulator BM0LL5 Part 2
// const unsigned int cm_int_core_bm0ll5_part2 = 0x00090510;
// // Accumulator BM0LL5 Part 3
// const unsigned int cm_int_core_bm0ll5_part3 = 0x00090520;
// // Accumulator BM0LL5 Part 4
// const unsigned int cm_int_core_bm0ll5_part4 = 0x00090530;
// // Accumulator BM0LH5 Part 1
// const unsigned int cm_int_core_bm0lh5_part1 = 0x00090540;
// // Accumulator BM0LH5 Part 2
// const unsigned int cm_int_core_bm0lh5_part2 = 0x00090550;
// // Accumulator BM0LH5 Part 3
// const unsigned int cm_int_core_bm0lh5_part3 = 0x00090560;
// // Accumulator BM0LH5 Part 4
// const unsigned int cm_int_core_bm0lh5_part4 = 0x00090570;
// // Accumulator BM0HL5 Part 1
// const unsigned int cm_int_core_bm0hl5_part1 = 0x00090580;
// // Accumulator BM0HL5 Part 2
// const unsigned int cm_int_core_bm0hl5_part2 = 0x00090590;
// // Accumulator BM0HL5 Part 3
// const unsigned int cm_int_core_bm0hl5_part3 = 0x000905A0;
// // Accumulator BM0HL5 Part 4
// const unsigned int cm_int_core_bm0hl5_part4 = 0x000905B0;
// // Accumulator BM0HH5 Part 1
// const unsigned int cm_int_core_bm0hh5_part1 = 0x000905C0;
// // Accumulator BM0HH5 Part 2
// const unsigned int cm_int_core_bm0hh5_part2 = 0x000905D0;
// // Accumulator BM0HH5 Part 3
// const unsigned int cm_int_core_bm0hh5_part3 = 0x000905E0;
// // Accumulator BM0HH5 Part 4
// const unsigned int cm_int_core_bm0hh5_part4 = 0x000905F0;
// // Accumulator BM0LL6 Part 1
// const unsigned int cm_int_core_bm0ll6_part1 = 0x00090600;
// // Accumulator BM0LL6 Part 2
// const unsigned int cm_int_core_bm0ll6_part2 = 0x00090610;
// // Accumulator BM0LL6 Part 3
// const unsigned int cm_int_core_bm0ll6_part3 = 0x00090620;
// // Accumulator BM0LL6 Part 4
// const unsigned int cm_int_core_bm0ll6_part4 = 0x00090630;
// // Accumulator BM0LH6 Part 1
// const unsigned int cm_int_core_bm0lh6_part1 = 0x00090640;
// // Accumulator BM0LH6 Part 2
// const unsigned int cm_int_core_bm0lh6_part2 = 0x00090650;
// // Accumulator BM0LH6 Part 3
// const unsigned int cm_int_core_bm0lh6_part3 = 0x00090660;
// // Accumulator BM0LH6 Part 4
// const unsigned int cm_int_core_bm0lh6_part4 = 0x00090670;
// // Accumulator BM0HL6 Part 1
// const unsigned int cm_int_core_bm0hl6_part1 = 0x00090680;
// // Accumulator BM0HL6 Part 2
// const unsigned int cm_int_core_bm0hl6_part2 = 0x00090690;
// // Accumulator BM0HL6 Part 3
// const unsigned int cm_int_core_bm0hl6_part3 = 0x000906A0;
// // Accumulator BM0HL6 Part 4
// const unsigned int cm_int_core_bm0hl6_part4 = 0x000906B0;
// // Accumulator BM0HH6 Part 1
// const unsigned int cm_int_core_bm0hh6_part1 = 0x000906C0;
// // Accumulator BM0HH6 Part 2
// const unsigned int cm_int_core_bm0hh6_part2 = 0x000906D0;
// // Accumulator BM0HH6 Part 3
// const unsigned int cm_int_core_bm0hh6_part3 = 0x000906E0;
// // Accumulator BM0HH6 Part 4
// const unsigned int cm_int_core_bm0hh6_part4 = 0x000906F0;
// // Accumulator BM0LL7 Part 1
// const unsigned int cm_int_core_bm0ll7_part1 = 0x00090700;
// // Accumulator BM0LL7 Part 2
// const unsigned int cm_int_core_bm0ll7_part2 = 0x00090710;
// // Accumulator BM0LL7 Part 3
// const unsigned int cm_int_core_bm0ll7_part3 = 0x00090720;
// // Accumulator BM0LL7 Part 4
// const unsigned int cm_int_core_bm0ll7_part4 = 0x00090730;
// // Accumulator BM0LH7 Part 1
// const unsigned int cm_int_core_bm0lh7_part1 = 0x00090740;
// // Accumulator BM0LH7 Part 2
// const unsigned int cm_int_core_bm0lh7_part2 = 0x00090750;
// // Accumulator BM0LH7 Part 3
// const unsigned int cm_int_core_bm0lh7_part3 = 0x00090760;
// // Accumulator BM0LH7 Part 4
// const unsigned int cm_int_core_bm0lh7_part4 = 0x00090770;
// // Accumulator BM0HL7 Part 1
// const unsigned int cm_int_core_bm0hl7_part1 = 0x00090780;
// // Accumulator BM0HL7 Part 2
// const unsigned int cm_int_core_bm0hl7_part2 = 0x00090790;
// // Accumulator BM0HL7 Part 3
// const unsigned int cm_int_core_bm0hl7_part3 = 0x000907A0;
// // Accumulator BM0HL7 Part 4
// const unsigned int cm_int_core_bm0hl7_part4 = 0x000907B0;
// // Accumulator BM0HH7 Part 1
// const unsigned int cm_int_core_bm0hh7_part1 = 0x000907C0;
// // Accumulator BM0HH7 Part 2
// const unsigned int cm_int_core_bm0hh7_part2 = 0x000907D0;
// // Accumulator BM0HH7 Part 3
// const unsigned int cm_int_core_bm0hh7_part3 = 0x000907E0;
// // Accumulator BM0HH7 Part 4
// const unsigned int cm_int_core_bm0hh7_part4 = 0x000907F0;
// // Accumulator BM0LL8 Part 1
// const unsigned int cm_int_core_bm0ll8_part1 = 0x00090800;
// // Accumulator BM0LL8 Part 2
// const unsigned int cm_int_core_bm0ll8_part2 = 0x00090810;
// // Accumulator BM0LL8 Part 3
// const unsigned int cm_int_core_bm0ll8_part3 = 0x00090820;
// // Accumulator BM0LL8 Part 4
// const unsigned int cm_int_core_bm0ll8_part4 = 0x00090830;
// // Accumulator BM0LH8 Part 1
// const unsigned int cm_int_core_bm0lh8_part1 = 0x00090840;
// // Accumulator BM0LH8 Part 2
// const unsigned int cm_int_core_bm0lh8_part2 = 0x00090850;
// // Accumulator BM0LH8 Part 3
// const unsigned int cm_int_core_bm0lh8_part3 = 0x00090860;
// // Accumulator BM0LH8 Part 4
// const unsigned int cm_int_core_bm0lh8_part4 = 0x00090870;
// // Accumulator BM0HL8 Part 1
// const unsigned int cm_int_core_bm0hl8_part1 = 0x00090880;
// // Accumulator BM0HL8 Part 2
// const unsigned int cm_int_core_bm0hl8_part2 = 0x00090890;
// // Accumulator BM0HL8 Part 3
// const unsigned int cm_int_core_bm0hl8_part3 = 0x000908A0;
// // Accumulator BM0HL8 Part 4
// const unsigned int cm_int_core_bm0hl8_part4 = 0x000908B0;
// // Accumulator BM0HH8 Part 1
// const unsigned int cm_int_core_bm0hh8_part1 = 0x000908C0;
// // Accumulator BM0HH8 Part 2
// const unsigned int cm_int_core_bm0hh8_part2 = 0x000908D0;
// // Accumulator BM0HH8 Part 3
// const unsigned int cm_int_core_bm0hh8_part3 = 0x000908E0;
// // Accumulator BM0HH8 Part 4
// const unsigned int cm_int_core_bm0hh8_part4 = 0x000908F0;
// // Accumulator BM0LL9 Part 1
// const unsigned int cm_int_core_bm0ll9_part1 = 0x00090900;
// // Accumulator BM0LL9 Part 2
// const unsigned int cm_int_core_bm0ll9_part2 = 0x00090910;
// // Accumulator BM0LL9 Part 3
// const unsigned int cm_int_core_bm0ll9_part3 = 0x00090920;
// // Accumulator BM0LL9 Part 4
// const unsigned int cm_int_core_bm0ll9_part4 = 0x00090930;
// // Accumulator BM0LH9 Part 1
// const unsigned int cm_int_core_bm0lh9_part1 = 0x00090940;
// // Accumulator BM0LH9 Part 2
// const unsigned int cm_int_core_bm0lh9_part2 = 0x00090950;
// // Accumulator BM0LH9 Part 3
// const unsigned int cm_int_core_bm0lh9_part3 = 0x00090960;
// // Accumulator BM0LH9 Part 4
// const unsigned int cm_int_core_bm0lh9_part4 = 0x00090970;
// // Accumulator BM0HL9 Part 1
// const unsigned int cm_int_core_bm0hl9_part1 = 0x00090980;
// // Accumulator BM0HL9 Part 2
// const unsigned int cm_int_core_bm0hl9_part2 = 0x00090990;
// // Accumulator BM0HL9 Part 3
// const unsigned int cm_int_core_bm0hl9_part3 = 0x000909A0;
// // Accumulator BM0HL9 Part 4
// const unsigned int cm_int_core_bm0hl9_part4 = 0x000909B0;
// // Accumulator BM0HH9 Part 1
// const unsigned int cm_int_core_bm0hh9_part1 = 0x000909C0;
// // Accumulator BM0HH9 Part 2
// const unsigned int cm_int_core_bm0hh9_part2 = 0x000909D0;
// // Accumulator BM0HH9 Part 3
// const unsigned int cm_int_core_bm0hh9_part3 = 0x000909E0;
// // Accumulator BM0HH9 Part 4
// const unsigned int cm_int_core_bm0hh9_part4 = 0x000909F0;
// // Accumulator BM0LL10 Part 1
// const unsigned int cm_int_core_bm0ll10_part1 = 0x00090A00;
// // Accumulator BM0LL10 Part 2
// const unsigned int cm_int_core_bm0ll10_part2 = 0x00090A10;
// // Accumulator BM0LL10 Part 3
// const unsigned int cm_int_core_bm0ll10_part3 = 0x00090A20;
// // Accumulator BM0LL10 Part 4
// const unsigned int cm_int_core_bm0ll10_part4 = 0x00090A30;
// // Accumulator BM0LH10 Part 1
// const unsigned int cm_int_core_bm0lh10_part1 = 0x00090A40;
// // Accumulator BM0LH10 Part 2
// const unsigned int cm_int_core_bm0lh10_part2 = 0x00090A50;
// // Accumulator BM0LH10 Part 3
// const unsigned int cm_int_core_bm0lh10_part3 = 0x00090A60;
// // Accumulator BM0LH10 Part 4
// const unsigned int cm_int_core_bm0lh10_part4 = 0x00090A70;
// // Accumulator BM0HL10 Part 1
// const unsigned int cm_int_core_bm0hl10_part1 = 0x00090A80;
// // Accumulator BM0HL10 Part 2
// const unsigned int cm_int_core_bm0hl10_part2 = 0x00090A90;
// // Accumulator BM0HL10 Part 3
// const unsigned int cm_int_core_bm0hl10_part3 = 0x00090AA0;
// // Accumulator BM0HL10 Part 4
// const unsigned int cm_int_core_bm0hl10_part4 = 0x00090AB0;
// // Accumulator BM0HH10 Part 1
// const unsigned int cm_int_core_bm0hh10_part1 = 0x00090AC0;
// // Accumulator BM0HH10 Part 2
// const unsigned int cm_int_core_bm0hh10_part2 = 0x00090AD0;
// // Accumulator BM0HH10 Part 3
// const unsigned int cm_int_core_bm0hh10_part3 = 0x00090AE0;
// // Accumulator BM0HH10 Part 4
// const unsigned int cm_int_core_bm0hh10_part4 = 0x00090AF0;
// // Accumulator BM0LL11 Part 1
// const unsigned int cm_int_core_bm0ll11_part1 = 0x00090B00;
// // Accumulator BM0LL11 Part 2
// const unsigned int cm_int_core_bm0ll11_part2 = 0x00090B10;
// // Accumulator BM0LL11 Part 3
// const unsigned int cm_int_core_bm0ll11_part3 = 0x00090B20;
// // Accumulator BM0LL11 Part 4
// const unsigned int cm_int_core_bm0ll11_part4 = 0x00090B30;
// // Accumulator BM0LH11 Part 1
// const unsigned int cm_int_core_bm0lh11_part1 = 0x00090B40;
// // Accumulator BM0LH11 Part 2
// const unsigned int cm_int_core_bm0lh11_part2 = 0x00090B50;
// // Accumulator BM0LH11 Part 3
// const unsigned int cm_int_core_bm0lh11_part3 = 0x00090B60;
// // Accumulator BM0LH11 Part 4
// const unsigned int cm_int_core_bm0lh11_part4 = 0x00090B70;
// // Accumulator BM0HL11 Part 1
// const unsigned int cm_int_core_bm0hl11_part1 = 0x00090B80;
// // Accumulator BM0HL11 Part 2
// const unsigned int cm_int_core_bm0hl11_part2 = 0x00090B90;
// // Accumulator BM0HL11 Part 3
// const unsigned int cm_int_core_bm0hl11_part3 = 0x00090BA0;
// // Accumulator BM0HL11 Part 4
// const unsigned int cm_int_core_bm0hl11_part4 = 0x00090BB0;
// // Accumulator BM0HH11 Part 1
// const unsigned int cm_int_core_bm0hh11_part1 = 0x00090BC0;
// // Accumulator BM0HH11 Part 2
// const unsigned int cm_int_core_bm0hh11_part2 = 0x00090BD0;
// // Accumulator BM0HH11 Part 3
// const unsigned int cm_int_core_bm0hh11_part3 = 0x00090BE0;
// // Accumulator BM0HH11 Part 4
// const unsigned int cm_int_core_bm0hh11_part4 = 0x00090BF0;
// // Accumulator BM0LL12 Part 1
// const unsigned int cm_int_core_bm0ll12_part1 = 0x00090C00;
// // Accumulator BM0LL12 Part 2
// const unsigned int cm_int_core_bm0ll12_part2 = 0x00090C10;
// // Accumulator BM0LL12 Part 3
// const unsigned int cm_int_core_bm0ll12_part3 = 0x00090C20;
// // Accumulator BM0LL12 Part 4
// const unsigned int cm_int_core_bm0ll12_part4 = 0x00090C30;
// // Accumulator BM0LH12 Part 1
// const unsigned int cm_int_core_bm0lh12_part1 = 0x00090C40;
// // Accumulator BM0LH12 Part 2
// const unsigned int cm_int_core_bm0lh12_part2 = 0x00090C50;
// // Accumulator BM0LH12 Part 3
// const unsigned int cm_int_core_bm0lh12_part3 = 0x00090C60;
// // Accumulator BM0LH12 Part 4
// const unsigned int cm_int_core_bm0lh12_part4 = 0x00090C70;
// // Accumulator BM0HL12 Part 1
// const unsigned int cm_int_core_bm0hl12_part1 = 0x00090C80;
// // Accumulator BM0HL12 Part 2
// const unsigned int cm_int_core_bm0hl12_part2 = 0x00090C90;
// // Accumulator BM0HL12 Part 3
// const unsigned int cm_int_core_bm0hl12_part3 = 0x00090CA0;
// // Accumulator BM0HL12 Part 4
// const unsigned int cm_int_core_bm0hl12_part4 = 0x00090CB0;
// // Accumulator BM0HH12 Part 1
// const unsigned int cm_int_core_bm0hh12_part1 = 0x00090CC0;
// // Accumulator BM0HH12 Part 2
// const unsigned int cm_int_core_bm0hh12_part2 = 0x00090CD0;
// // Accumulator BM0HH12 Part 3
// const unsigned int cm_int_core_bm0hh12_part3 = 0x00090CE0;
// // Accumulator BM0HH12 Part 4
// const unsigned int cm_int_core_bm0hh12_part4 = 0x00090CF0;
// // Accumulator BM0LL13 Part 1
// const unsigned int cm_int_core_bm0ll13_part1 = 0x00090D00;
// // Accumulator BM0LL13 Part 2
// const unsigned int cm_int_core_bm0ll13_part2 = 0x00090D10;
// // Accumulator BM0LL13 Part 3
// const unsigned int cm_int_core_bm0ll13_part3 = 0x00090D20;
// // Accumulator BM0LL13 Part 4
// const unsigned int cm_int_core_bm0ll13_part4 = 0x00090D30;
// // Accumulator BM0LH13 Part 1
// const unsigned int cm_int_core_bm0lh13_part1 = 0x00090D40;
// // Accumulator BM0LH13 Part 2
// const unsigned int cm_int_core_bm0lh13_part2 = 0x00090D50;
// // Accumulator BM0LH13 Part 3
// const unsigned int cm_int_core_bm0lh13_part3 = 0x00090D60;
// // Accumulator BM0LH13 Part 4
// const unsigned int cm_int_core_bm0lh13_part4 = 0x00090D70;
// // Accumulator BM0HL13 Part 1
// const unsigned int cm_int_core_bm0hl13_part1 = 0x00090D80;
// // Accumulator BM0HL13 Part 2
// const unsigned int cm_int_core_bm0hl13_part2 = 0x00090D90;
// // Accumulator BM0HL13 Part 3
// const unsigned int cm_int_core_bm0hl13_part3 = 0x00090DA0;
// // Accumulator BM0HL13 Part 4
// const unsigned int cm_int_core_bm0hl13_part4 = 0x00090DB0;
// // Accumulator BM0HH13 Part 1
// const unsigned int cm_int_core_bm0hh13_part1 = 0x00090DC0;
// // Accumulator BM0HH13 Part 2
// const unsigned int cm_int_core_bm0hh13_part2 = 0x00090DD0;
// // Accumulator BM0HH13 Part 3
// const unsigned int cm_int_core_bm0hh13_part3 = 0x00090DE0;
// // Accumulator BM0HH13 Part 4
// const unsigned int cm_int_core_bm0hh13_part4 = 0x00090DF0;
// // Accumulator BM0LL14 Part 1
// const unsigned int cm_int_core_bm0ll14_part1 = 0x00090E00;
// // Accumulator BM0LL14 Part 2
// const unsigned int cm_int_core_bm0ll14_part2 = 0x00090E10;
// // Accumulator BM0LL14 Part 3
// const unsigned int cm_int_core_bm0ll14_part3 = 0x00090E20;
// // Accumulator BM0LL14 Part 4
// const unsigned int cm_int_core_bm0ll14_part4 = 0x00090E30;
// // Accumulator BM0LH14 Part 1
// const unsigned int cm_int_core_bm0lh14_part1 = 0x00090E40;
// // Accumulator BM0LH14 Part 2
// const unsigned int cm_int_core_bm0lh14_part2 = 0x00090E50;
// // Accumulator BM0LH14 Part 3
// const unsigned int cm_int_core_bm0lh14_part3 = 0x00090E60;
// // Accumulator BM0LH14 Part 4
// const unsigned int cm_int_core_bm0lh14_part4 = 0x00090E70;
// // Accumulator BM0HL14 Part 1
// const unsigned int cm_int_core_bm0hl14_part1 = 0x00090E80;
// // Accumulator BM0HL14 Part 2
// const unsigned int cm_int_core_bm0hl14_part2 = 0x00090E90;
// // Accumulator BM0HL14 Part 3
// const unsigned int cm_int_core_bm0hl14_part3 = 0x00090EA0;
// // Accumulator BM0HL14 Part 4
// const unsigned int cm_int_core_bm0hl14_part4 = 0x00090EB0;
// // Accumulator BM0HH14 Part 1
// const unsigned int cm_int_core_bm0hh14_part1 = 0x00090EC0;
// // Accumulator BM0HH14 Part 2
// const unsigned int cm_int_core_bm0hh14_part2 = 0x00090ED0;
// // Accumulator BM0HH14 Part 3
// const unsigned int cm_int_core_bm0hh14_part3 = 0x00090EE0;
// // Accumulator BM0HH14 Part 4
// const unsigned int cm_int_core_bm0hh14_part4 = 0x00090EF0;
// // Accumulator BM0LL15 Part 1
// const unsigned int cm_int_core_bm0ll15_part1 = 0x00090F00;
// // Accumulator BM0LL15 Part 2
// const unsigned int cm_int_core_bm0ll15_part2 = 0x00090F10;
// // Accumulator BM0LL15 Part 3
// const unsigned int cm_int_core_bm0ll15_part3 = 0x00090F20;
// // Accumulator BM0LL15 Part 4
// const unsigned int cm_int_core_bm0ll15_part4 = 0x00090F30;
// // Accumulator BM0LH15 Part 1
// const unsigned int cm_int_core_bm0lh15_part1 = 0x00090F40;
// // Accumulator BM0LH15 Part 2
// const unsigned int cm_int_core_bm0lh15_part2 = 0x00090F50;
// // Accumulator BM0LH15 Part 3
// const unsigned int cm_int_core_bm0lh15_part3 = 0x00090F60;
// // Accumulator BM0LH15 Part 4
// const unsigned int cm_int_core_bm0lh15_part4 = 0x00090F70;
// // Accumulator BM0HL15 Part 1
// const unsigned int cm_int_core_bm0hl15_part1 = 0x00090F80;
// // Accumulator BM0HL15 Part 2
// const unsigned int cm_int_core_bm0hl15_part2 = 0x00090F90;
// // Accumulator BM0HL15 Part 3
// const unsigned int cm_int_core_bm0hl15_part3 = 0x00090FA0;
// // Accumulator BM0HL15 Part 4
// const unsigned int cm_int_core_bm0hl15_part4 = 0x00090FB0;
// // Accumulator BM0HH15 Part 1
// const unsigned int cm_int_core_bm0hh15_part1 = 0x00090FC0;
// // Accumulator BM0HH15 Part 2
// const unsigned int cm_int_core_bm0hh15_part2 = 0x00090FD0;
// // Accumulator BM0HH15 Part 3
// const unsigned int cm_int_core_bm0hh15_part3 = 0x00090FE0;
// // Accumulator BM0HH15 Part 4
// const unsigned int cm_int_core_bm0hh15_part4 = 0x00090FF0;
// // Accumulator BM0LL16 Part 1
// const unsigned int cm_int_core_bm0ll16_part1 = 0x00091000;
// // Accumulator BM0LL16 Part 2
// const unsigned int cm_int_core_bm0ll16_part2 = 0x00091010;
// // Accumulator BM0LL16 Part 3
// const unsigned int cm_int_core_bm0ll16_part3 = 0x00091020;
// // Accumulator BM0LL16 Part 4
// const unsigned int cm_int_core_bm0ll16_part4 = 0x00091030;
// // Accumulator BM0LH16 Part 1
// const unsigned int cm_int_core_bm0lh16_part1 = 0x00091040;
// // Accumulator BM0LH16 Part 2
// const unsigned int cm_int_core_bm0lh16_part2 = 0x00091050;
// // Accumulator BM0LH16 Part 3
// const unsigned int cm_int_core_bm0lh16_part3 = 0x00091060;
// // Accumulator BM0LH16 Part 4
// const unsigned int cm_int_core_bm0lh16_part4 = 0x00091070;
// // Accumulator BM0HL16 Part 1
// const unsigned int cm_int_core_bm0hl16_part1 = 0x00091080;
// // Accumulator BM0HL16 Part 2
// const unsigned int cm_int_core_bm0hl16_part2 = 0x00091090;
// // Accumulator BM0HL16 Part 3
// const unsigned int cm_int_core_bm0hl16_part3 = 0x000910A0;
// // Accumulator BM0HL16 Part 4
// const unsigned int cm_int_core_bm0hl16_part4 = 0x000910B0;
// // Accumulator BM0HH16 Part 1
// const unsigned int cm_int_core_bm0hh16_part1 = 0x000910C0;
// // Accumulator BM0HH16 Part 2
// const unsigned int cm_int_core_bm0hh16_part2 = 0x000910D0;
// // Accumulator BM0HH16 Part 3
// const unsigned int cm_int_core_bm0hh16_part3 = 0x000910E0;
// // Accumulator BM0HH16 Part 4
// const unsigned int cm_int_core_bm0hh16_part4 = 0x000910F0;
// // Accumulator BM0LL17 Part 1
// const unsigned int cm_int_core_bm0ll17_part1 = 0x00091100;
// // Accumulator BM0LL17 Part 2
// const unsigned int cm_int_core_bm0ll17_part2 = 0x00091110;
// // Accumulator BM0LL17 Part 3
// const unsigned int cm_int_core_bm0ll17_part3 = 0x00091120;
// // Accumulator BM0LL17 Part 4
// const unsigned int cm_int_core_bm0ll17_part4 = 0x00091130;
// // Accumulator BM0LH17 Part 1
// const unsigned int cm_int_core_bm0lh17_part1 = 0x00091140;
// // Accumulator BM0LH17 Part 2
// const unsigned int cm_int_core_bm0lh17_part2 = 0x00091150;
// // Accumulator BM0LH17 Part 3
// const unsigned int cm_int_core_bm0lh17_part3 = 0x00091160;
// // Accumulator BM0LH17 Part 4
// const unsigned int cm_int_core_bm0lh17_part4 = 0x00091170;
// // Accumulator BM0HL17 Part 1
// const unsigned int cm_int_core_bm0hl17_part1 = 0x00091180;
// // Accumulator BM0HL17 Part 2
// const unsigned int cm_int_core_bm0hl17_part2 = 0x00091190;
// // Accumulator BM0HL17 Part 3
// const unsigned int cm_int_core_bm0hl17_part3 = 0x000911A0;
// // Accumulator BM0HL17 Part 4
// const unsigned int cm_int_core_bm0hl17_part4 = 0x000911B0;
// // Accumulator BM0HH17 Part 1
// const unsigned int cm_int_core_bm0hh17_part1 = 0x000911C0;
// // Accumulator BM0HH17 Part 2
// const unsigned int cm_int_core_bm0hh17_part2 = 0x000911D0;
// // Accumulator BM0HH17 Part 3
// const unsigned int cm_int_core_bm0hh17_part3 = 0x000911E0;
// // Accumulator BM0HH17 Part 4
// const unsigned int cm_int_core_bm0hh17_part4 = 0x000911F0;
// // Accumulator BM0LL18 Part 1
// const unsigned int cm_int_core_bm0ll18_part1 = 0x00091200;
// // Accumulator BM0LL18 Part 2
// const unsigned int cm_int_core_bm0ll18_part2 = 0x00091210;
// // Accumulator BM0LL18 Part 3
// const unsigned int cm_int_core_bm0ll18_part3 = 0x00091220;
// // Accumulator BM0LL18 Part 4
// const unsigned int cm_int_core_bm0ll18_part4 = 0x00091230;
// // Accumulator BM0LH18 Part 1
// const unsigned int cm_int_core_bm0lh18_part1 = 0x00091240;
// // Accumulator BM0LH18 Part 2
// const unsigned int cm_int_core_bm0lh18_part2 = 0x00091250;
// // Accumulator BM0LH18 Part 3
// const unsigned int cm_int_core_bm0lh18_part3 = 0x00091260;
// // Accumulator BM0LH18 Part 4
// const unsigned int cm_int_core_bm0lh18_part4 = 0x00091270;
// // Accumulator BM0HL18 Part 1
// const unsigned int cm_int_core_bm0hl18_part1 = 0x00091280;
// // Accumulator BM0HL18 Part 2
// const unsigned int cm_int_core_bm0hl18_part2 = 0x00091290;
// // Accumulator BM0HL18 Part 3
// const unsigned int cm_int_core_bm0hl18_part3 = 0x000912A0;
// // Accumulator BM0HL18 Part 4
// const unsigned int cm_int_core_bm0hl18_part4 = 0x000912B0;
// // Accumulator BM0HH18 Part 1
// const unsigned int cm_int_core_bm0hh18_part1 = 0x000912C0;
// // Accumulator BM0HH18 Part 2
// const unsigned int cm_int_core_bm0hh18_part2 = 0x000912D0;
// // Accumulator BM0HH18 Part 3
// const unsigned int cm_int_core_bm0hh18_part3 = 0x000912E0;
// // Accumulator BM0HH18 Part 4
// const unsigned int cm_int_core_bm0hh18_part4 = 0x000912F0;
// // Accumulator BM0LL19 Part 1
// const unsigned int cm_int_core_bm0ll19_part1 = 0x00091300;
// // Accumulator BM0LL19 Part 2
// const unsigned int cm_int_core_bm0ll19_part2 = 0x00091310;
// // Accumulator BM0LL19 Part 3
// const unsigned int cm_int_core_bm0ll19_part3 = 0x00091320;
// // Accumulator BM0LL19 Part 4
// const unsigned int cm_int_core_bm0ll19_part4 = 0x00091330;
// // Accumulator BM0LH19 Part 1
// const unsigned int cm_int_core_bm0lh19_part1 = 0x00091340;
// // Accumulator BM0LH19 Part 2
// const unsigned int cm_int_core_bm0lh19_part2 = 0x00091350;
// // Accumulator BM0LH19 Part 3
// const unsigned int cm_int_core_bm0lh19_part3 = 0x00091360;
// // Accumulator BM0LH19 Part 4
// const unsigned int cm_int_core_bm0lh19_part4 = 0x00091370;
// // Accumulator BM0HL19 Part 1
// const unsigned int cm_int_core_bm0hl19_part1 = 0x00091380;
// // Accumulator BM0HL19 Part 2
// const unsigned int cm_int_core_bm0hl19_part2 = 0x00091390;
// // Accumulator BM0HL19 Part 3
// const unsigned int cm_int_core_bm0hl19_part3 = 0x000913A0;
// // Accumulator BM0HL19 Part 4
// const unsigned int cm_int_core_bm0hl19_part4 = 0x000913B0;
// // Accumulator BM0HH19 Part 1
// const unsigned int cm_int_core_bm0hh19_part1 = 0x000913C0;
// // Accumulator BM0HH19 Part 2
// const unsigned int cm_int_core_bm0hh19_part2 = 0x000913D0;
// // Accumulator BM0HH19 Part 3
// const unsigned int cm_int_core_bm0hh19_part3 = 0x000913E0;
// // Accumulator BM0HH19 Part 4
// const unsigned int cm_int_core_bm0hh19_part4 = 0x000913F0;
// // Accumulator BM0LL20 Part 1
// const unsigned int cm_int_core_bm0ll20_part1 = 0x00091400;
// // Accumulator BM0LL20 Part 2
// const unsigned int cm_int_core_bm0ll20_part2 = 0x00091410;
// // Accumulator BM0LL20 Part 3
// const unsigned int cm_int_core_bm0ll20_part3 = 0x00091420;
// // Accumulator BM0LL20 Part 4
// const unsigned int cm_int_core_bm0ll20_part4 = 0x00091430;
// // Accumulator BM0LH20 Part 1
// const unsigned int cm_int_core_bm0lh20_part1 = 0x00091440;
// // Accumulator BM0LH20 Part 2
// const unsigned int cm_int_core_bm0lh20_part2 = 0x00091450;
// // Accumulator BM0LH20 Part 3
// const unsigned int cm_int_core_bm0lh20_part3 = 0x00091460;
// // Accumulator BM0LH20 Part 4
// const unsigned int cm_int_core_bm0lh20_part4 = 0x00091470;
// // Accumulator BM0HL20 Part 1
// const unsigned int cm_int_core_bm0hl20_part1 = 0x00091480;
// // Accumulator BM0HL20 Part 2
// const unsigned int cm_int_core_bm0hl20_part2 = 0x00091490;
// // Accumulator BM0HL20 Part 3
// const unsigned int cm_int_core_bm0hl20_part3 = 0x000914A0;
// // Accumulator BM0HL20 Part 4
// const unsigned int cm_int_core_bm0hl20_part4 = 0x000914B0;
// // Accumulator BM0HH20 Part 1
// const unsigned int cm_int_core_bm0hh20_part1 = 0x000914C0;
// // Accumulator BM0HH20 Part 2
// const unsigned int cm_int_core_bm0hh20_part2 = 0x000914D0;
// // Accumulator BM0HH20 Part 3
// const unsigned int cm_int_core_bm0hh20_part3 = 0x000914E0;
// // Accumulator BM0HH20 Part 4
// const unsigned int cm_int_core_bm0hh20_part4 = 0x000914F0;
// // Accumulator BM0LL21 Part 1
// const unsigned int cm_int_core_bm0ll21_part1 = 0x00091500;
// // Accumulator BM0LL21 Part 2
// const unsigned int cm_int_core_bm0ll21_part2 = 0x00091510;
// // Accumulator BM0LL21 Part 3
// const unsigned int cm_int_core_bm0ll21_part3 = 0x00091520;
// // Accumulator BM0LL21 Part 4
// const unsigned int cm_int_core_bm0ll21_part4 = 0x00091530;
// // Accumulator BM0LH21 Part 1
// const unsigned int cm_int_core_bm0lh21_part1 = 0x00091540;
// // Accumulator BM0LH21 Part 2
// const unsigned int cm_int_core_bm0lh21_part2 = 0x00091550;
// // Accumulator BM0LH21 Part 3
// const unsigned int cm_int_core_bm0lh21_part3 = 0x00091560;
// // Accumulator BM0LH21 Part 4
// const unsigned int cm_int_core_bm0lh21_part4 = 0x00091570;
// // Accumulator BM0HL21 Part 1
// const unsigned int cm_int_core_bm0hl21_part1 = 0x00091580;
// // Accumulator BM0HL21 Part 2
// const unsigned int cm_int_core_bm0hl21_part2 = 0x00091590;
// // Accumulator BM0HL21 Part 3
// const unsigned int cm_int_core_bm0hl21_part3 = 0x000915A0;
// // Accumulator BM0HL21 Part 4
// const unsigned int cm_int_core_bm0hl21_part4 = 0x000915B0;
// // Accumulator BM0HH21 Part 1
// const unsigned int cm_int_core_bm0hh21_part1 = 0x000915C0;
// // Accumulator BM0HH21 Part 2
// const unsigned int cm_int_core_bm0hh21_part2 = 0x000915D0;
// // Accumulator BM0HH21 Part 3
// const unsigned int cm_int_core_bm0hh21_part3 = 0x000915E0;
// // Accumulator BM0HH21 Part 4
// const unsigned int cm_int_core_bm0hh21_part4 = 0x000915F0;
// // Accumulator BM0LL22 Part 1
// const unsigned int cm_int_core_bm0ll22_part1 = 0x00091600;
// // Accumulator BM0LL22 Part 2
// const unsigned int cm_int_core_bm0ll22_part2 = 0x00091610;
// // Accumulator BM0LL22 Part 3
// const unsigned int cm_int_core_bm0ll22_part3 = 0x00091620;
// // Accumulator BM0LL22 Part 4
// const unsigned int cm_int_core_bm0ll22_part4 = 0x00091630;
// // Accumulator BM0LH22 Part 1
// const unsigned int cm_int_core_bm0lh22_part1 = 0x00091640;
// // Accumulator BM0LH22 Part 2
// const unsigned int cm_int_core_bm0lh22_part2 = 0x00091650;
// // Accumulator BM0LH22 Part 3
// const unsigned int cm_int_core_bm0lh22_part3 = 0x00091660;
// // Accumulator BM0LH22 Part 4
// const unsigned int cm_int_core_bm0lh22_part4 = 0x00091670;
// // Accumulator BM0HL22 Part 1
// const unsigned int cm_int_core_bm0hl22_part1 = 0x00091680;
// // Accumulator BM0HL22 Part 2
// const unsigned int cm_int_core_bm0hl22_part2 = 0x00091690;
// // Accumulator BM0HL22 Part 3
// const unsigned int cm_int_core_bm0hl22_part3 = 0x000916A0;
// // Accumulator BM0HL22 Part 4
// const unsigned int cm_int_core_bm0hl22_part4 = 0x000916B0;
// // Accumulator BM0HH22 Part 1
// const unsigned int cm_int_core_bm0hh22_part1 = 0x000916C0;
// // Accumulator BM0HH22 Part 2
// const unsigned int cm_int_core_bm0hh22_part2 = 0x000916D0;
// // Accumulator BM0HH22 Part 3
// const unsigned int cm_int_core_bm0hh22_part3 = 0x000916E0;
// // Accumulator BM0HH22 Part 4
// const unsigned int cm_int_core_bm0hh22_part4 = 0x000916F0;
// // Accumulator BM0LL23 Part 1
// const unsigned int cm_int_core_bm0ll23_part1 = 0x00091700;
// // Accumulator BM0LL23 Part 2
// const unsigned int cm_int_core_bm0ll23_part2 = 0x00091710;
// // Accumulator BM0LL23 Part 3
// const unsigned int cm_int_core_bm0ll23_part3 = 0x00091720;
// // Accumulator BM0LL23 Part 4
// const unsigned int cm_int_core_bm0ll23_part4 = 0x00091730;
// // Accumulator BM0LH23 Part 1
// const unsigned int cm_int_core_bm0lh23_part1 = 0x00091740;
// // Accumulator BM0LH23 Part 2
// const unsigned int cm_int_core_bm0lh23_part2 = 0x00091750;
// // Accumulator BM0LH23 Part 3
// const unsigned int cm_int_core_bm0lh23_part3 = 0x00091760;
// // Accumulator BM0LH23 Part 4
// const unsigned int cm_int_core_bm0lh23_part4 = 0x00091770;
// // Accumulator BM0HL23 Part 1
// const unsigned int cm_int_core_bm0hl23_part1 = 0x00091780;
// // Accumulator BM0HL23 Part 2
// const unsigned int cm_int_core_bm0hl23_part2 = 0x00091790;
// // Accumulator BM0HL23 Part 3
// const unsigned int cm_int_core_bm0hl23_part3 = 0x000917A0;
// // Accumulator BM0HL23 Part 4
// const unsigned int cm_int_core_bm0hl23_part4 = 0x000917B0;
// // Accumulator BM0HH23 Part 1
// const unsigned int cm_int_core_bm0hh23_part1 = 0x000917C0;
// // Accumulator BM0HH23 Part 2
// const unsigned int cm_int_core_bm0hh23_part2 = 0x000917D0;
// // Accumulator BM0HH23 Part 3
// const unsigned int cm_int_core_bm0hh23_part3 = 0x000917E0;
// // Accumulator BM0HH23 Part 4
// const unsigned int cm_int_core_bm0hh23_part4 = 0x000917F0;
// // Accumulator BM0LL24 Part 1
// const unsigned int cm_int_core_bm0ll24_part1 = 0x00091800;
// // Accumulator BM0LL24 Part 2
// const unsigned int cm_int_core_bm0ll24_part2 = 0x00091810;
// // Accumulator BM0LL24 Part 3
// const unsigned int cm_int_core_bm0ll24_part3 = 0x00091820;
// // Accumulator BM0LL24 Part 4
// const unsigned int cm_int_core_bm0ll24_part4 = 0x00091830;
// // Accumulator BM0LH24 Part 1
// const unsigned int cm_int_core_bm0lh24_part1 = 0x00091840;
// // Accumulator BM0LH24 Part 2
// const unsigned int cm_int_core_bm0lh24_part2 = 0x00091850;
// // Accumulator BM0LH24 Part 3
// const unsigned int cm_int_core_bm0lh24_part3 = 0x00091860;
// // Accumulator BM0LH24 Part 4
// const unsigned int cm_int_core_bm0lh24_part4 = 0x00091870;
// // Accumulator BM0HL24 Part 1
// const unsigned int cm_int_core_bm0hl24_part1 = 0x00091880;
// // Accumulator BM0HL24 Part 2
// const unsigned int cm_int_core_bm0hl24_part2 = 0x00091890;
// // Accumulator BM0HL24 Part 3
// const unsigned int cm_int_core_bm0hl24_part3 = 0x000918A0;
// // Accumulator BM0HL24 Part 4
// const unsigned int cm_int_core_bm0hl24_part4 = 0x000918B0;
// // Accumulator BM0HH24 Part 1
// const unsigned int cm_int_core_bm0hh24_part1 = 0x000918C0;
// // Accumulator BM0HH24 Part 2
// const unsigned int cm_int_core_bm0hh24_part2 = 0x000918D0;
// // Accumulator BM0HH24 Part 3
// const unsigned int cm_int_core_bm0hh24_part3 = 0x000918E0;
// // Accumulator BM0HH24 Part 4
// const unsigned int cm_int_core_bm0hh24_part4 = 0x000918F0;
// // Accumulator BM0LL25 Part 1
// const unsigned int cm_int_core_bm0ll25_part1 = 0x00091900;
// // Accumulator BM0LL25 Part 2
// const unsigned int cm_int_core_bm0ll25_part2 = 0x00091910;
// // Accumulator BM0LL25 Part 3
// const unsigned int cm_int_core_bm0ll25_part3 = 0x00091920;
// // Accumulator BM0LL25 Part 4
// const unsigned int cm_int_core_bm0ll25_part4 = 0x00091930;
// // Accumulator BM0LH25 Part 1
// const unsigned int cm_int_core_bm0lh25_part1 = 0x00091940;
// // Accumulator BM0LH25 Part 2
// const unsigned int cm_int_core_bm0lh25_part2 = 0x00091950;
// // Accumulator BM0LH25 Part 3
// const unsigned int cm_int_core_bm0lh25_part3 = 0x00091960;
// // Accumulator BM0LH25 Part 4
// const unsigned int cm_int_core_bm0lh25_part4 = 0x00091970;
// // Accumulator BM0HL25 Part 1
// const unsigned int cm_int_core_bm0hl25_part1 = 0x00091980;
// // Accumulator BM0HL25 Part 2
// const unsigned int cm_int_core_bm0hl25_part2 = 0x00091990;
// // Accumulator BM0HL25 Part 3
// const unsigned int cm_int_core_bm0hl25_part3 = 0x000919A0;
// // Accumulator BM0HL25 Part 4
// const unsigned int cm_int_core_bm0hl25_part4 = 0x000919B0;
// // Accumulator BM0HH25 Part 1
// const unsigned int cm_int_core_bm0hh25_part1 = 0x000919C0;
// // Accumulator BM0HH25 Part 2
// const unsigned int cm_int_core_bm0hh25_part2 = 0x000919D0;
// // Accumulator BM0HH25 Part 3
// const unsigned int cm_int_core_bm0hh25_part3 = 0x000919E0;
// // Accumulator BM0HH25 Part 4
// const unsigned int cm_int_core_bm0hh25_part4 = 0x000919F0;
// // Accumulator BM0LL26 Part 1
// const unsigned int cm_int_core_bm0ll26_part1 = 0x00091A00;
// // Accumulator BM0LL26 Part 2
// const unsigned int cm_int_core_bm0ll26_part2 = 0x00091A10;
// // Accumulator BM0LL26 Part 3
// const unsigned int cm_int_core_bm0ll26_part3 = 0x00091A20;
// // Accumulator BM0LL26 Part 4
// const unsigned int cm_int_core_bm0ll26_part4 = 0x00091A30;
// // Accumulator BM0LH26 Part 1
// const unsigned int cm_int_core_bm0lh26_part1 = 0x00091A40;
// // Accumulator BM0LH26 Part 2
// const unsigned int cm_int_core_bm0lh26_part2 = 0x00091A50;
// // Accumulator BM0LH26 Part 3
// const unsigned int cm_int_core_bm0lh26_part3 = 0x00091A60;
// // Accumulator BM0LH26 Part 4
// const unsigned int cm_int_core_bm0lh26_part4 = 0x00091A70;
// // Accumulator BM0HL26 Part 1
// const unsigned int cm_int_core_bm0hl26_part1 = 0x00091A80;
// // Accumulator BM0HL26 Part 2
// const unsigned int cm_int_core_bm0hl26_part2 = 0x00091A90;
// // Accumulator BM0HL26 Part 3
// const unsigned int cm_int_core_bm0hl26_part3 = 0x00091AA0;
// // Accumulator BM0HL26 Part 4
// const unsigned int cm_int_core_bm0hl26_part4 = 0x00091AB0;
// // Accumulator BM0HH26 Part 1
// const unsigned int cm_int_core_bm0hh26_part1 = 0x00091AC0;
// // Accumulator BM0HH26 Part 2
// const unsigned int cm_int_core_bm0hh26_part2 = 0x00091AD0;
// // Accumulator BM0HH26 Part 3
// const unsigned int cm_int_core_bm0hh26_part3 = 0x00091AE0;
// // Accumulator BM0HH26 Part 4
// const unsigned int cm_int_core_bm0hh26_part4 = 0x00091AF0;
// // Accumulator BM0LL27 Part 1
// const unsigned int cm_int_core_bm0ll27_part1 = 0x00091B00;
// // Accumulator BM0LL27 Part 2
// const unsigned int cm_int_core_bm0ll27_part2 = 0x00091B10;
// // Accumulator BM0LL27 Part 3
// const unsigned int cm_int_core_bm0ll27_part3 = 0x00091B20;
// // Accumulator BM0LL27 Part 4
// const unsigned int cm_int_core_bm0ll27_part4 = 0x00091B30;
// // Accumulator BM0LH27 Part 1
// const unsigned int cm_int_core_bm0lh27_part1 = 0x00091B40;
// // Accumulator BM0LH27 Part 2
// const unsigned int cm_int_core_bm0lh27_part2 = 0x00091B50;
// // Accumulator BM0LH27 Part 3
// const unsigned int cm_int_core_bm0lh27_part3 = 0x00091B60;
// // Accumulator BM0LH27 Part 4
// const unsigned int cm_int_core_bm0lh27_part4 = 0x00091B70;
// // Accumulator BM0HL27 Part 1
// const unsigned int cm_int_core_bm0hl27_part1 = 0x00091B80;
// // Accumulator BM0HL27 Part 2
// const unsigned int cm_int_core_bm0hl27_part2 = 0x00091B90;
// // Accumulator BM0HL27 Part 3
// const unsigned int cm_int_core_bm0hl27_part3 = 0x00091BA0;
// // Accumulator BM0HL27 Part 4
// const unsigned int cm_int_core_bm0hl27_part4 = 0x00091BB0;
// // Accumulator BM0HH27 Part 1
// const unsigned int cm_int_core_bm0hh27_part1 = 0x00091BC0;
// // Accumulator BM0HH27 Part 2
// const unsigned int cm_int_core_bm0hh27_part2 = 0x00091BD0;
// // Accumulator BM0HH27 Part 3
// const unsigned int cm_int_core_bm0hh27_part3 = 0x00091BE0;
// // Accumulator BM0HH27 Part 4
// const unsigned int cm_int_core_bm0hh27_part4 = 0x00091BF0;
// // Accumulator BM0LL28 Part 1
// const unsigned int cm_int_core_bm0ll28_part1 = 0x00091C00;
// // Accumulator BM0LL28 Part 2
// const unsigned int cm_int_core_bm0ll28_part2 = 0x00091C10;
// // Accumulator BM0LL28 Part 3
// const unsigned int cm_int_core_bm0ll28_part3 = 0x00091C20;
// // Accumulator BM0LL28 Part 4
// const unsigned int cm_int_core_bm0ll28_part4 = 0x00091C30;
// // Accumulator BM0LH28 Part 1
// const unsigned int cm_int_core_bm0lh28_part1 = 0x00091C40;
// // Accumulator BM0LH28 Part 2
// const unsigned int cm_int_core_bm0lh28_part2 = 0x00091C50;
// // Accumulator BM0LH28 Part 3
// const unsigned int cm_int_core_bm0lh28_part3 = 0x00091C60;
// // Accumulator BM0LH28 Part 4
// const unsigned int cm_int_core_bm0lh28_part4 = 0x00091C70;
// // Accumulator BM0HL28 Part 1
// const unsigned int cm_int_core_bm0hl28_part1 = 0x00091C80;
// // Accumulator BM0HL28 Part 2
// const unsigned int cm_int_core_bm0hl28_part2 = 0x00091C90;
// // Accumulator BM0HL28 Part 3
// const unsigned int cm_int_core_bm0hl28_part3 = 0x00091CA0;
// // Accumulator BM0HL28 Part 4
// const unsigned int cm_int_core_bm0hl28_part4 = 0x00091CB0;
// // Accumulator BM0HH28 Part 1
// const unsigned int cm_int_core_bm0hh28_part1 = 0x00091CC0;
// // Accumulator BM0HH28 Part 2
// const unsigned int cm_int_core_bm0hh28_part2 = 0x00091CD0;
// // Accumulator BM0HH28 Part 3
// const unsigned int cm_int_core_bm0hh28_part3 = 0x00091CE0;
// // Accumulator BM0HH28 Part 4
// const unsigned int cm_int_core_bm0hh28_part4 = 0x00091CF0;
// // Accumulator BM0LL29 Part 1
// const unsigned int cm_int_core_bm0ll29_part1 = 0x00091D00;
// // Accumulator BM0LL29 Part 2
// const unsigned int cm_int_core_bm0ll29_part2 = 0x00091D10;
// // Accumulator BM0LL29 Part 3
// const unsigned int cm_int_core_bm0ll29_part3 = 0x00091D20;
// // Accumulator BM0LL29 Part 4
// const unsigned int cm_int_core_bm0ll29_part4 = 0x00091D30;
// // Accumulator BM0LH29 Part 1
// const unsigned int cm_int_core_bm0lh29_part1 = 0x00091D40;
// // Accumulator BM0LH29 Part 2
// const unsigned int cm_int_core_bm0lh29_part2 = 0x00091D50;
// // Accumulator BM0LH29 Part 3
// const unsigned int cm_int_core_bm0lh29_part3 = 0x00091D60;
// // Accumulator BM0LH29 Part 4
// const unsigned int cm_int_core_bm0lh29_part4 = 0x00091D70;
// // Accumulator BM0HL29 Part 1
// const unsigned int cm_int_core_bm0hl29_part1 = 0x00091D80;
// // Accumulator BM0HL29 Part 2
// const unsigned int cm_int_core_bm0hl29_part2 = 0x00091D90;
// // Accumulator BM0HL29 Part 3
// const unsigned int cm_int_core_bm0hl29_part3 = 0x00091DA0;
// // Accumulator BM0HL29 Part 4
// const unsigned int cm_int_core_bm0hl29_part4 = 0x00091DB0;
// // Accumulator BM0HH29 Part 1
// const unsigned int cm_int_core_bm0hh29_part1 = 0x00091DC0;
// // Accumulator BM0HH29 Part 2
// const unsigned int cm_int_core_bm0hh29_part2 = 0x00091DD0;
// // Accumulator BM0HH29 Part 3
// const unsigned int cm_int_core_bm0hh29_part3 = 0x00091DE0;
// // Accumulator BM0HH29 Part 4
// const unsigned int cm_int_core_bm0hh29_part4 = 0x00091DF0;
// // Accumulator BM0LL30 Part 1
// const unsigned int cm_int_core_bm0ll30_part1 = 0x00091E00;
// // Accumulator BM0LL30 Part 2
// const unsigned int cm_int_core_bm0ll30_part2 = 0x00091E10;
// // Accumulator BM0LL30 Part 3
// const unsigned int cm_int_core_bm0ll30_part3 = 0x00091E20;
// // Accumulator BM0LL30 Part 4
// const unsigned int cm_int_core_bm0ll30_part4 = 0x00091E30;
// // Accumulator BM0LH30 Part 1
// const unsigned int cm_int_core_bm0lh30_part1 = 0x00091E40;
// // Accumulator BM0LH30 Part 2
// const unsigned int cm_int_core_bm0lh30_part2 = 0x00091E50;
// // Accumulator BM0LH30 Part 3
// const unsigned int cm_int_core_bm0lh30_part3 = 0x00091E60;
// // Accumulator BM0LH30 Part 4
// const unsigned int cm_int_core_bm0lh30_part4 = 0x00091E70;
// // Accumulator BM0HL30 Part 1
// const unsigned int cm_int_core_bm0hl30_part1 = 0x00091E80;
// // Accumulator BM0HL30 Part 2
// const unsigned int cm_int_core_bm0hl30_part2 = 0x00091E90;
// // Accumulator BM0HL30 Part 3
// const unsigned int cm_int_core_bm0hl30_part3 = 0x00091EA0;
// // Accumulator BM0HL30 Part 4
// const unsigned int cm_int_core_bm0hl30_part4 = 0x00091EB0;
// // Accumulator BM0HH30 Part 1
// const unsigned int cm_int_core_bm0hh30_part1 = 0x00091EC0;
// // Accumulator BM0HH30 Part 2
// const unsigned int cm_int_core_bm0hh30_part2 = 0x00091ED0;
// // Accumulator BM0HH30 Part 3
// const unsigned int cm_int_core_bm0hh30_part3 = 0x00091EE0;
// // Accumulator BM0HH30 Part 4
// const unsigned int cm_int_core_bm0hh30_part4 = 0x00091EF0;
// // Accumulator BM0LL31 Part 1
// const unsigned int cm_int_core_bm0ll31_part1 = 0x00091F00;
// // Accumulator BM0LL31 Part 2
// const unsigned int cm_int_core_bm0ll31_part2 = 0x00091F10;
// // Accumulator BM0LL31 Part 3
// const unsigned int cm_int_core_bm0ll31_part3 = 0x00091F20;
// // Accumulator BM0LL31 Part 4
// const unsigned int cm_int_core_bm0ll31_part4 = 0x00091F30;
// // Accumulator BM0LH31 Part 1
// const unsigned int cm_int_core_bm0lh31_part1 = 0x00091F40;
// // Accumulator BM0LH31 Part 2
// const unsigned int cm_int_core_bm0lh31_part2 = 0x00091F50;
// // Accumulator BM0LH31 Part 3
// const unsigned int cm_int_core_bm0lh31_part3 = 0x00091F60;
// // Accumulator BM0LH31 Part 4
// const unsigned int cm_int_core_bm0lh31_part4 = 0x00091F70;
// // Accumulator BM0HL31 Part 1
// const unsigned int cm_int_core_bm0hl31_part1 = 0x00091F80;
// // Accumulator BM0HL31 Part 2
// const unsigned int cm_int_core_bm0hl31_part2 = 0x00091F90;
// // Accumulator BM0HL31 Part 3
// const unsigned int cm_int_core_bm0hl31_part3 = 0x00091FA0;
// // Accumulator BM0HL31 Part 4
// const unsigned int cm_int_core_bm0hl31_part4 = 0x00091FB0;
// // Accumulator BM0HH31 Part 1
// const unsigned int cm_int_core_bm0hh31_part1 = 0x00091FC0;
// // Accumulator BM0HH31 Part 2
// const unsigned int cm_int_core_bm0hh31_part2 = 0x00091FD0;
// // Accumulator BM0HH31 Part 3
// const unsigned int cm_int_core_bm0hh31_part3 = 0x00091FE0;
// // Accumulator BM0HH31 Part 4
// const unsigned int cm_int_core_bm0hh31_part4 = 0x00091FF0;
// // Accumulator BM1LL32 Part 1
// const unsigned int cm_int_core_bm1ll0_part1 = 0x00092000;
// // Accumulator BM1LL32 Part 2
// const unsigned int cm_int_core_bm1ll0_part2 = 0x00092010;
// // Accumulator BM1LL32 Part 3
// const unsigned int cm_int_core_bm1ll0_part3 = 0x00092020;
// // Accumulator BM1LL32 Part 4
// const unsigned int cm_int_core_bm1ll0_part4 = 0x00092030;
// // Accumulator BM1LH32 Part 1
// const unsigned int cm_int_core_bm1lh0_part1 = 0x00092040;
// // Accumulator BM1LH32 Part 2
// const unsigned int cm_int_core_bm1lh0_part2 = 0x00092050;
// // Accumulator BM1LH32 Part 3
// const unsigned int cm_int_core_bm1lh0_part3 = 0x00092060;
// // Accumulator BM1LH32 Part 4
// const unsigned int cm_int_core_bm1lh0_part4 = 0x00092070;
// // Accumulator BM1HL32 Part 1
// const unsigned int cm_int_core_bm1hl0_part1 = 0x00092080;
// // Accumulator BM1HL32 Part 2
// const unsigned int cm_int_core_bm1hl0_part2 = 0x00092090;
// // Accumulator BM1HL32 Part 3
// const unsigned int cm_int_core_bm1hl0_part3 = 0x000920A0;
// // Accumulator BM1HL32 Part 4
// const unsigned int cm_int_core_bm1hl0_part4 = 0x000920B0;
// // Accumulator BM1HH32 Part 1
// const unsigned int cm_int_core_bm1hh0_part1 = 0x000920C0;
// // Accumulator BM1HH32 Part 2
// const unsigned int cm_int_core_bm1hh0_part2 = 0x000920D0;
// // Accumulator BM1HH32 Part 3
// const unsigned int cm_int_core_bm1hh0_part3 = 0x000920E0;
// // Accumulator BM1HH32 Part 4
// const unsigned int cm_int_core_bm1hh0_part4 = 0x000920F0;
// // Accumulator BM1LL33 Part 1
// const unsigned int cm_int_core_bm1ll1_part1 = 0x00092100;
// // Accumulator BM1LL33 Part 2
// const unsigned int cm_int_core_bm1ll1_part2 = 0x00092110;
// // Accumulator BM1LL33 Part 3
// const unsigned int cm_int_core_bm1ll1_part3 = 0x00092120;
// // Accumulator BM1LL33 Part 4
// const unsigned int cm_int_core_bm1ll1_part4 = 0x00092130;
// // Accumulator BM1LH33 Part 1
// const unsigned int cm_int_core_bm1lh1_part1 = 0x00092140;
// // Accumulator BM1LH33 Part 2
// const unsigned int cm_int_core_bm1lh1_part2 = 0x00092150;
// // Accumulator BM1LH33 Part 3
// const unsigned int cm_int_core_bm1lh1_part3 = 0x00092160;
// // Accumulator BM1LH33 Part 4
// const unsigned int cm_int_core_bm1lh1_part4 = 0x00092170;
// // Accumulator BM1HL33 Part 1
// const unsigned int cm_int_core_bm1hl1_part1 = 0x00092180;
// // Accumulator BM1HL33 Part 2
// const unsigned int cm_int_core_bm1hl1_part2 = 0x00092190;
// // Accumulator BM1HL33 Part 3
// const unsigned int cm_int_core_bm1hl1_part3 = 0x000921A0;
// // Accumulator BM1HL33 Part 4
// const unsigned int cm_int_core_bm1hl1_part4 = 0x000921B0;
// // Accumulator BM1HH33 Part 1
// const unsigned int cm_int_core_bm1hh1_part1 = 0x000921C0;
// // Accumulator BM1HH33 Part 2
// const unsigned int cm_int_core_bm1hh1_part2 = 0x000921D0;
// // Accumulator BM1HH33 Part 3
// const unsigned int cm_int_core_bm1hh1_part3 = 0x000921E0;
// // Accumulator BM1HH33 Part 4
// const unsigned int cm_int_core_bm1hh1_part4 = 0x000921F0;
// // Accumulator BM1LL34 Part 1
// const unsigned int cm_int_core_bm1ll2_part1 = 0x00092200;
// // Accumulator BM1LL34 Part 2
// const unsigned int cm_int_core_bm1ll2_part2 = 0x00092210;
// // Accumulator BM1LL34 Part 3
// const unsigned int cm_int_core_bm1ll2_part3 = 0x00092220;
// // Accumulator BM1LL34 Part 4
// const unsigned int cm_int_core_bm1ll2_part4 = 0x00092230;
// // Accumulator BM1LH34 Part 1
// const unsigned int cm_int_core_bm1lh2_part1 = 0x00092240;
// // Accumulator BM1LH34 Part 2
// const unsigned int cm_int_core_bm1lh2_part2 = 0x00092250;
// // Accumulator BM1LH34 Part 3
// const unsigned int cm_int_core_bm1lh2_part3 = 0x00092260;
// // Accumulator BM1LH34 Part 4
// const unsigned int cm_int_core_bm1lh2_part4 = 0x00092270;
// // Accumulator BM1HL34 Part 1
// const unsigned int cm_int_core_bm1hl2_part1 = 0x00092280;
// // Accumulator BM1HL34 Part 2
// const unsigned int cm_int_core_bm1hl2_part2 = 0x00092290;
// // Accumulator BM1HL34 Part 3
// const unsigned int cm_int_core_bm1hl2_part3 = 0x000922A0;
// // Accumulator BM1HL34 Part 4
// const unsigned int cm_int_core_bm1hl2_part4 = 0x000922B0;
// // Accumulator BM1HH34 Part 1
// const unsigned int cm_int_core_bm1hh2_part1 = 0x000922C0;
// // Accumulator BM1HH34 Part 2
// const unsigned int cm_int_core_bm1hh2_part2 = 0x000922D0;
// // Accumulator BM1HH34 Part 3
// const unsigned int cm_int_core_bm1hh2_part3 = 0x000922E0;
// // Accumulator BM1HH34 Part 4
// const unsigned int cm_int_core_bm1hh2_part4 = 0x000922F0;
// // Accumulator BM1LL35 Part 1
// const unsigned int cm_int_core_bm1ll3_part1 = 0x00092300;
// // Accumulator BM1LL35 Part 2
// const unsigned int cm_int_core_bm1ll3_part2 = 0x00092310;
// // Accumulator BM1LL35 Part 3
// const unsigned int cm_int_core_bm1ll3_part3 = 0x00092320;
// // Accumulator BM1LL35 Part 4
// const unsigned int cm_int_core_bm1ll3_part4 = 0x00092330;
// // Accumulator BM1LH35 Part 1
// const unsigned int cm_int_core_bm1lh3_part1 = 0x00092340;
// // Accumulator BM1LH35 Part 2
// const unsigned int cm_int_core_bm1lh3_part2 = 0x00092350;
// // Accumulator BM1LH35 Part 3
// const unsigned int cm_int_core_bm1lh3_part3 = 0x00092360;
// // Accumulator BM1LH35 Part 4
// const unsigned int cm_int_core_bm1lh3_part4 = 0x00092370;
// // Accumulator BM1HL35 Part 1
// const unsigned int cm_int_core_bm1hl3_part1 = 0x00092380;
// // Accumulator BM1HL35 Part 2
// const unsigned int cm_int_core_bm1hl3_part2 = 0x00092390;
// // Accumulator BM1HL35 Part 3
// const unsigned int cm_int_core_bm1hl3_part3 = 0x000923A0;
// // Accumulator BM1HL35 Part 4
// const unsigned int cm_int_core_bm1hl3_part4 = 0x000923B0;
// // Accumulator BM1HH35 Part 1
// const unsigned int cm_int_core_bm1hh3_part1 = 0x000923C0;
// // Accumulator BM1HH35 Part 2
// const unsigned int cm_int_core_bm1hh3_part2 = 0x000923D0;
// // Accumulator BM1HH35 Part 3
// const unsigned int cm_int_core_bm1hh3_part3 = 0x000923E0;
// // Accumulator BM1HH35 Part 4
// const unsigned int cm_int_core_bm1hh3_part4 = 0x000923F0;
// // Accumulator BM1LL36 Part 1
// const unsigned int cm_int_core_bm1ll4_part1 = 0x00092400;
// // Accumulator BM1LL36 Part 2
// const unsigned int cm_int_core_bm1ll4_part2 = 0x00092410;
// // Accumulator BM1LL36 Part 3
// const unsigned int cm_int_core_bm1ll4_part3 = 0x00092420;
// // Accumulator BM1LL36 Part 4
// const unsigned int cm_int_core_bm1ll4_part4 = 0x00092430;
// // Accumulator BM1LH36 Part 1
// const unsigned int cm_int_core_bm1lh4_part1 = 0x00092440;
// // Accumulator BM1LH36 Part 2
// const unsigned int cm_int_core_bm1lh4_part2 = 0x00092450;
// // Accumulator BM1LH36 Part 3
// const unsigned int cm_int_core_bm1lh4_part3 = 0x00092460;
// // Accumulator BM1LH36 Part 4
// const unsigned int cm_int_core_bm1lh4_part4 = 0x00092470;
// // Accumulator BM1HL36 Part 1
// const unsigned int cm_int_core_bm1hl4_part1 = 0x00092480;
// // Accumulator BM1HL36 Part 2
// const unsigned int cm_int_core_bm1hl4_part2 = 0x00092490;
// // Accumulator BM1HL36 Part 3
// const unsigned int cm_int_core_bm1hl4_part3 = 0x000924A0;
// // Accumulator BM1HL36 Part 4
// const unsigned int cm_int_core_bm1hl4_part4 = 0x000924B0;
// // Accumulator BM1HH36 Part 1
// const unsigned int cm_int_core_bm1hh4_part1 = 0x000924C0;
// // Accumulator BM1HH36 Part 2
// const unsigned int cm_int_core_bm1hh4_part2 = 0x000924D0;
// // Accumulator BM1HH36 Part 3
// const unsigned int cm_int_core_bm1hh4_part3 = 0x000924E0;
// // Accumulator BM1HH36 Part 4
// const unsigned int cm_int_core_bm1hh4_part4 = 0x000924F0;
// // Accumulator BM1LL37 Part 1
// const unsigned int cm_int_core_bm1ll5_part1 = 0x00092500;
// // Accumulator BM1LL37 Part 2
// const unsigned int cm_int_core_bm1ll5_part2 = 0x00092510;
// // Accumulator BM1LL37 Part 3
// const unsigned int cm_int_core_bm1ll5_part3 = 0x00092520;
// // Accumulator BM1LL37 Part 4
// const unsigned int cm_int_core_bm1ll5_part4 = 0x00092530;
// // Accumulator BM1LH37 Part 1
// const unsigned int cm_int_core_bm1lh5_part1 = 0x00092540;
// // Accumulator BM1LH37 Part 2
// const unsigned int cm_int_core_bm1lh5_part2 = 0x00092550;
// // Accumulator BM1LH37 Part 3
// const unsigned int cm_int_core_bm1lh5_part3 = 0x00092560;
// // Accumulator BM1LH37 Part 4
// const unsigned int cm_int_core_bm1lh5_part4 = 0x00092570;
// // Accumulator BM1HL37 Part 1
// const unsigned int cm_int_core_bm1hl5_part1 = 0x00092580;
// // Accumulator BM1HL37 Part 2
// const unsigned int cm_int_core_bm1hl5_part2 = 0x00092590;
// // Accumulator BM1HL37 Part 3
// const unsigned int cm_int_core_bm1hl5_part3 = 0x000925A0;
// // Accumulator BM1HL37 Part 4
// const unsigned int cm_int_core_bm1hl5_part4 = 0x000925B0;
// // Accumulator BM1HH37 Part 1
// const unsigned int cm_int_core_bm1hh5_part1 = 0x000925C0;
// // Accumulator BM1HH37 Part 2
// const unsigned int cm_int_core_bm1hh5_part2 = 0x000925D0;
// // Accumulator BM1HH37 Part 3
// const unsigned int cm_int_core_bm1hh5_part3 = 0x000925E0;
// // Accumulator BM1HH37 Part 4
// const unsigned int cm_int_core_bm1hh5_part4 = 0x000925F0;
// // Accumulator BM1LL38 Part 1
// const unsigned int cm_int_core_bm1ll6_part1 = 0x00092600;
// // Accumulator BM1LL38 Part 2
// const unsigned int cm_int_core_bm1ll6_part2 = 0x00092610;
// // Accumulator BM1LL38 Part 3
// const unsigned int cm_int_core_bm1ll6_part3 = 0x00092620;
// // Accumulator BM1LL38 Part 4
// const unsigned int cm_int_core_bm1ll6_part4 = 0x00092630;
// // Accumulator BM1LH38 Part 1
// const unsigned int cm_int_core_bm1lh6_part1 = 0x00092640;
// // Accumulator BM1LH38 Part 2
// const unsigned int cm_int_core_bm1lh6_part2 = 0x00092650;
// // Accumulator BM1LH38 Part 3
// const unsigned int cm_int_core_bm1lh6_part3 = 0x00092660;
// // Accumulator BM1LH38 Part 4
// const unsigned int cm_int_core_bm1lh6_part4 = 0x00092670;
// // Accumulator BM1HL38 Part 1
// const unsigned int cm_int_core_bm1hl6_part1 = 0x00092680;
// // Accumulator BM1HL38 Part 2
// const unsigned int cm_int_core_bm1hl6_part2 = 0x00092690;
// // Accumulator BM1HL38 Part 3
// const unsigned int cm_int_core_bm1hl6_part3 = 0x000926A0;
// // Accumulator BM1HL38 Part 4
// const unsigned int cm_int_core_bm1hl6_part4 = 0x000926B0;
// // Accumulator BM1HH38 Part 1
// const unsigned int cm_int_core_bm1hh6_part1 = 0x000926C0;
// // Accumulator BM1HH38 Part 2
// const unsigned int cm_int_core_bm1hh6_part2 = 0x000926D0;
// // Accumulator BM1HH38 Part 3
// const unsigned int cm_int_core_bm1hh6_part3 = 0x000926E0;
// // Accumulator BM1HH38 Part 4
// const unsigned int cm_int_core_bm1hh6_part4 = 0x000926F0;
// // Accumulator BM1LL39 Part 1
// const unsigned int cm_int_core_bm1ll7_part1 = 0x00092700;
// // Accumulator BM1LL39 Part 2
// const unsigned int cm_int_core_bm1ll7_part2 = 0x00092710;
// // Accumulator BM1LL39 Part 3
// const unsigned int cm_int_core_bm1ll7_part3 = 0x00092720;
// // Accumulator BM1LL39 Part 4
// const unsigned int cm_int_core_bm1ll7_part4 = 0x00092730;
// // Accumulator BM1LH39 Part 1
// const unsigned int cm_int_core_bm1lh7_part1 = 0x00092740;
// // Accumulator BM1LH39 Part 2
// const unsigned int cm_int_core_bm1lh7_part2 = 0x00092750;
// // Accumulator BM1LH39 Part 3
// const unsigned int cm_int_core_bm1lh7_part3 = 0x00092760;
// // Accumulator BM1LH39 Part 4
// const unsigned int cm_int_core_bm1lh7_part4 = 0x00092770;
// // Accumulator BM1HL39 Part 1
// const unsigned int cm_int_core_bm1hl7_part1 = 0x00092780;
// // Accumulator BM1HL39 Part 2
// const unsigned int cm_int_core_bm1hl7_part2 = 0x00092790;
// // Accumulator BM1HL39 Part 3
// const unsigned int cm_int_core_bm1hl7_part3 = 0x000927A0;
// // Accumulator BM1HL39 Part 4
// const unsigned int cm_int_core_bm1hl7_part4 = 0x000927B0;
// // Accumulator BM1HH39 Part 1
// const unsigned int cm_int_core_bm1hh7_part1 = 0x000927C0;
// // Accumulator BM1HH39 Part 2
// const unsigned int cm_int_core_bm1hh7_part2 = 0x000927D0;
// // Accumulator BM1HH39 Part 3
// const unsigned int cm_int_core_bm1hh7_part3 = 0x000927E0;
// // Accumulator BM1HH39 Part 4
// const unsigned int cm_int_core_bm1hh7_part4 = 0x000927F0;
// // Accumulator BM1LL40 Part 1
// const unsigned int cm_int_core_bm1ll8_part1 = 0x00092800;
// // Accumulator BM1LL40 Part 2
// const unsigned int cm_int_core_bm1ll8_part2 = 0x00092810;
// // Accumulator BM1LL40 Part 3
// const unsigned int cm_int_core_bm1ll8_part3 = 0x00092820;
// // Accumulator BM1LL40 Part 4
// const unsigned int cm_int_core_bm1ll8_part4 = 0x00092830;
// // Accumulator BM1LH40 Part 1
// const unsigned int cm_int_core_bm1lh8_part1 = 0x00092840;
// // Accumulator BM1LH40 Part 2
// const unsigned int cm_int_core_bm1lh8_part2 = 0x00092850;
// // Accumulator BM1LH40 Part 3
// const unsigned int cm_int_core_bm1lh8_part3 = 0x00092860;
// // Accumulator BM1LH40 Part 4
// const unsigned int cm_int_core_bm1lh8_part4 = 0x00092870;
// // Accumulator BM1HL40 Part 1
// const unsigned int cm_int_core_bm1hl8_part1 = 0x00092880;
// // Accumulator BM1HL40 Part 2
// const unsigned int cm_int_core_bm1hl8_part2 = 0x00092890;
// // Accumulator BM1HL40 Part 3
// const unsigned int cm_int_core_bm1hl8_part3 = 0x000928A0;
// // Accumulator BM1HL40 Part 4
// const unsigned int cm_int_core_bm1hl8_part4 = 0x000928B0;
// // Accumulator BM1HH40 Part 1
// const unsigned int cm_int_core_bm1hh8_part1 = 0x000928C0;
// // Accumulator BM1HH40 Part 2
// const unsigned int cm_int_core_bm1hh8_part2 = 0x000928D0;
// // Accumulator BM1HH40 Part 3
// const unsigned int cm_int_core_bm1hh8_part3 = 0x000928E0;
// // Accumulator BM1HH40 Part 4
// const unsigned int cm_int_core_bm1hh8_part4 = 0x000928F0;
// // Accumulator BM1LL41 Part 1
// const unsigned int cm_int_core_bm1ll9_part1 = 0x00092900;
// // Accumulator BM1LL41 Part 2
// const unsigned int cm_int_core_bm1ll9_part2 = 0x00092910;
// // Accumulator BM1LL41 Part 3
// const unsigned int cm_int_core_bm1ll9_part3 = 0x00092920;
// // Accumulator BM1LL41 Part 4
// const unsigned int cm_int_core_bm1ll9_part4 = 0x00092930;
// // Accumulator BM1LH41 Part 1
// const unsigned int cm_int_core_bm1lh9_part1 = 0x00092940;
// // Accumulator BM1LH41 Part 2
// const unsigned int cm_int_core_bm1lh9_part2 = 0x00092950;
// // Accumulator BM1LH41 Part 3
// const unsigned int cm_int_core_bm1lh9_part3 = 0x00092960;
// // Accumulator BM1LH41 Part 4
// const unsigned int cm_int_core_bm1lh9_part4 = 0x00092970;
// // Accumulator BM1HL41 Part 1
// const unsigned int cm_int_core_bm1hl9_part1 = 0x00092980;
// // Accumulator BM1HL41 Part 2
// const unsigned int cm_int_core_bm1hl9_part2 = 0x00092990;
// // Accumulator BM1HL41 Part 3
// const unsigned int cm_int_core_bm1hl9_part3 = 0x000929A0;
// // Accumulator BM1HL41 Part 4
// const unsigned int cm_int_core_bm1hl9_part4 = 0x000929B0;
// // Accumulator BM1HH41 Part 1
// const unsigned int cm_int_core_bm1hh9_part1 = 0x000929C0;
// // Accumulator BM1HH41 Part 2
// const unsigned int cm_int_core_bm1hh9_part2 = 0x000929D0;
// // Accumulator BM1HH41 Part 3
// const unsigned int cm_int_core_bm1hh9_part3 = 0x000929E0;
// // Accumulator BM1HH41 Part 4
// const unsigned int cm_int_core_bm1hh9_part4 = 0x000929F0;
// // Accumulator BM1LL42 Part 1
// const unsigned int cm_int_core_bm1ll10_part1 = 0x00092A00;
// // Accumulator BM1LL42 Part 2
// const unsigned int cm_int_core_bm1ll10_part2 = 0x00092A10;
// // Accumulator BM1LL42 Part 3
// const unsigned int cm_int_core_bm1ll10_part3 = 0x00092A20;
// // Accumulator BM1LL42 Part 4
// const unsigned int cm_int_core_bm1ll10_part4 = 0x00092A30;
// // Accumulator BM1LH42 Part 1
// const unsigned int cm_int_core_bm1lh10_part1 = 0x00092A40;
// // Accumulator BM1LH42 Part 2
// const unsigned int cm_int_core_bm1lh10_part2 = 0x00092A50;
// // Accumulator BM1LH42 Part 3
// const unsigned int cm_int_core_bm1lh10_part3 = 0x00092A60;
// // Accumulator BM1LH42 Part 4
// const unsigned int cm_int_core_bm1lh10_part4 = 0x00092A70;
// // Accumulator BM1HL42 Part 1
// const unsigned int cm_int_core_bm1hl10_part1 = 0x00092A80;
// // Accumulator BM1HL42 Part 2
// const unsigned int cm_int_core_bm1hl10_part2 = 0x00092A90;
// // Accumulator BM1HL42 Part 3
// const unsigned int cm_int_core_bm1hl10_part3 = 0x00092AA0;
// // Accumulator BM1HL42 Part 4
// const unsigned int cm_int_core_bm1hl10_part4 = 0x00092AB0;
// // Accumulator BM1HH42 Part 1
// const unsigned int cm_int_core_bm1hh10_part1 = 0x00092AC0;
// // Accumulator BM1HH42 Part 2
// const unsigned int cm_int_core_bm1hh10_part2 = 0x00092AD0;
// // Accumulator BM1HH42 Part 3
// const unsigned int cm_int_core_bm1hh10_part3 = 0x00092AE0;
// // Accumulator BM1HH42 Part 4
// const unsigned int cm_int_core_bm1hh10_part4 = 0x00092AF0;
// // Accumulator BM1LL43 Part 1
// const unsigned int cm_int_core_bm1ll11_part1 = 0x00092B00;
// // Accumulator BM1LL43 Part 2
// const unsigned int cm_int_core_bm1ll11_part2 = 0x00092B10;
// // Accumulator BM1LL43 Part 3
// const unsigned int cm_int_core_bm1ll11_part3 = 0x00092B20;
// // Accumulator BM1LL43 Part 4
// const unsigned int cm_int_core_bm1ll11_part4 = 0x00092B30;
// // Accumulator BM1LH43 Part 1
// const unsigned int cm_int_core_bm1lh11_part1 = 0x00092B40;
// // Accumulator BM1LH43 Part 2
// const unsigned int cm_int_core_bm1lh11_part2 = 0x00092B50;
// // Accumulator BM1LH43 Part 3
// const unsigned int cm_int_core_bm1lh11_part3 = 0x00092B60;
// // Accumulator BM1LH43 Part 4
// const unsigned int cm_int_core_bm1lh11_part4 = 0x00092B70;
// // Accumulator BM1HL43 Part 1
// const unsigned int cm_int_core_bm1hl11_part1 = 0x00092B80;
// // Accumulator BM1HL43 Part 2
// const unsigned int cm_int_core_bm1hl11_part2 = 0x00092B90;
// // Accumulator BM1HL43 Part 3
// const unsigned int cm_int_core_bm1hl11_part3 = 0x00092BA0;
// // Accumulator BM1HL43 Part 4
// const unsigned int cm_int_core_bm1hl11_part4 = 0x00092BB0;
// // Accumulator BM1HH43 Part 1
// const unsigned int cm_int_core_bm1hh11_part1 = 0x00092BC0;
// // Accumulator BM1HH43 Part 2
// const unsigned int cm_int_core_bm1hh11_part2 = 0x00092BD0;
// // Accumulator BM1HH43 Part 3
// const unsigned int cm_int_core_bm1hh11_part3 = 0x00092BE0;
// // Accumulator BM1HH43 Part 4
// const unsigned int cm_int_core_bm1hh11_part4 = 0x00092BF0;
// // Accumulator BM1LL44 Part 1
// const unsigned int cm_int_core_bm1ll12_part1 = 0x00092C00;
// // Accumulator BM1LL44 Part 2
// const unsigned int cm_int_core_bm1ll12_part2 = 0x00092C10;
// // Accumulator BM1LL44 Part 3
// const unsigned int cm_int_core_bm1ll12_part3 = 0x00092C20;
// // Accumulator BM1LL44 Part 4
// const unsigned int cm_int_core_bm1ll12_part4 = 0x00092C30;
// // Accumulator BM1LH44 Part 1
// const unsigned int cm_int_core_bm1lh12_part1 = 0x00092C40;
// // Accumulator BM1LH44 Part 2
// const unsigned int cm_int_core_bm1lh12_part2 = 0x00092C50;
// // Accumulator BM1LH44 Part 3
// const unsigned int cm_int_core_bm1lh12_part3 = 0x00092C60;
// // Accumulator BM1LH44 Part 4
// const unsigned int cm_int_core_bm1lh12_part4 = 0x00092C70;
// // Accumulator BM1HL44 Part 1
// const unsigned int cm_int_core_bm1hl12_part1 = 0x00092C80;
// // Accumulator BM1HL44 Part 2
// const unsigned int cm_int_core_bm1hl12_part2 = 0x00092C90;
// // Accumulator BM1HL44 Part 3
// const unsigned int cm_int_core_bm1hl12_part3 = 0x00092CA0;
// // Accumulator BM1HL44 Part 4
// const unsigned int cm_int_core_bm1hl12_part4 = 0x00092CB0;
// // Accumulator BM1HH44 Part 1
// const unsigned int cm_int_core_bm1hh12_part1 = 0x00092CC0;
// // Accumulator BM1HH44 Part 2
// const unsigned int cm_int_core_bm1hh12_part2 = 0x00092CD0;
// // Accumulator BM1HH44 Part 3
// const unsigned int cm_int_core_bm1hh12_part3 = 0x00092CE0;
// // Accumulator BM1HH44 Part 4
// const unsigned int cm_int_core_bm1hh12_part4 = 0x00092CF0;
// // Accumulator BM1LL45 Part 1
// const unsigned int cm_int_core_bm1ll13_part1 = 0x00092D00;
// // Accumulator BM1LL45 Part 2
// const unsigned int cm_int_core_bm1ll13_part2 = 0x00092D10;
// // Accumulator BM1LL45 Part 3
// const unsigned int cm_int_core_bm1ll13_part3 = 0x00092D20;
// // Accumulator BM1LL45 Part 4
// const unsigned int cm_int_core_bm1ll13_part4 = 0x00092D30;
// // Accumulator BM1LH45 Part 1
// const unsigned int cm_int_core_bm1lh13_part1 = 0x00092D40;
// // Accumulator BM1LH45 Part 2
// const unsigned int cm_int_core_bm1lh13_part2 = 0x00092D50;
// // Accumulator BM1LH45 Part 3
// const unsigned int cm_int_core_bm1lh13_part3 = 0x00092D60;
// // Accumulator BM1LH45 Part 4
// const unsigned int cm_int_core_bm1lh13_part4 = 0x00092D70;
// // Accumulator BM1HL45 Part 1
// const unsigned int cm_int_core_bm1hl13_part1 = 0x00092D80;
// // Accumulator BM1HL45 Part 2
// const unsigned int cm_int_core_bm1hl13_part2 = 0x00092D90;
// // Accumulator BM1HL45 Part 3
// const unsigned int cm_int_core_bm1hl13_part3 = 0x00092DA0;
// // Accumulator BM1HL45 Part 4
// const unsigned int cm_int_core_bm1hl13_part4 = 0x00092DB0;
// // Accumulator BM1HH45 Part 1
// const unsigned int cm_int_core_bm1hh13_part1 = 0x00092DC0;
// // Accumulator BM1HH45 Part 2
// const unsigned int cm_int_core_bm1hh13_part2 = 0x00092DD0;
// // Accumulator BM1HH45 Part 3
// const unsigned int cm_int_core_bm1hh13_part3 = 0x00092DE0;
// // Accumulator BM1HH45 Part 4
// const unsigned int cm_int_core_bm1hh13_part4 = 0x00092DF0;
// // Accumulator BM1LL46 Part 1
// const unsigned int cm_int_core_bm1ll14_part1 = 0x00092E00;
// // Accumulator BM1LL46 Part 2
// const unsigned int cm_int_core_bm1ll14_part2 = 0x00092E10;
// // Accumulator BM1LL46 Part 3
// const unsigned int cm_int_core_bm1ll14_part3 = 0x00092E20;
// // Accumulator BM1LL46 Part 4
// const unsigned int cm_int_core_bm1ll14_part4 = 0x00092E30;
// // Accumulator BM1LH46 Part 1
// const unsigned int cm_int_core_bm1lh14_part1 = 0x00092E40;
// // Accumulator BM1LH46 Part 2
// const unsigned int cm_int_core_bm1lh14_part2 = 0x00092E50;
// // Accumulator BM1LH46 Part 3
// const unsigned int cm_int_core_bm1lh14_part3 = 0x00092E60;
// // Accumulator BM1LH46 Part 4
// const unsigned int cm_int_core_bm1lh14_part4 = 0x00092E70;
// // Accumulator BM1HL46 Part 1
// const unsigned int cm_int_core_bm1hl14_part1 = 0x00092E80;
// // Accumulator BM1HL46 Part 2
// const unsigned int cm_int_core_bm1hl14_part2 = 0x00092E90;
// // Accumulator BM1HL46 Part 3
// const unsigned int cm_int_core_bm1hl14_part3 = 0x00092EA0;
// // Accumulator BM1HL46 Part 4
// const unsigned int cm_int_core_bm1hl14_part4 = 0x00092EB0;
// // Accumulator BM1HH46 Part 1
// const unsigned int cm_int_core_bm1hh14_part1 = 0x00092EC0;
// // Accumulator BM1HH46 Part 2
// const unsigned int cm_int_core_bm1hh14_part2 = 0x00092ED0;
// // Accumulator BM1HH46 Part 3
// const unsigned int cm_int_core_bm1hh14_part3 = 0x00092EE0;
// // Accumulator BM1HH46 Part 4
// const unsigned int cm_int_core_bm1hh14_part4 = 0x00092EF0;
// // Accumulator BM1LL47 Part 1
// const unsigned int cm_int_core_bm1ll15_part1 = 0x00092F00;
// // Accumulator BM1LL47 Part 2
// const unsigned int cm_int_core_bm1ll15_part2 = 0x00092F10;
// // Accumulator BM1LL47 Part 3
// const unsigned int cm_int_core_bm1ll15_part3 = 0x00092F20;
// // Accumulator BM1LL47 Part 4
// const unsigned int cm_int_core_bm1ll15_part4 = 0x00092F30;
// // Accumulator BM1LH47 Part 1
// const unsigned int cm_int_core_bm1lh15_part1 = 0x00092F40;
// // Accumulator BM1LH47 Part 2
// const unsigned int cm_int_core_bm1lh15_part2 = 0x00092F50;
// // Accumulator BM1LH47 Part 3
// const unsigned int cm_int_core_bm1lh15_part3 = 0x00092F60;
// // Accumulator BM1LH47 Part 4
// const unsigned int cm_int_core_bm1lh15_part4 = 0x00092F70;
// // Accumulator BM1HL47 Part 1
// const unsigned int cm_int_core_bm1hl15_part1 = 0x00092F80;
// // Accumulator BM1HL47 Part 2
// const unsigned int cm_int_core_bm1hl15_part2 = 0x00092F90;
// // Accumulator BM1HL47 Part 3
// const unsigned int cm_int_core_bm1hl15_part3 = 0x00092FA0;
// // Accumulator BM1HL47 Part 4
// const unsigned int cm_int_core_bm1hl15_part4 = 0x00092FB0;
// // Accumulator BM1HH47 Part 1
// const unsigned int cm_int_core_bm1hh15_part1 = 0x00092FC0;
// // Accumulator BM1HH47 Part 2
// const unsigned int cm_int_core_bm1hh15_part2 = 0x00092FD0;
// // Accumulator BM1HH47 Part 3
// const unsigned int cm_int_core_bm1hh15_part3 = 0x00092FE0;
// // Accumulator BM1HH47 Part 4
// const unsigned int cm_int_core_bm1hh15_part4 = 0x00092FF0;
// // Accumulator BM1LL48 Part 1
// const unsigned int cm_int_core_bm1ll16_part1 = 0x00093000;
// // Accumulator BM1LL48 Part 2
// const unsigned int cm_int_core_bm1ll16_part2 = 0x00093010;
// // Accumulator BM1LL48 Part 3
// const unsigned int cm_int_core_bm1ll16_part3 = 0x00093020;
// // Accumulator BM1LL48 Part 4
// const unsigned int cm_int_core_bm1ll16_part4 = 0x00093030;
// // Accumulator BM1LH48 Part 1
// const unsigned int cm_int_core_bm1lh16_part1 = 0x00093040;
// // Accumulator BM1LH48 Part 2
// const unsigned int cm_int_core_bm1lh16_part2 = 0x00093050;
// // Accumulator BM1LH48 Part 3
// const unsigned int cm_int_core_bm1lh16_part3 = 0x00093060;
// // Accumulator BM1LH48 Part 4
// const unsigned int cm_int_core_bm1lh16_part4 = 0x00093070;
// // Accumulator BM1HL48 Part 1
// const unsigned int cm_int_core_bm1hl16_part1 = 0x00093080;
// // Accumulator BM1HL48 Part 2
// const unsigned int cm_int_core_bm1hl16_part2 = 0x00093090;
// // Accumulator BM1HL48 Part 3
// const unsigned int cm_int_core_bm1hl16_part3 = 0x000930A0;
// // Accumulator BM1HL48 Part 4
// const unsigned int cm_int_core_bm1hl16_part4 = 0x000930B0;
// // Accumulator BM1HH48 Part 1
// const unsigned int cm_int_core_bm1hh16_part1 = 0x000930C0;
// // Accumulator BM1HH48 Part 2
// const unsigned int cm_int_core_bm1hh16_part2 = 0x000930D0;
// // Accumulator BM1HH48 Part 3
// const unsigned int cm_int_core_bm1hh16_part3 = 0x000930E0;
// // Accumulator BM1HH48 Part 4
// const unsigned int cm_int_core_bm1hh16_part4 = 0x000930F0;
// // Accumulator BM1LL49 Part 1
// const unsigned int cm_int_core_bm1ll17_part1 = 0x00093100;
// // Accumulator BM1LL49 Part 2
// const unsigned int cm_int_core_bm1ll17_part2 = 0x00093110;
// // Accumulator BM1LL49 Part 3
// const unsigned int cm_int_core_bm1ll17_part3 = 0x00093120;
// // Accumulator BM1LL49 Part 4
// const unsigned int cm_int_core_bm1ll17_part4 = 0x00093130;
// // Accumulator BM1LH49 Part 1
// const unsigned int cm_int_core_bm1lh17_part1 = 0x00093140;
// // Accumulator BM1LH49 Part 2
// const unsigned int cm_int_core_bm1lh17_part2 = 0x00093150;
// // Accumulator BM1LH49 Part 3
// const unsigned int cm_int_core_bm1lh17_part3 = 0x00093160;
// // Accumulator BM1LH49 Part 4
// const unsigned int cm_int_core_bm1lh17_part4 = 0x00093170;
// // Accumulator BM1HL49 Part 1
// const unsigned int cm_int_core_bm1hl17_part1 = 0x00093180;
// // Accumulator BM1HL49 Part 2
// const unsigned int cm_int_core_bm1hl17_part2 = 0x00093190;
// // Accumulator BM1HL49 Part 3
// const unsigned int cm_int_core_bm1hl17_part3 = 0x000931A0;
// // Accumulator BM1HL49 Part 4
// const unsigned int cm_int_core_bm1hl17_part4 = 0x000931B0;
// // Accumulator BM1HH49 Part 1
// const unsigned int cm_int_core_bm1hh17_part1 = 0x000931C0;
// // Accumulator BM1HH49 Part 2
// const unsigned int cm_int_core_bm1hh17_part2 = 0x000931D0;
// // Accumulator BM1HH49 Part 3
// const unsigned int cm_int_core_bm1hh17_part3 = 0x000931E0;
// // Accumulator BM1HH49 Part 4
// const unsigned int cm_int_core_bm1hh17_part4 = 0x000931F0;
// // Accumulator BM1LL50 Part 1
// const unsigned int cm_int_core_bm1ll18_part1 = 0x00093200;
// // Accumulator BM1LL50 Part 2
// const unsigned int cm_int_core_bm1ll18_part2 = 0x00093210;
// // Accumulator BM1LL50 Part 3
// const unsigned int cm_int_core_bm1ll18_part3 = 0x00093220;
// // Accumulator BM1LL50 Part 4
// const unsigned int cm_int_core_bm1ll18_part4 = 0x00093230;
// // Accumulator BM1LH50 Part 1
// const unsigned int cm_int_core_bm1lh18_part1 = 0x00093240;
// // Accumulator BM1LH50 Part 2
// const unsigned int cm_int_core_bm1lh18_part2 = 0x00093250;
// // Accumulator BM1LH50 Part 3
// const unsigned int cm_int_core_bm1lh18_part3 = 0x00093260;
// // Accumulator BM1LH50 Part 4
// const unsigned int cm_int_core_bm1lh18_part4 = 0x00093270;
// // Accumulator BM1HL50 Part 1
// const unsigned int cm_int_core_bm1hl18_part1 = 0x00093280;
// // Accumulator BM1HL50 Part 2
// const unsigned int cm_int_core_bm1hl18_part2 = 0x00093290;
// // Accumulator BM1HL50 Part 3
// const unsigned int cm_int_core_bm1hl18_part3 = 0x000932A0;
// // Accumulator BM1HL50 Part 4
// const unsigned int cm_int_core_bm1hl18_part4 = 0x000932B0;
// // Accumulator BM1HH50 Part 1
// const unsigned int cm_int_core_bm1hh18_part1 = 0x000932C0;
// // Accumulator BM1HH50 Part 2
// const unsigned int cm_int_core_bm1hh18_part2 = 0x000932D0;
// // Accumulator BM1HH50 Part 3
// const unsigned int cm_int_core_bm1hh18_part3 = 0x000932E0;
// // Accumulator BM1HH50 Part 4
// const unsigned int cm_int_core_bm1hh18_part4 = 0x000932F0;
// // Accumulator BM1LL51 Part 1
// const unsigned int cm_int_core_bm1ll19_part1 = 0x00093300;
// // Accumulator BM1LL51 Part 2
// const unsigned int cm_int_core_bm1ll19_part2 = 0x00093310;
// // Accumulator BM1LL51 Part 3
// const unsigned int cm_int_core_bm1ll19_part3 = 0x00093320;
// // Accumulator BM1LL51 Part 4
// const unsigned int cm_int_core_bm1ll19_part4 = 0x00093330;
// // Accumulator BM1LH51 Part 1
// const unsigned int cm_int_core_bm1lh19_part1 = 0x00093340;
// // Accumulator BM1LH51 Part 2
// const unsigned int cm_int_core_bm1lh19_part2 = 0x00093350;
// // Accumulator BM1LH51 Part 3
// const unsigned int cm_int_core_bm1lh19_part3 = 0x00093360;
// // Accumulator BM1LH51 Part 4
// const unsigned int cm_int_core_bm1lh19_part4 = 0x00093370;
// // Accumulator BM1HL51 Part 1
// const unsigned int cm_int_core_bm1hl19_part1 = 0x00093380;
// // Accumulator BM1HL51 Part 2
// const unsigned int cm_int_core_bm1hl19_part2 = 0x00093390;
// // Accumulator BM1HL51 Part 3
// const unsigned int cm_int_core_bm1hl19_part3 = 0x000933A0;
// // Accumulator BM1HL51 Part 4
// const unsigned int cm_int_core_bm1hl19_part4 = 0x000933B0;
// // Accumulator BM1HH51 Part 1
// const unsigned int cm_int_core_bm1hh19_part1 = 0x000933C0;
// // Accumulator BM1HH51 Part 2
// const unsigned int cm_int_core_bm1hh19_part2 = 0x000933D0;
// // Accumulator BM1HH51 Part 3
// const unsigned int cm_int_core_bm1hh19_part3 = 0x000933E0;
// // Accumulator BM1HH51 Part 4
// const unsigned int cm_int_core_bm1hh19_part4 = 0x000933F0;
// // Accumulator BM1LL52 Part 1
// const unsigned int cm_int_core_bm1ll20_part1 = 0x00093400;
// // Accumulator BM1LL52 Part 2
// const unsigned int cm_int_core_bm1ll20_part2 = 0x00093410;
// // Accumulator BM1LL52 Part 3
// const unsigned int cm_int_core_bm1ll20_part3 = 0x00093420;
// // Accumulator BM1LL52 Part 4
// const unsigned int cm_int_core_bm1ll20_part4 = 0x00093430;
// // Accumulator BM1LH52 Part 1
// const unsigned int cm_int_core_bm1lh20_part1 = 0x00093440;
// // Accumulator BM1LH52 Part 2
// const unsigned int cm_int_core_bm1lh20_part2 = 0x00093450;
// // Accumulator BM1LH52 Part 3
// const unsigned int cm_int_core_bm1lh20_part3 = 0x00093460;
// // Accumulator BM1LH52 Part 4
// const unsigned int cm_int_core_bm1lh20_part4 = 0x00093470;
// // Accumulator BM1HL52 Part 1
// const unsigned int cm_int_core_bm1hl20_part1 = 0x00093480;
// // Accumulator BM1HL52 Part 2
// const unsigned int cm_int_core_bm1hl20_part2 = 0x00093490;
// // Accumulator BM1HL52 Part 3
// const unsigned int cm_int_core_bm1hl20_part3 = 0x000934A0;
// // Accumulator BM1HL52 Part 4
// const unsigned int cm_int_core_bm1hl20_part4 = 0x000934B0;
// // Accumulator BM1HH52 Part 1
// const unsigned int cm_int_core_bm1hh20_part1 = 0x000934C0;
// // Accumulator BM1HH52 Part 2
// const unsigned int cm_int_core_bm1hh20_part2 = 0x000934D0;
// // Accumulator BM1HH52 Part 3
// const unsigned int cm_int_core_bm1hh20_part3 = 0x000934E0;
// // Accumulator BM1HH52 Part 4
// const unsigned int cm_int_core_bm1hh20_part4 = 0x000934F0;
// // Accumulator BM1LL53 Part 1
// const unsigned int cm_int_core_bm1ll21_part1 = 0x00093500;
// // Accumulator BM1LL53 Part 2
// const unsigned int cm_int_core_bm1ll21_part2 = 0x00093510;
// // Accumulator BM1LL53 Part 3
// const unsigned int cm_int_core_bm1ll21_part3 = 0x00093520;
// // Accumulator BM1LL53 Part 4
// const unsigned int cm_int_core_bm1ll21_part4 = 0x00093530;
// // Accumulator BM1LH53 Part 1
// const unsigned int cm_int_core_bm1lh21_part1 = 0x00093540;
// // Accumulator BM1LH53 Part 2
// const unsigned int cm_int_core_bm1lh21_part2 = 0x00093550;
// // Accumulator BM1LH53 Part 3
// const unsigned int cm_int_core_bm1lh21_part3 = 0x00093560;
// // Accumulator BM1LH53 Part 4
// const unsigned int cm_int_core_bm1lh21_part4 = 0x00093570;
// // Accumulator BM1HL53 Part 1
// const unsigned int cm_int_core_bm1hl21_part1 = 0x00093580;
// // Accumulator BM1HL53 Part 2
// const unsigned int cm_int_core_bm1hl21_part2 = 0x00093590;
// // Accumulator BM1HL53 Part 3
// const unsigned int cm_int_core_bm1hl21_part3 = 0x000935A0;
// // Accumulator BM1HL53 Part 4
// const unsigned int cm_int_core_bm1hl21_part4 = 0x000935B0;
// // Accumulator BM1HH53 Part 1
// const unsigned int cm_int_core_bm1hh21_part1 = 0x000935C0;
// // Accumulator BM1HH53 Part 2
// const unsigned int cm_int_core_bm1hh21_part2 = 0x000935D0;
// // Accumulator BM1HH53 Part 3
// const unsigned int cm_int_core_bm1hh21_part3 = 0x000935E0;
// // Accumulator BM1HH53 Part 4
// const unsigned int cm_int_core_bm1hh21_part4 = 0x000935F0;
// // Accumulator BM1LL54 Part 1
// const unsigned int cm_int_core_bm1ll22_part1 = 0x00093600;
// // Accumulator BM1LL54 Part 2
// const unsigned int cm_int_core_bm1ll22_part2 = 0x00093610;
// // Accumulator BM1LL54 Part 3
// const unsigned int cm_int_core_bm1ll22_part3 = 0x00093620;
// // Accumulator BM1LL54 Part 4
// const unsigned int cm_int_core_bm1ll22_part4 = 0x00093630;
// // Accumulator BM1LH54 Part 1
// const unsigned int cm_int_core_bm1lh22_part1 = 0x00093640;
// // Accumulator BM1LH54 Part 2
// const unsigned int cm_int_core_bm1lh22_part2 = 0x00093650;
// // Accumulator BM1LH54 Part 3
// const unsigned int cm_int_core_bm1lh22_part3 = 0x00093660;
// // Accumulator BM1LH54 Part 4
// const unsigned int cm_int_core_bm1lh22_part4 = 0x00093670;
// // Accumulator BM1HL54 Part 1
// const unsigned int cm_int_core_bm1hl22_part1 = 0x00093680;
// // Accumulator BM1HL54 Part 2
// const unsigned int cm_int_core_bm1hl22_part2 = 0x00093690;
// // Accumulator BM1HL54 Part 3
// const unsigned int cm_int_core_bm1hl22_part3 = 0x000936A0;
// // Accumulator BM1HL54 Part 4
// const unsigned int cm_int_core_bm1hl22_part4 = 0x000936B0;
// // Accumulator BM1HH54 Part 1
// const unsigned int cm_int_core_bm1hh22_part1 = 0x000936C0;
// // Accumulator BM1HH54 Part 2
// const unsigned int cm_int_core_bm1hh22_part2 = 0x000936D0;
// // Accumulator BM1HH54 Part 3
// const unsigned int cm_int_core_bm1hh22_part3 = 0x000936E0;
// // Accumulator BM1HH54 Part 4
// const unsigned int cm_int_core_bm1hh22_part4 = 0x000936F0;
// // Accumulator BM1LL55 Part 1
// const unsigned int cm_int_core_bm1ll23_part1 = 0x00093700;
// // Accumulator BM1LL55 Part 2
// const unsigned int cm_int_core_bm1ll23_part2 = 0x00093710;
// // Accumulator BM1LL55 Part 3
// const unsigned int cm_int_core_bm1ll23_part3 = 0x00093720;
// // Accumulator BM1LL55 Part 4
// const unsigned int cm_int_core_bm1ll23_part4 = 0x00093730;
// // Accumulator BM1LH55 Part 1
// const unsigned int cm_int_core_bm1lh23_part1 = 0x00093740;
// // Accumulator BM1LH55 Part 2
// const unsigned int cm_int_core_bm1lh23_part2 = 0x00093750;
// // Accumulator BM1LH55 Part 3
// const unsigned int cm_int_core_bm1lh23_part3 = 0x00093760;
// // Accumulator BM1LH55 Part 4
// const unsigned int cm_int_core_bm1lh23_part4 = 0x00093770;
// // Accumulator BM1HL55 Part 1
// const unsigned int cm_int_core_bm1hl23_part1 = 0x00093780;
// // Accumulator BM1HL55 Part 2
// const unsigned int cm_int_core_bm1hl23_part2 = 0x00093790;
// // Accumulator BM1HL55 Part 3
// const unsigned int cm_int_core_bm1hl23_part3 = 0x000937A0;
// // Accumulator BM1HL55 Part 4
// const unsigned int cm_int_core_bm1hl23_part4 = 0x000937B0;
// // Accumulator BM1HH55 Part 1
// const unsigned int cm_int_core_bm1hh23_part1 = 0x000937C0;
// // Accumulator BM1HH55 Part 2
// const unsigned int cm_int_core_bm1hh23_part2 = 0x000937D0;
// // Accumulator BM1HH55 Part 3
// const unsigned int cm_int_core_bm1hh23_part3 = 0x000937E0;
// // Accumulator BM1HH55 Part 4
// const unsigned int cm_int_core_bm1hh23_part4 = 0x000937F0;
// // Accumulator BM1LL56 Part 1
// const unsigned int cm_int_core_bm1ll24_part1 = 0x00093800;
// // Accumulator BM1LL56 Part 2
// const unsigned int cm_int_core_bm1ll24_part2 = 0x00093810;
// // Accumulator BM1LL56 Part 3
// const unsigned int cm_int_core_bm1ll24_part3 = 0x00093820;
// // Accumulator BM1LL56 Part 4
// const unsigned int cm_int_core_bm1ll24_part4 = 0x00093830;
// // Accumulator BM1LH56 Part 1
// const unsigned int cm_int_core_bm1lh24_part1 = 0x00093840;
// // Accumulator BM1LH56 Part 2
// const unsigned int cm_int_core_bm1lh24_part2 = 0x00093850;
// // Accumulator BM1LH56 Part 3
// const unsigned int cm_int_core_bm1lh24_part3 = 0x00093860;
// // Accumulator BM1LH56 Part 4
// const unsigned int cm_int_core_bm1lh24_part4 = 0x00093870;
// // Accumulator BM1HL56 Part 1
// const unsigned int cm_int_core_bm1hl24_part1 = 0x00093880;
// // Accumulator BM1HL56 Part 2
// const unsigned int cm_int_core_bm1hl24_part2 = 0x00093890;
// // Accumulator BM1HL56 Part 3
// const unsigned int cm_int_core_bm1hl24_part3 = 0x000938A0;
// // Accumulator BM1HL56 Part 4
// const unsigned int cm_int_core_bm1hl24_part4 = 0x000938B0;
// // Accumulator BM1HH56 Part 1
// const unsigned int cm_int_core_bm1hh24_part1 = 0x000938C0;
// // Accumulator BM1HH56 Part 2
// const unsigned int cm_int_core_bm1hh24_part2 = 0x000938D0;
// // Accumulator BM1HH56 Part 3
// const unsigned int cm_int_core_bm1hh24_part3 = 0x000938E0;
// // Accumulator BM1HH56 Part 4
// const unsigned int cm_int_core_bm1hh24_part4 = 0x000938F0;
// // Accumulator BM1LL57 Part 1
// const unsigned int cm_int_core_bm1ll25_part1 = 0x00093900;
// // Accumulator BM1LL57 Part 2
// const unsigned int cm_int_core_bm1ll25_part2 = 0x00093910;
// // Accumulator BM1LL57 Part 3
// const unsigned int cm_int_core_bm1ll25_part3 = 0x00093920;
// // Accumulator BM1LL57 Part 4
// const unsigned int cm_int_core_bm1ll25_part4 = 0x00093930;
// // Accumulator BM1LH57 Part 1
// const unsigned int cm_int_core_bm1lh25_part1 = 0x00093940;
// // Accumulator BM1LH57 Part 2
// const unsigned int cm_int_core_bm1lh25_part2 = 0x00093950;
// // Accumulator BM1LH57 Part 3
// const unsigned int cm_int_core_bm1lh25_part3 = 0x00093960;
// // Accumulator BM1LH57 Part 4
// const unsigned int cm_int_core_bm1lh25_part4 = 0x00093970;
// // Accumulator BM1HL57 Part 1
// const unsigned int cm_int_core_bm1hl25_part1 = 0x00093980;
// // Accumulator BM1HL57 Part 2
// const unsigned int cm_int_core_bm1hl25_part2 = 0x00093990;
// // Accumulator BM1HL57 Part 3
// const unsigned int cm_int_core_bm1hl25_part3 = 0x000939A0;
// // Accumulator BM1HL57 Part 4
// const unsigned int cm_int_core_bm1hl25_part4 = 0x000939B0;
// // Accumulator BM1HH57 Part 1
// const unsigned int cm_int_core_bm1hh25_part1 = 0x000939C0;
// // Accumulator BM1HH57 Part 2
// const unsigned int cm_int_core_bm1hh25_part2 = 0x000939D0;
// // Accumulator BM1HH57 Part 3
// const unsigned int cm_int_core_bm1hh25_part3 = 0x000939E0;
// // Accumulator BM1HH57 Part 4
// const unsigned int cm_int_core_bm1hh25_part4 = 0x000939F0;
// // Accumulator BM1LL58 Part 1
// const unsigned int cm_int_core_bm1ll26_part1 = 0x00093A00;
// // Accumulator BM1LL58 Part 2
// const unsigned int cm_int_core_bm1ll26_part2 = 0x00093A10;
// // Accumulator BM1LL58 Part 3
// const unsigned int cm_int_core_bm1ll26_part3 = 0x00093A20;
// // Accumulator BM1LL58 Part 4
// const unsigned int cm_int_core_bm1ll26_part4 = 0x00093A30;
// // Accumulator BM1LH58 Part 1
// const unsigned int cm_int_core_bm1lh26_part1 = 0x00093A40;
// // Accumulator BM1LH58 Part 2
// const unsigned int cm_int_core_bm1lh26_part2 = 0x00093A50;
// // Accumulator BM1LH58 Part 3
// const unsigned int cm_int_core_bm1lh26_part3 = 0x00093A60;
// // Accumulator BM1LH58 Part 4
// const unsigned int cm_int_core_bm1lh26_part4 = 0x00093A70;
// // Accumulator BM1HL58 Part 1
// const unsigned int cm_int_core_bm1hl26_part1 = 0x00093A80;
// // Accumulator BM1HL58 Part 2
// const unsigned int cm_int_core_bm1hl26_part2 = 0x00093A90;
// // Accumulator BM1HL58 Part 3
// const unsigned int cm_int_core_bm1hl26_part3 = 0x00093AA0;
// // Accumulator BM1HL58 Part 4
// const unsigned int cm_int_core_bm1hl26_part4 = 0x00093AB0;
// // Accumulator BM1HH58 Part 1
// const unsigned int cm_int_core_bm1hh26_part1 = 0x00093AC0;
// // Accumulator BM1HH58 Part 2
// const unsigned int cm_int_core_bm1hh26_part2 = 0x00093AD0;
// // Accumulator BM1HH58 Part 3
// const unsigned int cm_int_core_bm1hh26_part3 = 0x00093AE0;
// // Accumulator BM1HH58 Part 4
// const unsigned int cm_int_core_bm1hh26_part4 = 0x00093AF0;
// // Accumulator BM1LL59 Part 1
// const unsigned int cm_int_core_bm1ll27_part1 = 0x00093B00;
// // Accumulator BM1LL59 Part 2
// const unsigned int cm_int_core_bm1ll27_part2 = 0x00093B10;
// // Accumulator BM1LL59 Part 3
// const unsigned int cm_int_core_bm1ll27_part3 = 0x00093B20;
// // Accumulator BM1LL59 Part 4
// const unsigned int cm_int_core_bm1ll27_part4 = 0x00093B30;
// // Accumulator BM1LH59 Part 1
// const unsigned int cm_int_core_bm1lh27_part1 = 0x00093B40;
// // Accumulator BM1LH59 Part 2
// const unsigned int cm_int_core_bm1lh27_part2 = 0x00093B50;
// // Accumulator BM1LH59 Part 3
// const unsigned int cm_int_core_bm1lh27_part3 = 0x00093B60;
// // Accumulator BM1LH59 Part 4
// const unsigned int cm_int_core_bm1lh27_part4 = 0x00093B70;
// // Accumulator BM1HL59 Part 1
// const unsigned int cm_int_core_bm1hl27_part1 = 0x00093B80;
// // Accumulator BM1HL59 Part 2
// const unsigned int cm_int_core_bm1hl27_part2 = 0x00093B90;
// // Accumulator BM1HL59 Part 3
// const unsigned int cm_int_core_bm1hl27_part3 = 0x00093BA0;
// // Accumulator BM1HL59 Part 4
// const unsigned int cm_int_core_bm1hl27_part4 = 0x00093BB0;
// // Accumulator BM1HH59 Part 1
// const unsigned int cm_int_core_bm1hh27_part1 = 0x00093BC0;
// // Accumulator BM1HH59 Part 2
// const unsigned int cm_int_core_bm1hh27_part2 = 0x00093BD0;
// // Accumulator BM1HH59 Part 3
// const unsigned int cm_int_core_bm1hh27_part3 = 0x00093BE0;
// // Accumulator BM1HH59 Part 4
// const unsigned int cm_int_core_bm1hh27_part4 = 0x00093BF0;
// // Accumulator BM1LL60 Part 1
// const unsigned int cm_int_core_bm1ll28_part1 = 0x00093C00;
// // Accumulator BM1LL60 Part 2
// const unsigned int cm_int_core_bm1ll28_part2 = 0x00093C10;
// // Accumulator BM1LL60 Part 3
// const unsigned int cm_int_core_bm1ll28_part3 = 0x00093C20;
// // Accumulator BM1LL60 Part 4
// const unsigned int cm_int_core_bm1ll28_part4 = 0x00093C30;
// // Accumulator BM1LH60 Part 1
// const unsigned int cm_int_core_bm1lh28_part1 = 0x00093C40;
// // Accumulator BM1LH60 Part 2
// const unsigned int cm_int_core_bm1lh28_part2 = 0x00093C50;
// // Accumulator BM1LH60 Part 3
// const unsigned int cm_int_core_bm1lh28_part3 = 0x00093C60;
// // Accumulator BM1LH60 Part 4
// const unsigned int cm_int_core_bm1lh28_part4 = 0x00093C70;
// // Accumulator BM1HL60 Part 1
// const unsigned int cm_int_core_bm1hl28_part1 = 0x00093C80;
// // Accumulator BM1HL60 Part 2
// const unsigned int cm_int_core_bm1hl28_part2 = 0x00093C90;
// // Accumulator BM1HL60 Part 3
// const unsigned int cm_int_core_bm1hl28_part3 = 0x00093CA0;
// // Accumulator BM1HL60 Part 4
// const unsigned int cm_int_core_bm1hl28_part4 = 0x00093CB0;
// // Accumulator BM1HH60 Part 1
// const unsigned int cm_int_core_bm1hh28_part1 = 0x00093CC0;
// // Accumulator BM1HH60 Part 2
// const unsigned int cm_int_core_bm1hh28_part2 = 0x00093CD0;
// // Accumulator BM1HH60 Part 3
// const unsigned int cm_int_core_bm1hh28_part3 = 0x00093CE0;
// // Accumulator BM1HH60 Part 4
// const unsigned int cm_int_core_bm1hh28_part4 = 0x00093CF0;
// // Accumulator BM1LL61 Part 1
// const unsigned int cm_int_core_bm1ll29_part1 = 0x00093D00;
// // Accumulator BM1LL61 Part 2
// const unsigned int cm_int_core_bm1ll29_part2 = 0x00093D10;
// // Accumulator BM1LL61 Part 3
// const unsigned int cm_int_core_bm1ll29_part3 = 0x00093D20;
// // Accumulator BM1LL61 Part 4
// const unsigned int cm_int_core_bm1ll29_part4 = 0x00093D30;
// // Accumulator BM1LH61 Part 1
// const unsigned int cm_int_core_bm1lh29_part1 = 0x00093D40;
// // Accumulator BM1LH61 Part 2
// const unsigned int cm_int_core_bm1lh29_part2 = 0x00093D50;
// // Accumulator BM1LH61 Part 3
// const unsigned int cm_int_core_bm1lh29_part3 = 0x00093D60;
// // Accumulator BM1LH61 Part 4
// const unsigned int cm_int_core_bm1lh29_part4 = 0x00093D70;
// // Accumulator BM1HL61 Part 1
// const unsigned int cm_int_core_bm1hl29_part1 = 0x00093D80;
// // Accumulator BM1HL61 Part 2
// const unsigned int cm_int_core_bm1hl29_part2 = 0x00093D90;
// // Accumulator BM1HL61 Part 3
// const unsigned int cm_int_core_bm1hl29_part3 = 0x00093DA0;
// // Accumulator BM1HL61 Part 4
// const unsigned int cm_int_core_bm1hl29_part4 = 0x00093DB0;
// // Accumulator BM1HH61 Part 1
// const unsigned int cm_int_core_bm1hh29_part1 = 0x00093DC0;
// // Accumulator BM1HH61 Part 2
// const unsigned int cm_int_core_bm1hh29_part2 = 0x00093DD0;
// // Accumulator BM1HH61 Part 3
// const unsigned int cm_int_core_bm1hh29_part3 = 0x00093DE0;
// // Accumulator BM1HH61 Part 4
// const unsigned int cm_int_core_bm1hh29_part4 = 0x00093DF0;
// // Accumulator BM1LL62 Part 1
// const unsigned int cm_int_core_bm1ll30_part1 = 0x00093E00;
// // Accumulator BM1LL62 Part 2
// const unsigned int cm_int_core_bm1ll30_part2 = 0x00093E10;
// // Accumulator BM1LL62 Part 3
// const unsigned int cm_int_core_bm1ll30_part3 = 0x00093E20;
// // Accumulator BM1LL62 Part 4
// const unsigned int cm_int_core_bm1ll30_part4 = 0x00093E30;
// // Accumulator BM1LH62 Part 1
// const unsigned int cm_int_core_bm1lh30_part1 = 0x00093E40;
// // Accumulator BM1LH62 Part 2
// const unsigned int cm_int_core_bm1lh30_part2 = 0x00093E50;
// // Accumulator BM1LH62 Part 3
// const unsigned int cm_int_core_bm1lh30_part3 = 0x00093E60;
// // Accumulator BM1LH62 Part 4
// const unsigned int cm_int_core_bm1lh30_part4 = 0x00093E70;
// // Accumulator BM1HL62 Part 1
// const unsigned int cm_int_core_bm1hl30_part1 = 0x00093E80;
// // Accumulator BM1HL62 Part 2
// const unsigned int cm_int_core_bm1hl30_part2 = 0x00093E90;
// // Accumulator BM1HL62 Part 3
// const unsigned int cm_int_core_bm1hl30_part3 = 0x00093EA0;
// // Accumulator BM1HL62 Part 4
// const unsigned int cm_int_core_bm1hl30_part4 = 0x00093EB0;
// // Accumulator BM1HH62 Part 1
// const unsigned int cm_int_core_bm1hh30_part1 = 0x00093EC0;
// // Accumulator BM1HH62 Part 2
// const unsigned int cm_int_core_bm1hh30_part2 = 0x00093ED0;
// // Accumulator BM1HH62 Part 3
// const unsigned int cm_int_core_bm1hh30_part3 = 0x00093EE0;
// // Accumulator BM1HH62 Part 4
// const unsigned int cm_int_core_bm1hh30_part4 = 0x00093EF0;
// // Accumulator BM1LL63 Part 1
// const unsigned int cm_int_core_bm1ll31_part1 = 0x00093F00;
// // Accumulator BM1LL63 Part 2
// const unsigned int cm_int_core_bm1ll31_part2 = 0x00093F10;
// // Accumulator BM1LL63 Part 3
// const unsigned int cm_int_core_bm1ll31_part3 = 0x00093F20;
// // Accumulator BM1LL63 Part 4
// const unsigned int cm_int_core_bm1ll31_part4 = 0x00093F30;
// // Accumulator BM1LH63 Part 1
// const unsigned int cm_int_core_bm1lh31_part1 = 0x00093F40;
// // Accumulator BM1LH63 Part 2
// const unsigned int cm_int_core_bm1lh31_part2 = 0x00093F50;
// // Accumulator BM1LH63 Part 3
// const unsigned int cm_int_core_bm1lh31_part3 = 0x00093F60;
// // Accumulator BM1LH63 Part 4
// const unsigned int cm_int_core_bm1lh31_part4 = 0x00093F70;
// // Accumulator BM1HL63 Part 1
// const unsigned int cm_int_core_bm1hl31_part1 = 0x00093F80;
// // Accumulator BM1HL63 Part 2
// const unsigned int cm_int_core_bm1hl31_part2 = 0x00093F90;
// // Accumulator BM1HL63 Part 3
// const unsigned int cm_int_core_bm1hl31_part3 = 0x00093FA0;
// // Accumulator BM1HL63 Part 4
// const unsigned int cm_int_core_bm1hl31_part4 = 0x00093FB0;
// // Accumulator BM1HH63 Part 1
// const unsigned int cm_int_core_bm1hh31_part1 = 0x00093FC0;
// // Accumulator BM1HH63 Part 2
// const unsigned int cm_int_core_bm1hh31_part2 = 0x00093FD0;
// // Accumulator BM1HH63 Part 3
// const unsigned int cm_int_core_bm1hh31_part3 = 0x00093FE0;
// // Accumulator BM1HH63 Part 4
// const unsigned int cm_int_core_bm1hh31_part4 = 0x00093FF0;
// // Vector register X0 Part 1
// const unsigned int cm_int_core_x0_part1 = 0x00094000;
// // Vector register X0 Part 2
// const unsigned int cm_int_core_x0_part2 = 0x00094010;
// // Vector register X0 Part 3
// const unsigned int cm_int_core_x0_part3 = 0x00094020;
// // Vector register X0 Part 4
// const unsigned int cm_int_core_x0_part4 = 0x00094030;
// // Vector register X1 Part 1
// const unsigned int cm_int_core_x1_part1 = 0x00094040;
// // Vector register X1 Part 2
// const unsigned int cm_int_core_x1_part2 = 0x00094050;
// // Vector register X1 Part 3
// const unsigned int cm_int_core_x1_part3 = 0x00094060;
// // Vector register X1 Part 4
// const unsigned int cm_int_core_x1_part4 = 0x00094070;
// // Vector register X2 Part 1
// const unsigned int cm_int_core_x2_part1 = 0x00094080;
// // Vector register X2 Part 2
// const unsigned int cm_int_core_x2_part2 = 0x00094090;
// // Vector register X2 Part 3
// const unsigned int cm_int_core_x2_part3 = 0x000940A0;
// // Vector register X2 Part 4
// const unsigned int cm_int_core_x2_part4 = 0x000940B0;
// // Vector register X3 Part 1
// const unsigned int cm_int_core_x3_part1 = 0x000940C0;
// // Vector register X3 Part 2
// const unsigned int cm_int_core_x3_part2 = 0x000940D0;
// // Vector register X3 Part 3
// const unsigned int cm_int_core_x3_part3 = 0x000940E0;
// // Vector register X3 Part 4
// const unsigned int cm_int_core_x3_part4 = 0x000940F0;
// // Vector register X4 Part 1
// const unsigned int cm_int_core_x4_part1 = 0x00094100;
// // Vector register X4 Part 2
// const unsigned int cm_int_core_x4_part2 = 0x00094110;
// // Vector register X4 Part 3
// const unsigned int cm_int_core_x4_part3 = 0x00094120;
// // Vector register X4 Part 4
// const unsigned int cm_int_core_x4_part4 = 0x00094130;
// // Vector register X5 Part 1
// const unsigned int cm_int_core_x5_part1 = 0x00094140;
// // Vector register X5 Part 2
// const unsigned int cm_int_core_x5_part2 = 0x00094150;
// // Vector register X5 Part 3
// const unsigned int cm_int_core_x5_part3 = 0x00094160;
// // Vector register X5 Part 4
// const unsigned int cm_int_core_x5_part4 = 0x00094170;
// // Vector register X6 Part 1
// const unsigned int cm_int_core_x6_part1 = 0x00094180;
// // Vector register X6 Part 2
// const unsigned int cm_int_core_x6_part2 = 0x00094190;
// // Vector register X6 Part 3
// const unsigned int cm_int_core_x6_part3 = 0x000941A0;
// // Vector register X6 Part 4
// const unsigned int cm_int_core_x6_part4 = 0x000941B0;
// // Vector register X7 Part 1
// const unsigned int cm_int_core_x7_part1 = 0x000941C0;
// // Vector register X7 Part 2
// const unsigned int cm_int_core_x7_part2 = 0x000941D0;
// // Vector register X7 Part 3
// const unsigned int cm_int_core_x7_part3 = 0x000941E0;
// // Vector register X7 Part 4
// const unsigned int cm_int_core_x7_part4 = 0x000941F0;
// // Vector register X8 Part 1
// const unsigned int cm_int_core_x8_part1 = 0x00094200;
// // Vector register X8 Part 2
// const unsigned int cm_int_core_x8_part2 = 0x00094210;
// // Vector register X8 Part 3
// const unsigned int cm_int_core_x8_part3 = 0x00094220;
// // Vector register X8 Part 4
// const unsigned int cm_int_core_x8_part4 = 0x00094230;
// // Vector register X9 Part 1
// const unsigned int cm_int_core_x9_part1 = 0x00094240;
// // Vector register X9 Part 2
// const unsigned int cm_int_core_x9_part2 = 0x00094250;
// // Vector register X9 Part 3
// const unsigned int cm_int_core_x9_part3 = 0x00094260;
// // Vector register X9 Part 4
// const unsigned int cm_int_core_x9_part4 = 0x00094270;
// // Vector register X10 Part 1
// const unsigned int cm_int_core_x10_part1 = 0x00094280;
// // Vector register X10 Part 2
// const unsigned int cm_int_core_x10_part2 = 0x00094290;
// // Vector register X10 Part 3
// const unsigned int cm_int_core_x10_part3 = 0x000942A0;
// // Vector register X10 Part 4
// const unsigned int cm_int_core_x10_part4 = 0x000942B0;
// // Vector register X11 Part 1
// const unsigned int cm_int_core_x11_part1 = 0x000942C0;
// // Vector register X11 Part 2
// const unsigned int cm_int_core_x11_part2 = 0x000942D0;
// // Vector register X11 Part 3
// const unsigned int cm_int_core_x11_part3 = 0x000942E0;
// // Vector register X11 Part 4
// const unsigned int cm_int_core_x11_part4 = 0x000942F0;
// // Vector register X12 Part 1
// const unsigned int cm_int_core_x12_part1 = 0x00094300;
// // Vector register X12 Part 2
// const unsigned int cm_int_core_x12_part2 = 0x00094310;
// // Vector register X12 Part 3
// const unsigned int cm_int_core_x12_part3 = 0x00094320;
// // Vector register X12 Part 4
// const unsigned int cm_int_core_x12_part4 = 0x00094330;
// // Vector register X13 Part 1
// const unsigned int cm_int_core_x13_part1 = 0x00094340;
// // Vector register X13 Part 2
// const unsigned int cm_int_core_x13_part2 = 0x00094350;
// // Vector register X13 Part 3
// const unsigned int cm_int_core_x13_part3 = 0x00094360;
// // Vector register X13 Part 4
// const unsigned int cm_int_core_x13_part4 = 0x00094370;
// // Vector register X14 Part 1
// const unsigned int cm_int_core_x14_part1 = 0x00094380;
// // Vector register X14 Part 2
// const unsigned int cm_int_core_x14_part2 = 0x00094390;
// // Vector register X14 Part 3
// const unsigned int cm_int_core_x14_part3 = 0x000943A0;
// // Vector register X14 Part 4
// const unsigned int cm_int_core_x14_part4 = 0x000943B0;
// // Vector register X15 Part 1
// const unsigned int cm_int_core_x15_part1 = 0x000943C0;
// // Vector register X15 Part 2
// const unsigned int cm_int_core_x15_part2 = 0x000943D0;
// // Vector register X15 Part 3
// const unsigned int cm_int_core_x15_part3 = 0x000943E0;
// // Vector register X15 Part 4
// const unsigned int cm_int_core_x15_part4 = 0x000943F0;
// // Vector register SEPG0_LE
// const unsigned int cm_int_core_sepg0_le = 0x00094400;
// // Vector register SEPG1_LE
// const unsigned int cm_int_core_sepg1_le = 0x00094410;
// // Vector register SEPG2_LE
// const unsigned int cm_int_core_sepg2_le = 0x00094420;
// // Vector register SEPG3_LE
// const unsigned int cm_int_core_sepg3_le = 0x00094430;
// // Vector register SEPG4_LE
// const unsigned int cm_int_core_sepg4_le = 0x00094440;
// // Vector register SEPG5_LE
// const unsigned int cm_int_core_sepg5_le = 0x00094450;
// // Vector register SEPG6_LE
// const unsigned int cm_int_core_sepg6_le = 0x00094460;
// // Vector register SEPG7_LE
// const unsigned int cm_int_core_sepg7_le = 0x00094470;
// // Vector register SEPG0_HE
// const unsigned int cm_int_core_sepg0_he = 0x00094480;
// // Vector register SEPG1_HE
// const unsigned int cm_int_core_sepg1_he = 0x00094490;
// // Vector register SEPG2_HE
// const unsigned int cm_int_core_sepg2_he = 0x000944A0;
// // Vector register SEPG3_HE
// const unsigned int cm_int_core_sepg3_he = 0x000944B0;
// // Vector register SEPG4_HE
// const unsigned int cm_int_core_sepg4_he = 0x000944C0;
// // Vector register SEPG5_HE
// const unsigned int cm_int_core_sepg5_he = 0x000944D0;
// // Vector register SEPG6_HE
// const unsigned int cm_int_core_sepg6_he = 0x000944E0;
// // Vector register SEPG7_HE
// const unsigned int cm_int_core_sepg7_he = 0x000944F0;
// // Vector register SEPG0_LO
// const unsigned int cm_int_core_sepg0_lo = 0x00094500;
// // Vector register SEPG1_LO
// const unsigned int cm_int_core_sepg1_lo = 0x00094510;
// // Vector register SEPG2_LO
// const unsigned int cm_int_core_sepg2_lo = 0x00094520;
// // Vector register SEPG3_LO
// const unsigned int cm_int_core_sepg3_lo = 0x00094530;
// // Vector register SEPG4_LO
// const unsigned int cm_int_core_sepg4_lo = 0x00094540;
// // Vector register SEPG5_LO
// const unsigned int cm_int_core_sepg5_lo = 0x00094550;
// // Vector register SEPG6_LO
// const unsigned int cm_int_core_sepg6_lo = 0x00094560;
// // Vector register SEPG7_LO
// const unsigned int cm_int_core_sepg7_lo = 0x00094570;
// // Vector register SEPG0_HO
// const unsigned int cm_int_core_sepg0_ho = 0x00094580;
// // Vector register SEPG1_HO
// const unsigned int cm_int_core_sepg1_ho = 0x00094590;
// // Vector register SEPG2_HO
// const unsigned int cm_int_core_sepg2_ho = 0x000945A0;
// // Vector register SEPG3_HO
// const unsigned int cm_int_core_sepg3_ho = 0x000945B0;
// // Vector register SEPG4_HO
// const unsigned int cm_int_core_sepg4_ho = 0x000945C0;
// // Vector register SEPG5_HO
// const unsigned int cm_int_core_sepg5_ho = 0x000945D0;
// // Vector register SEPG6_HO
// const unsigned int cm_int_core_sepg6_ho = 0x000945E0;
// // Vector register SEPG7_HO
// const unsigned int cm_int_core_sepg7_ho = 0x000945F0;
// // LDFIFOL0 Part 1
// const unsigned int cm_int_core_ldfifol0_part1 = 0x00094600;
// // LDFIFOL0 Part 2
// const unsigned int cm_int_core_ldfifol0_part2 = 0x00094610;
// // LDFIFOL0 Part 3
// const unsigned int cm_int_core_ldfifol0_part3 = 0x00094620;
// // LDFIFOL0 Part 4
// const unsigned int cm_int_core_ldfifol0_part4 = 0x00094630;
// // LDFIFOL0 Part 5
// const unsigned int cm_int_core_ldfifol0_part5 = 0x00094640;
// // LDFIFOL0 Part 6
// const unsigned int cm_int_core_ldfifol0_part6 = 0x00094650;
// // LDFIFOL0 Part 7
// const unsigned int cm_int_core_ldfifol0_part7 = 0x00094660;
// // LDFIFOL0 Part 8
// const unsigned int cm_int_core_ldfifol0_part8 = 0x00094670;
// // LDFIFOH0 Part 1
// const unsigned int cm_int_core_ldfifoh0_part1 = 0x00094680;
// // LDFIFOH0 Part 2
// const unsigned int cm_int_core_ldfifoh0_part2 = 0x00094690;
// // LDFIFOH0 Part 3
// const unsigned int cm_int_core_ldfifoh0_part3 = 0x000946A0;
// // LDFIFOH0 Part 4
// const unsigned int cm_int_core_ldfifoh0_part4 = 0x000946B0;
// // LDFIFOH0 Part 5
// const unsigned int cm_int_core_ldfifoh0_part5 = 0x000946C0;
// // LDFIFOH0 Part 6
// const unsigned int cm_int_core_ldfifoh0_part6 = 0x000946D0;
// // LDFIFOH0 Part 7
// const unsigned int cm_int_core_ldfifoh0_part7 = 0x000946E0;
// // LDFIFOH0 Part 8
// const unsigned int cm_int_core_ldfifoh0_part8 = 0x000946F0;
// // LDFIFOL1 Part 1
// const unsigned int cm_int_core_ldfifol1_part1 = 0x00094700;
// // LDFIFOL1 Part 2
// const unsigned int cm_int_core_ldfifol1_part2 = 0x00094710;
// // LDFIFOL1 Part 3
// const unsigned int cm_int_core_ldfifol1_part3 = 0x00094720;
// // LDFIFOL1 Part 4
// const unsigned int cm_int_core_ldfifol1_part4 = 0x00094730;
// // LDFIFOL1 Part 5
// const unsigned int cm_int_core_ldfifol1_part5 = 0x00094740;
// // LDFIFOL1 Part 6
// const unsigned int cm_int_core_ldfifol1_part6 = 0x00094750;
// // LDFIFOL1 Part 7
// const unsigned int cm_int_core_ldfifol1_part7 = 0x00094760;
// // LDFIFOL1 Part 8
// const unsigned int cm_int_core_ldfifol1_part8 = 0x00094770;
// // LDFIFOH1 Part 1
// const unsigned int cm_int_core_ldfifoh1_part1 = 0x00094780;
// // LDFIFOH1 Part 2
// const unsigned int cm_int_core_ldfifoh1_part2 = 0x00094790;
// // LDFIFOH1 Part 3
// const unsigned int cm_int_core_ldfifoh1_part3 = 0x000947A0;
// // LDFIFOH1 Part 4
// const unsigned int cm_int_core_ldfifoh1_part4 = 0x000947B0;
// // LDFIFOH1 Part 5
// const unsigned int cm_int_core_ldfifoh1_part5 = 0x000947C0;
// // LDFIFOH1 Part 6
// const unsigned int cm_int_core_ldfifoh1_part6 = 0x000947D0;
// // LDFIFOH1 Part 7
// const unsigned int cm_int_core_ldfifoh1_part7 = 0x000947E0;
// // LDFIFOH1 Part 8
// const unsigned int cm_int_core_ldfifoh1_part8 = 0x000947F0;
// // STFIFOL Part 1
// const unsigned int cm_int_core_stfifol_part1 = 0x00094800;
// // STFIFOL Part 2
// const unsigned int cm_int_core_stfifol_part2 = 0x00094810;
// // STFIFOL Part 3
// const unsigned int cm_int_core_stfifol_part3 = 0x00094820;
// // STFIFOL Part 4
// const unsigned int cm_int_core_stfifol_part4 = 0x00094830;
// // STFIFOL Part 5
// const unsigned int cm_int_core_stfifol_part5 = 0x00094840;
// // STFIFOL Part 6
// const unsigned int cm_int_core_stfifol_part6 = 0x00094850;
// // STFIFOL Part 7
// const unsigned int cm_int_core_stfifol_part7 = 0x00094860;
// // STFIFOL Part 8
// const unsigned int cm_int_core_stfifol_part8 = 0x00094870;
// // STFIFOH Part 1
// const unsigned int cm_int_core_stfifoh_part1 = 0x00094880;
// // STFIFOH Part 2
// const unsigned int cm_int_core_stfifoh_part2 = 0x00094890;
// // STFIFOH Part 3
// const unsigned int cm_int_core_stfifoh_part3 = 0x000948A0;
// // STFIFOH Part 4
// const unsigned int cm_int_core_stfifoh_part4 = 0x000948B0;
// // STFIFOH Part 6
// const unsigned int cm_int_core_stfifoh_part5 = 0x000948C0;
// // STFIFOH Part 6
// const unsigned int cm_int_core_stfifoh_part6 = 0x000948D0;
// // STFIFOH Part 7
// const unsigned int cm_int_core_stfifoh_part7 = 0x000948E0;
// // STFIFOH Part 8
// const unsigned int cm_int_core_stfifoh_part8 = 0x000948F0;
// // FIFOXTRA Part 1
// const unsigned int cm_int_core_fifoxtra_part1 = 0x00094900;
// // FIFOXTRA Part 2
// const unsigned int cm_int_core_fifoxtra_part2 = 0x00094910;
// // FIFOXTRA Part 3
// const unsigned int cm_int_core_fifoxtra_part3 = 0x00094920;
// // FIFOXTRA Part 4
// const unsigned int cm_int_core_fifoxtra_part4 = 0x00094930;
// // FIFOXTRA Part 5
// const unsigned int cm_int_core_fifoxtra_part5 = 0x00094940;
// // FIFOXTRA Part 6
// const unsigned int cm_int_core_fifoxtra_part6 = 0x00094950;
// // FIFOXTRA Part 7
// const unsigned int cm_int_core_fifoxtra_part7 = 0x00094960;
// // FIFOXTRA Part 8
// const unsigned int cm_int_core_fifoxtra_part8 = 0x00094970;
// // FIFOXTRA Part 7
// const unsigned int cm_int_core_lfsr_p0_p1 = 0x00094980;
// // FIFOXTRA Part 8
// const unsigned int cm_int_core_lfsr_p2_p3 = 0x00094990;
// // R0 register
// const unsigned int cm_int_core_r0 = 0x00095000;
// // R1 register
// const unsigned int cm_int_core_r1 = 0x00095010;
// // R2 register
// const unsigned int cm_int_core_r2 = 0x00095020;
// // R3 register
// const unsigned int cm_int_core_r3 = 0x00095030;
// // R4 register
// const unsigned int cm_int_core_r4 = 0x00095040;
// // R5 register
// const unsigned int cm_int_core_r5 = 0x00095050;
// // R6 register
// const unsigned int cm_int_core_r6 = 0x00095060;
// // R7 register
// const unsigned int cm_int_core_r7 = 0x00095070;
// // R8 register
// const unsigned int cm_int_core_r8 = 0x00095080;
// // R9 register
// const unsigned int cm_int_core_r9 = 0x00095090;
// // R10 register
// const unsigned int cm_int_core_r10 = 0x000950A0;
// // R11 register
// const unsigned int cm_int_core_r11 = 0x000950B0;
// // R12 register
// const unsigned int cm_int_core_r12 = 0x000950C0;
// // R13 register
// const unsigned int cm_int_core_r13 = 0x000950D0;
// // R14 register
// const unsigned int cm_int_core_r14 = 0x000950E0;
// // R15 register
// const unsigned int cm_int_core_r15 = 0x000950F0;
// // R16 register
// const unsigned int cm_int_core_r16 = 0x00095100;
// // R17 register
// const unsigned int cm_int_core_r17 = 0x00095110;
// // R18 register
// const unsigned int cm_int_core_r18 = 0x00095120;
// // R19 register
// const unsigned int cm_int_core_r19 = 0x00095130;
// // R20 register
// const unsigned int cm_int_core_r20 = 0x00095140;
// // R21 register
// const unsigned int cm_int_core_r21 = 0x00095150;
// // R22 register
// const unsigned int cm_int_core_r22 = 0x00095160;
// // R23 register
// const unsigned int cm_int_core_r23 = 0x00095170;
// // R24 register
// const unsigned int cm_int_core_r24 = 0x00095180;
// // R25 register
// const unsigned int cm_int_core_r25 = 0x00095190;
// // R26 register
// const unsigned int cm_int_core_r26 = 0x000951A0;
// // R27 register
// const unsigned int cm_int_core_r27 = 0x000951B0;
// // R28 register
// const unsigned int cm_int_core_r28 = 0x000951C0;
// // R29 register
// const unsigned int cm_int_core_r29 = 0x000951D0;
// // R30 register
// const unsigned int cm_int_core_r30 = 0x000951E0;
// // R31 register
// const unsigned int cm_int_core_r31 = 0x000951F0;
// // Modifier register M0
// const unsigned int cm_int_core_m0 = 0x00095200;
// // Modifier register M1
// const unsigned int cm_int_core_m1 = 0x00095210;
// // Modifier register M2
// const unsigned int cm_int_core_m2 = 0x00095220;
// // Modifier register M3
// const unsigned int cm_int_core_m3 = 0x00095230;
// // Modifier register M4
// const unsigned int cm_int_core_m4 = 0x00095240;
// // Modifier register M5
// const unsigned int cm_int_core_m5 = 0x00095250;
// // Modifier register M6
// const unsigned int cm_int_core_m6 = 0x00095260;
// // Modifier register M7
// const unsigned int cm_int_core_m7 = 0x00095270;
// // Size register DN0
// const unsigned int cm_int_core_dn0 = 0x00095280;
// // Size register DN1
// const unsigned int cm_int_core_dn1 = 0x00095290;
// // Size register DN2
// const unsigned int cm_int_core_dn2 = 0x000952A0;
// // Size register DN3
// const unsigned int cm_int_core_dn3 = 0x000952B0;
// // Size register DN4
// const unsigned int cm_int_core_dn4 = 0x000952C0;
// // Size register DN5
// const unsigned int cm_int_core_dn5 = 0x000952D0;
// // Size register DN6
// const unsigned int cm_int_core_dn6 = 0x000952E0;
// // Size register DN7
// const unsigned int cm_int_core_dn7 = 0x000952F0;
// // Step register DJ0
// const unsigned int cm_int_core_dj0 = 0x00095300;
// // Step register DJ1
// const unsigned int cm_int_core_dj1 = 0x00095310;
// // Step register DJ2
// const unsigned int cm_int_core_dj2 = 0x00095320;
// // Step register DJ3
// const unsigned int cm_int_core_dj3 = 0x00095330;
// // Step register DJ4
// const unsigned int cm_int_core_dj4 = 0x00095340;
// // Step register DJ5
// const unsigned int cm_int_core_dj5 = 0x00095350;
// // Step register DJ6
// const unsigned int cm_int_core_dj6 = 0x00095360;
// // Step register DJ7
// const unsigned int cm_int_core_dj7 = 0x00095370;
// // Count register DC0
// const unsigned int cm_int_core_dc0 = 0x00095380;
// // Count register DC1
// const unsigned int cm_int_core_dc1 = 0x00095390;
// // Count register DC2
// const unsigned int cm_int_core_dc2 = 0x000953A0;
// // Count register DC3
// const unsigned int cm_int_core_dc3 = 0x000953B0;
// // Count register DC4
// const unsigned int cm_int_core_dc4 = 0x000953C0;
// // Count register DC5
// const unsigned int cm_int_core_dc5 = 0x000953D0;
// // Count register DC6
// const unsigned int cm_int_core_dc6 = 0x000953E0;
// // Count register DC7
// const unsigned int cm_int_core_dc7 = 0x000953F0;
// // Pointer register P0
// const unsigned int cm_int_core_p0 = 0x00095400;
// // Pointer register P1
// const unsigned int cm_int_core_p1 = 0x00095410;
// // Pointer register P2
// const unsigned int cm_int_core_p2 = 0x00095420;
// // Pointer register P3
// const unsigned int cm_int_core_p3 = 0x00095430;
// // Pointer register P4
// const unsigned int cm_int_core_p4 = 0x00095440;
// // Pointer register P5
// const unsigned int cm_int_core_p5 = 0x00095450;
// // Pointer register P6
// const unsigned int cm_int_core_p6 = 0x00095460;
// // Pointer register P7
// const unsigned int cm_int_core_p7 = 0x00095470;
// // Index register I[0]
// const unsigned int cm_int_core_i0 = 0x00095480;
// // Index register I[1]
// const unsigned int cm_int_core_i1 = 0x00095490;
// // Index register I[2]
// const unsigned int cm_int_core_i2 = 0x000954A0;
// // Index register I[3]
// const unsigned int cm_int_core_i3 = 0x000954B0;
// // Index register I[4]
// const unsigned int cm_int_core_i4 = 0x000954C0;
// // Index register I[5]
// const unsigned int cm_int_core_i5 = 0x000954D0;
// // Index register I[6]
// const unsigned int cm_int_core_i6 = 0x000954E0;
// // Index register I[7]
// const unsigned int cm_int_core_i7 = 0x000954F0;
// // Shift register S0
// const unsigned int cm_int_core_s0 = 0x00095500;
// // Shift register S1
// const unsigned int cm_int_core_s1 = 0x00095510;
// // Shift register S2
// const unsigned int cm_int_core_s2 = 0x00095520;
// // Shift register S3
// const unsigned int cm_int_core_s3 = 0x00095530;
// Program counter register PC
const unsigned int cm_int_core_pc = 0x00095540;
const unsigned int cm_program_counter = 0x00095540;
// // PM fetch counter register FC
// const unsigned int cm_int_core_fc = 0x00095550;
// // Stack pointer register SP
// const unsigned int cm_int_core_sp = 0x00095560;
// // Link register LR
// const unsigned int cm_int_core_lr = 0x00095570;
// // Loop start register LS
// const unsigned int cm_int_core_ls = 0x00095580;
// // Loop end register LE
// const unsigned int cm_int_core_le = 0x00095590;
// // Loop count register LC
// const unsigned int cm_int_core_lc = 0x000955A0;
// // Loop count register LCI
// const unsigned int cm_int_core_lci = 0x000955B0;
// // Control register CR1
// const unsigned int cm_int_core_cr1 = 0x000955C0;
// // Control register CR2
// const unsigned int cm_int_core_cr2 = 0x000955D0;
// // Control register CR3
// const unsigned int cm_int_core_cr3 = 0x000955E0;
// // Control register CR3
// const unsigned int cm_int_core_cr4 = 0x000955F0;
// // Status register SR1
// const unsigned int cm_int_core_sr1 = 0x00095600;
// // Status register SR2
// const unsigned int cm_int_core_sr2 = 0x00095610;
// // Status register SR3
// const unsigned int cm_int_core_sr3 = 0x00095620;
// // Status register SR3
// const unsigned int cm_int_core_sr4 = 0x00095630;

// Register definitions for MM
// ###################################
// DataMemory of 8 banks, 256-bit wide, 128KiB
const unsigned int mm_datamemory = 0x00000000;
// Define Watchpoint0 address and write strobe mask
const unsigned int mm_watchpoint0_address = 0x000A7100;
// Define Watchpoint0 access flags
const unsigned int mm_watchpoint0_access_flags = 0x000A7104;
// Define Watchpoint1 address and write strobe mask
const unsigned int mm_watchpoint1_address = 0x000A7108;
// Define Watchpoint1 access flags
const unsigned int mm_watchpoint1_access_flags = 0x000A710C;
// Define Watchpoint2 address and write strobe mask
const unsigned int mm_watchpoint2_address = 0x000A7110;
// Define Watchpoint2 access flags
const unsigned int mm_watchpoint2_access_flags = 0x000A7114;
// Spare register
const unsigned int mm_spare_reg = 0x000A7120;
// DMA BD0 0
const unsigned int mm_dma_bd0_0 = 0x000AC000;
// DMA BD0 1
const unsigned int mm_dma_bd0_1 = 0x000AC004;
// DMA BD0 2
const unsigned int mm_dma_bd0_2 = 0x000AC008;
// DMA BD0 3
const unsigned int mm_dma_bd0_3 = 0x000AC00C;
// DMA BD0 4
const unsigned int mm_dma_bd0_4 = 0x000AC010;
// DMA BD0 5
const unsigned int mm_dma_bd0_5 = 0x000AC014;
// DMA BD1 0
const unsigned int mm_dma_bd1_0 = 0x000AC020;
// DMA BD1 1
const unsigned int mm_dma_bd1_1 = 0x000AC024;
// DMA BD1 2
const unsigned int mm_dma_bd1_2 = 0x000AC028;
// DMA BD1 3
const unsigned int mm_dma_bd1_3 = 0x000AC02C;
// DMA BD1 4
const unsigned int mm_dma_bd1_4 = 0x000AC030;
// DMA BD1 5
const unsigned int mm_dma_bd1_5 = 0x000AC034;
// DMA BD2 0
const unsigned int mm_dma_bd2_0 = 0x000AC040;
// DMA BD2 1
const unsigned int mm_dma_bd2_1 = 0x000AC044;
// DMA BD2 2
const unsigned int mm_dma_bd2_2 = 0x000AC048;
// DMA BD2 3
const unsigned int mm_dma_bd2_3 = 0x000AC04C;
// DMA BD2 4
const unsigned int mm_dma_bd2_4 = 0x000AC050;
// DMA BD2 5
const unsigned int mm_dma_bd2_5 = 0x000AC054;
// DMA BD3 0
const unsigned int mm_dma_bd3_0 = 0x000AC060;
// DMA BD3 1
const unsigned int mm_dma_bd3_1 = 0x000AC064;
// DMA BD3 2
const unsigned int mm_dma_bd3_2 = 0x000AC068;
// DMA BD3 3
const unsigned int mm_dma_bd3_3 = 0x000AC06C;
// DMA BD3 4
const unsigned int mm_dma_bd3_4 = 0x000AC070;
// DMA BD3 5
const unsigned int mm_dma_bd3_5 = 0x000AC074;
// DMA BD4 0
const unsigned int mm_dma_bd4_0 = 0x000AC080;
// DMA BD4 1
const unsigned int mm_dma_bd4_1 = 0x000AC084;
// DMA BD4 2
const unsigned int mm_dma_bd4_2 = 0x000AC088;
// DMA BD4 3
const unsigned int mm_dma_bd4_3 = 0x000AC08C;
// DMA BD4 4
const unsigned int mm_dma_bd4_4 = 0x000AC090;
// DMA BD4 5
const unsigned int mm_dma_bd4_5 = 0x000AC094;
// DMA BD5 0
const unsigned int mm_dma_bd5_0 = 0x000AC0A0;
// DMA BD5 1
const unsigned int mm_dma_bd5_1 = 0x000AC0A4;
// DMA BD5 2
const unsigned int mm_dma_bd5_2 = 0x000AC0A8;
// DMA BD5 3
const unsigned int mm_dma_bd5_3 = 0x000AC0AC;
// DMA BD5 4
const unsigned int mm_dma_bd5_4 = 0x000AC0B0;
// DMA BD5 5
const unsigned int mm_dma_bd5_5 = 0x000AC0B4;
// DMA BD6 0
const unsigned int mm_dma_bd6_0 = 0x000AC0C0;
// DMA BD6 1
const unsigned int mm_dma_bd6_1 = 0x000AC0C4;
// DMA BD6 2
const unsigned int mm_dma_bd6_2 = 0x000AC0C8;
// DMA BD6 3
const unsigned int mm_dma_bd6_3 = 0x000AC0CC;
// DMA BD6 4
const unsigned int mm_dma_bd6_4 = 0x000AC0D0;
// DMA BD6 5
const unsigned int mm_dma_bd6_5 = 0x000AC0D4;
// DMA BD7 0
const unsigned int mm_dma_bd7_0 = 0x000AC0E0;
// DMA BD7 1
const unsigned int mm_dma_bd7_1 = 0x000AC0E4;
// DMA BD7 2
const unsigned int mm_dma_bd7_2 = 0x000AC0E8;
// DMA BD7 3
const unsigned int mm_dma_bd7_3 = 0x000AC0EC;
// DMA BD7 4
const unsigned int mm_dma_bd7_4 = 0x000AC0F0;
// DMA BD7 5
const unsigned int mm_dma_bd7_5 = 0x000AC0F4;
// DMA BD8 0
const unsigned int mm_dma_bd8_0 = 0x000AC100;
// DMA BD8 1
const unsigned int mm_dma_bd8_1 = 0x000AC104;
// DMA BD8 2
const unsigned int mm_dma_bd8_2 = 0x000AC108;
// DMA BD8 3
const unsigned int mm_dma_bd8_3 = 0x000AC10C;
// DMA BD8 4
const unsigned int mm_dma_bd8_4 = 0x000AC110;
// DMA BD8 5
const unsigned int mm_dma_bd8_5 = 0x000AC114;
// DMA BD9 0
const unsigned int mm_dma_bd9_0 = 0x000AC120;
// DMA BD9 1
const unsigned int mm_dma_bd9_1 = 0x000AC124;
// DMA BD9 2
const unsigned int mm_dma_bd9_2 = 0x000AC128;
// DMA BD9 3
const unsigned int mm_dma_bd9_3 = 0x000AC12C;
// DMA BD9 4
const unsigned int mm_dma_bd9_4 = 0x000AC130;
// DMA BD9 5
const unsigned int mm_dma_bd9_5 = 0x000AC134;
// DMA BD10 0
const unsigned int mm_dma_bd10_0 = 0x000AC140;
// DMA BD10 1
const unsigned int mm_dma_bd10_1 = 0x000AC144;
// DMA BD10 2
const unsigned int mm_dma_bd10_2 = 0x000AC148;
// DMA BD10 3
const unsigned int mm_dma_bd10_3 = 0x000AC14C;
// DMA BD10 4
const unsigned int mm_dma_bd10_4 = 0x000AC150;
// DMA BD10 5
const unsigned int mm_dma_bd10_5 = 0x000AC154;
// DMA BD11 0
const unsigned int mm_dma_bd11_0 = 0x000AC160;
// DMA BD11 1
const unsigned int mm_dma_bd11_1 = 0x000AC164;
// DMA BD11 2
const unsigned int mm_dma_bd11_2 = 0x000AC168;
// DMA BD11 3
const unsigned int mm_dma_bd11_3 = 0x000AC16C;
// DMA BD11 4
const unsigned int mm_dma_bd11_4 = 0x000AC170;
// DMA BD11 5
const unsigned int mm_dma_bd11_5 = 0x000AC174;
// DMA BD12 0
const unsigned int mm_dma_bd12_0 = 0x000AC180;
// DMA BD12 1
const unsigned int mm_dma_bd12_1 = 0x000AC184;
// DMA BD12 2
const unsigned int mm_dma_bd12_2 = 0x000AC188;
// DMA BD12 3
const unsigned int mm_dma_bd12_3 = 0x000AC18C;
// DMA BD12 4
const unsigned int mm_dma_bd12_4 = 0x000AC190;
// DMA BD12 5
const unsigned int mm_dma_bd12_5 = 0x000AC194;
// DMA BD13 0
const unsigned int mm_dma_bd13_0 = 0x000AC1A0;
// DMA BD13 1
const unsigned int mm_dma_bd13_1 = 0x000AC1A4;
// DMA BD13 2
const unsigned int mm_dma_bd13_2 = 0x000AC1A8;
// DMA BD13 3
const unsigned int mm_dma_bd13_3 = 0x000AC1AC;
// DMA BD13 4
const unsigned int mm_dma_bd13_4 = 0x000AC1B0;
// DMA BD13 5
const unsigned int mm_dma_bd13_5 = 0x000AC1B4;
// DMA BD14 0
const unsigned int mm_dma_bd14_0 = 0x000AC1C0;
// DMA BD14 1
const unsigned int mm_dma_bd14_1 = 0x000AC1C4;
// DMA BD14 2
const unsigned int mm_dma_bd14_2 = 0x000AC1C8;
// DMA BD14 3
const unsigned int mm_dma_bd14_3 = 0x000AC1CC;
// DMA BD14 4
const unsigned int mm_dma_bd14_4 = 0x000AC1D0;
// DMA BD14 5
const unsigned int mm_dma_bd14_5 = 0x000AC1D4;
// DMA BD15 0
const unsigned int mm_dma_bd15_0 = 0x000AC1E0;
// DMA BD15 1
const unsigned int mm_dma_bd15_1 = 0x000AC1E4;
// DMA BD15 2
const unsigned int mm_dma_bd15_2 = 0x000AC1E8;
// DMA BD15 3
const unsigned int mm_dma_bd15_3 = 0x000AC1EC;
// DMA BD15 4
const unsigned int mm_dma_bd15_4 = 0x000AC1F0;
// DMA BD15 5
const unsigned int mm_dma_bd15_5 = 0x000AC1F4;
// DMA Control Register S2MM Ch0
const unsigned int mm_dma_s2mm_0_ctrl = 0x000ACE00;
// DMA Control Register S2MM Ch0
const unsigned int mm_dma_s2mm_0_start_queue = 0x000ACE04;
// DMA Control Register S2MM Ch1
const unsigned int mm_dma_s2mm_1_ctrl = 0x000ACE08;
// DMA Control Register S2MM Ch1
const unsigned int mm_dma_s2mm_1_start_queue = 0x000ACE0C;
// DMA Control Register MM2S Ch0
const unsigned int mm_dma_mm2s_0_ctrl = 0x000ACE10;
// DMA Control Register MM2S Ch0
const unsigned int mm_dma_mm2s_0_start_queue = 0x000ACE14;
// DMA S2MM Status Register Ch0
const unsigned int mm_dma_s2mm_status_0 = 0x000ACF00;
// DMA S2MM Status Register Ch1
const unsigned int mm_dma_s2mm_status_1 = 0x000ACF04;
// DMA MM2S Status Register Ch0
// NOTE: there is no MM2S Ch1
const unsigned int mm_dma_mm2s_status_0 = 0x000ACF10;
// DMA S2MM Current Write Count Ch0
const unsigned int mm_dma_s2mm_current_write_count_0 = 0x000ACF20;
// DMA S2MM Current Write Count Ch1
const unsigned int mm_dma_s2mm_current_write_count_1 = 0x000ACF24;
// DMA S2MM FoT Count FIFO Pop Ch0
const unsigned int mm_dma_s2mm_fot_count_fifo_pop_0 = 0x000ACF30;
// DMA S2MM FoT Count FIFO Pop Ch1
const unsigned int mm_dma_s2mm_fot_count_fifo_pop_1 = 0x000ACF34;
// Value of lock 0
const unsigned int mm_lock0_value = 0x000AE000;
// Value of lock 1
const unsigned int mm_lock1_value = 0x000AE010;
// Value of lock 2
const unsigned int mm_lock2_value = 0x000AE020;
// Value of lock 3
const unsigned int mm_lock3_value = 0x000AE030;
// Value of lock 4
const unsigned int mm_lock4_value = 0x000AE040;
// Value of lock 5
const unsigned int mm_lock5_value = 0x000AE050;
// Value of lock 6
const unsigned int mm_lock6_value = 0x000AE060;
// Value of lock 7
const unsigned int mm_lock7_value = 0x000AE070;
// Value of lock 8
const unsigned int mm_lock8_value = 0x000AE080;
// Value of lock 9
const unsigned int mm_lock9_value = 0x000AE090;
// Value of lock 10
const unsigned int mm_lock10_value = 0x000AE0A0;
// Value of lock 11
const unsigned int mm_lock11_value = 0x000AE0B0;
// Value of lock 12
const unsigned int mm_lock12_value = 0x000AE0C0;
// Value of lock 13
const unsigned int mm_lock13_value = 0x000AE0D0;
// Value of lock 14
const unsigned int mm_lock14_value = 0x000AE0E0;
// Value of lock 15
const unsigned int mm_lock15_value = 0x000AE0F0;
// Select lock for lock event generation 0
const unsigned int mm_locks_event_selection_0 = 0x000AE100;
// Select lock for lock event generation 1
const unsigned int mm_locks_event_selection_1 = 0x000AE104;
// Select lock for lock event generation 2
const unsigned int mm_locks_event_selection_2 = 0x000AE108;
// Select lock for lock event generation 3
const unsigned int mm_locks_event_selection_3 = 0x000AE10C;
// Select lock for lock event generation 4
const unsigned int mm_locks_event_selection_4 = 0x000AE110;
// Select lock for lock event generation 5
const unsigned int mm_locks_event_selection_5 = 0x000AE114;
// Status bits for lock overflow, write to clear
const unsigned int mm_locks_overflow = 0x000AE120;
// Status bits for lock underflow, write to clear
const unsigned int mm_locks_underflow = 0x000AE130;
// Lock Request. 16kB address space: 0xB0000 - 0xB3FFC, Lock_Id [13:10], Acq/nRel (Acq=1, Rel=0) (9), Change_Value [8:2]
const unsigned int mm_lock_request = 0x000B0000;
// Inhibits check bits (parity or ECC) update to memory on writes (privileged). Writing to this register has no effect on devices without ECC.
const unsigned int mm_checkbit_error_generation = 0x000F0000;
// ECC Scrubbing Period. Writing to this register has no effect on devices without ECC. (privileged)
const unsigned int mm_ecc_scrubbing_period = 0x000F0010;
// ECC Failing Address. Writing to this register has no effect on devices without ECC. (privileged)
const unsigned int mm_ecc_failing_address = 0x000F0014;
// Parity Failing Address. Writing to this register has no effect on devices without ECC. (privileged)
const unsigned int mm_parity_failing_address = 0x000F0020;
// Control for memory (privileged)
const unsigned int mm_memory_control = 0x000F0030;

// Register definitions for MEM
// ###################################
// Performance Counters 1-0 Start and Stop Event
const unsigned int mem_performance_control0 = 0x00000000;
// Performance Counters 3-2 Start and Stop Event
const unsigned int mem_performance_control1 = 0x00000004;
// Performance Counters 5-4 Start and Stop Event
const unsigned int mem_performance_control2 = 0x00000008;
// Performance Counters 3-0 Reset Events
const unsigned int mem_performance_control3 = 0x0000000C;
// Performance Counters 5-4 Reset Events
const unsigned int mem_performance_control4 = 0x00000010;
// Performance Counter0
const unsigned int mem_performance_counter0 = 0x00000020;
// Performance Counter1
const unsigned int mem_performance_counter1 = 0x00000024;
// Performance Counter2
const unsigned int mem_performance_counter2 = 0x00000028;
// Performance Counter3
const unsigned int mem_performance_counter3 = 0x0000002C;
// Performance Counter4
const unsigned int mem_performance_counter4 = 0x00000030;
// Performance Counter5
const unsigned int mem_performance_counter5 = 0x00000034;
// Performance Counter0 Snapshot
const unsigned int mem_performance_counter0_snapshot = 0x00000040;
// Performance Counter1 Snapshot
const unsigned int mem_performance_counter1_snapshot = 0x00000044;
// Performance Counter2 Snapshot
const unsigned int mem_performance_counter2_snapshot = 0x00000048;
// Performance Counter3 Snapshot
const unsigned int mem_performance_counter3_snapshot = 0x0000004C;
// Performance Counter4 Snapshot
const unsigned int mem_performance_counter4_snapshot = 0x00000050;
// Performance Counter5 Snapshot
const unsigned int mem_performance_counter5_snapshot = 0x00000054;
// Performance Counter0 Event Value.
const unsigned int mem_performance_counter0_event_value = 0x00000060;
// Performance Counter1 Event Value.
const unsigned int mem_performance_counter1_event_value = 0x00000064;
// Performance Counter2 Event Value.
const unsigned int mem_performance_counter2_event_value = 0x00000068;
// Performance Counter3 Event Value.
const unsigned int mem_performance_counter3_event_value = 0x0000006C;
// Performance Counter4 Event Value.
const unsigned int mem_performance_counter4_event_value = 0x00000070;
// Performance Counter5 Event Value.
const unsigned int mem_performance_counter5_event_value = 0x00000074;
// Set performance counter snapshot load event for application A
const unsigned int mem_performance_counter_snapshots_load_event_a = 0x00000080;
// Generate an internal event in switch A
const unsigned int mem_event_generate_a = 0x00000090;
// Control of which Internal Event to Broadcast0 in switch A
const unsigned int mem_event_broadcast_a_0 = 0x000000A0;
// Control of which Internal Event to Broadcast1 in switch A
const unsigned int mem_event_broadcast_a_1 = 0x000000A4;
// Control of which Internal Event to Broadcast2 in switch A
const unsigned int mem_event_broadcast_a_2 = 0x000000A8;
// Control of which Internal Event to Broadcast3 in switch A
const unsigned int mem_event_broadcast_a_3 = 0x000000AC;
// Control of which Internal Event to Broadcast4 in switch A
const unsigned int mem_event_broadcast_a_4 = 0x000000B0;
// Control of which Internal Event to Broadcast5 in switch A
const unsigned int mem_event_broadcast_a_5 = 0x000000B4;
// Control of which Internal Event to Broadcast6 in switch A
const unsigned int mem_event_broadcast_a_6 = 0x000000B8;
// Control of which Internal Event to Broadcast7 in switch A
const unsigned int mem_event_broadcast_a_7 = 0x000000BC;
// Control of which Internal Event to Broadcast8 in switch A
const unsigned int mem_event_broadcast_a_8 = 0x000000C0;
// Control of which Internal Event to Broadcast9 in switch A
const unsigned int mem_event_broadcast_a_9 = 0x000000C4;
// Control of which Internal Event to Broadcast10 in switch A
const unsigned int mem_event_broadcast_a_10 = 0x000000C8;
// Control of which Internal Event to Broadcast11 in switch A
const unsigned int mem_event_broadcast_a_11 = 0x000000CC;
// Control of which Internal Event to Broadcast12 in switch A
const unsigned int mem_event_broadcast_a_12 = 0x000000D0;
// Control of which Internal Event to Broadcast13 in switch A
const unsigned int mem_event_broadcast_a_13 = 0x000000D4;
// Control of which Internal Event to Broadcast14 in switch A
const unsigned int mem_event_broadcast_a_14 = 0x000000D8;
// Control of which Internal Event to Broadcast15 in switch A
const unsigned int mem_event_broadcast_a_15 = 0x000000DC;
// Set block of broadcast signals to South in switch A
const unsigned int mem_event_broadcast_a_block_south_set = 0x000000E0;
// Clear block of broadcast signals to South in switch A
const unsigned int mem_event_broadcast_a_block_south_clr = 0x000000E4;
// Current value of block for broadcast signals to South in switch A
const unsigned int mem_event_broadcast_a_block_south_value = 0x000000E8;
// Set block of broadcast switch A signals to West in switch A
const unsigned int mem_event_broadcast_a_block_west_set = 0x000000EC;
// Clear block of broadcast switch A signals to West in switch A
const unsigned int mem_event_broadcast_a_block_west_clr = 0x000000F0;
// Current value of block for broadcast switch A signals to West in switch A
const unsigned int mem_event_broadcast_a_block_west_value = 0x000000F4;
// Set block of broadcast switch A signals to North in switch A
const unsigned int mem_event_broadcast_a_block_north_set = 0x000000F8;
// Clear block of broadcast switch A signals to North in switch A
const unsigned int mem_event_broadcast_a_block_north_clr = 0x000000FC;
// Current value of block for broadcast switch A signals to North in switch A
const unsigned int mem_event_broadcast_a_block_north_value = 0x00000100;
// Set block of broadcast switch A signals to East
const unsigned int mem_event_broadcast_a_block_east_set = 0x00000104;
// Clear block of broadcast switch A signals to East
const unsigned int mem_event_broadcast_a_block_east_clr = 0x00000108;
// Current value of block for broadcast switch A signals to East
const unsigned int mem_event_broadcast_a_block_east_value = 0x0000010C;
// Control of Trace A
const unsigned int mem_trace_a_control0 = 0x00000110;
// Control of Trace A: packet configuration
const unsigned int mem_trace_a_control1 = 0x00000114;
// Status of trace engine A
const unsigned int mem_trace_a_status = 0x00000118;
// Control of which Internal Event to Trace A
const unsigned int mem_trace_a_event0 = 0x00000120;
// Control of which Internal Event to Trace A
const unsigned int mem_trace_a_event1 = 0x00000124;
// Control of Internal Timer A
const unsigned int mem_timer_a_control = 0x00000130;
// Internal Timer A Event Value.
const unsigned int mem_timer_a_trig_event_low_value = 0x00000134;
// Internal Timer A Event Value.
const unsigned int mem_timer_a_trig_event_high_value = 0x00000138;
// Internal Timer A Low part Value.
const unsigned int mem_timer_a_low = 0x00000140;
// Internal Timer A High part Value.
const unsigned int mem_timer_a_high = 0x00000144;
// Define Watchpoint0 address and write strobe mask
const unsigned int mem_watchpoint0_address = 0x00000150;
// Define Watchpoint0 access flags
const unsigned int mem_watchpoint0_access_flags = 0x00000154;
// Define Watchpoint1 address and write strobe mask
const unsigned int mem_watchpoint1_address = 0x00000158;
// Define Watchpoint1 access flags
const unsigned int mem_watchpoint1_access_flags = 0x0000015C;
// Define Watchpoint2 address and write strobe mask
const unsigned int mem_watchpoint2_address = 0x00000160;
// Define Watchpoint2 access flags
const unsigned int mem_watchpoint2_access_flags = 0x00000164;
// Define Watchpoint3 address and write strobe mask
const unsigned int mem_watchpoint3_address = 0x00000168;
// Define Watchpoint3 access flags
const unsigned int mem_watchpoint3_access_flags = 0x0000016C;
// Internal event status register0 application A
const unsigned int mem_event_status_a_0 = 0x00000170;
// Internal event status register1 application A
const unsigned int mem_event_status_a_1 = 0x00000174;
// Internal event status register2 application A
const unsigned int mem_event_status_a_2 = 0x00000178;
// Internal event status register3 application A
const unsigned int mem_event_status_a_3 = 0x0000017C;
// Internal event status register4 application A
const unsigned int mem_event_status_a_4 = 0x00000180;
// Internal event status register5 application A
const unsigned int mem_event_status_a_5 = 0x00000184;
// Internal event status register6 application A
const unsigned int mem_event_status_a_6 = 0x00000188;
// Combo events input events A-D application A
const unsigned int mem_combo_event_inputs0 = 0x00000190;
// Combo events input events E-H application A
const unsigned int mem_combo_event_inputs1 = 0x00000194;
// Combo events control bits for combo 0-2 application A
const unsigned int mem_combo_event_control2 = 0x00000198;
// Combo events control bits for combo 4-6 application A
const unsigned int mem_combo_event_control3 = 0x0000019C;
// Configuration for edge detection events 0-1 application A
const unsigned int mem_edge_detection_event_control0 = 0x000001A0;
// Configuration for edge detection events 2-3 application A
const unsigned int mem_edge_detection_event_control1 = 0x000001A4;
// Configuration for edge detection events 4-5 application A
const unsigned int mem_edge_detection_event_control2 = 0x000001A8;
// Configuration for edge detection events 6-7 application A
const unsigned int mem_edge_detection_event_control3 = 0x000001AC;
// Event enable for Group 0 application A
const unsigned int mem_event_group_0_enable_a = 0x000001B0;
// Event enable for Watchpoint Group application A
const unsigned int mem_event_group_watchpoint_enable_a = 0x000001B4;
// Event enable for DMA Group application A
const unsigned int mem_event_group_dma_enable_a = 0x000001B8;
// Event enable for Lock Group application A
const unsigned int mem_event_group_lock_enable_a = 0x000001BC;
// Event enable for Stream Switch Group application A
const unsigned int mem_event_group_stream_switch_enable_a = 0x000001C0;
// Event enable for Memory Conflict Group application A
const unsigned int mem_event_group_memory_conflict_enable_a = 0x000001C4;
// Event enable for Error Group application A
const unsigned int mem_event_group_error_enable_a = 0x000001C8;
// Event enable for Broadcast Group application A
const unsigned int mem_event_group_broadcast_enable_a = 0x000001CC;
// Event enable for User Group application A
const unsigned int mem_event_group_user_event_enable_a = 0x000001D0;
// Spare register for application A
const unsigned int mem_spare_reg_a = 0x000001E0;
// DMA S2MM 0 BD0 0
const unsigned int mem_dma_s2mm_0_bd0_0 = 0x00008000;
// DMA S2MM 0 BD0 1
const unsigned int mem_dma_s2mm_0_bd0_1 = 0x00008004;
// DMA S2MM 0 BD0 2
const unsigned int mem_dma_s2mm_0_bd0_2 = 0x00008008;
// DMA S2MM 0 BD0 3
const unsigned int mem_dma_s2mm_0_bd0_3 = 0x0000800C;
// DMA S2MM 0 BD0 4
const unsigned int mem_dma_s2mm_0_bd0_4 = 0x00008010;
// DMA S2MM 0 BD0 5
const unsigned int mem_dma_s2mm_0_bd0_5 = 0x00008014;
// DMA S2MM 0 BD0 6
const unsigned int mem_dma_s2mm_0_bd0_6 = 0x00008018;
// DMA S2MM 0 BD0 7
const unsigned int mem_dma_s2mm_0_bd0_7 = 0x0000801C;
// DMA S2MM 0 BD0 8
const unsigned int mem_dma_s2mm_0_bd0_8 = 0x00008020;
// DMA S2MM 0 BD0 9
const unsigned int mem_dma_s2mm_0_bd0_9 = 0x00008024;
// DMA S2MM 0 BD0 10
const unsigned int mem_dma_s2mm_0_bd0_10 = 0x00008028;
// DMA S2MM 0 BD1 0
const unsigned int mem_dma_s2mm_0_bd1_0 = 0x00008030;
// DMA S2MM 0 BD1 1
const unsigned int mem_dma_s2mm_0_bd1_1 = 0x00008034;
// DMA S2MM 0 BD1 2
const unsigned int mem_dma_s2mm_0_bd1_2 = 0x00008038;
// DMA S2MM 0 BD1 3
const unsigned int mem_dma_s2mm_0_bd1_3 = 0x0000803C;
// DMA S2MM 0 BD1 4
const unsigned int mem_dma_s2mm_0_bd1_4 = 0x00008040;
// DMA S2MM 0 BD1 5
const unsigned int mem_dma_s2mm_0_bd1_5 = 0x00008044;
// DMA S2MM 0 BD1 6
const unsigned int mem_dma_s2mm_0_bd1_6 = 0x00008048;
// DMA S2MM 0 BD1 7
const unsigned int mem_dma_s2mm_0_bd1_7 = 0x0000804C;
// DMA S2MM 0 BD1 8
const unsigned int mem_dma_s2mm_0_bd1_8 = 0x00008050;
// DMA S2MM 0 BD1 9
const unsigned int mem_dma_s2mm_0_bd1_9 = 0x00008054;
// DMA S2MM 0 BD1 10
const unsigned int mem_dma_s2mm_0_bd1_10 = 0x00008058;
// DMA S2MM 0 BD2 0
const unsigned int mem_dma_s2mm_0_bd2_0 = 0x00008060;
// DMA S2MM 0 BD2 1
const unsigned int mem_dma_s2mm_0_bd2_1 = 0x00008064;
// DMA S2MM 0 BD2 2
const unsigned int mem_dma_s2mm_0_bd2_2 = 0x00008068;
// DMA S2MM 0 BD2 3
const unsigned int mem_dma_s2mm_0_bd2_3 = 0x0000806C;
// DMA S2MM 0 BD2 4
const unsigned int mem_dma_s2mm_0_bd2_4 = 0x00008070;
// DMA S2MM 0 BD2 5
const unsigned int mem_dma_s2mm_0_bd2_5 = 0x00008074;
// DMA S2MM 0 BD2 6
const unsigned int mem_dma_s2mm_0_bd2_6 = 0x00008078;
// DMA S2MM 0 BD2 7
const unsigned int mem_dma_s2mm_0_bd2_7 = 0x0000807C;
// DMA S2MM 0 BD2 8
const unsigned int mem_dma_s2mm_0_bd2_8 = 0x00008080;
// DMA S2MM 0 BD2 9
const unsigned int mem_dma_s2mm_0_bd2_9 = 0x00008084;
// DMA S2MM 0 BD2 10
const unsigned int mem_dma_s2mm_0_bd2_10 = 0x00008088;
// DMA S2MM 0 BD3 0
const unsigned int mem_dma_s2mm_0_bd3_0 = 0x00008090;
// DMA S2MM 0 BD3 1
const unsigned int mem_dma_s2mm_0_bd3_1 = 0x00008094;
// DMA S2MM 0 BD3 2
const unsigned int mem_dma_s2mm_0_bd3_2 = 0x00008098;
// DMA S2MM 0 BD3 3
const unsigned int mem_dma_s2mm_0_bd3_3 = 0x0000809C;
// DMA S2MM 0 BD3 4
const unsigned int mem_dma_s2mm_0_bd3_4 = 0x000080A0;
// DMA S2MM 0 BD3 5
const unsigned int mem_dma_s2mm_0_bd3_5 = 0x000080A4;
// DMA S2MM 0 BD3 6
const unsigned int mem_dma_s2mm_0_bd3_6 = 0x000080A8;
// DMA S2MM 0 BD3 7
const unsigned int mem_dma_s2mm_0_bd3_7 = 0x000080AC;
// DMA S2MM 0 BD3 8
const unsigned int mem_dma_s2mm_0_bd3_8 = 0x000080B0;
// DMA S2MM 0 BD3 9
const unsigned int mem_dma_s2mm_0_bd3_9 = 0x000080B4;
// DMA S2MM 0 BD3 10
const unsigned int mem_dma_s2mm_0_bd3_10 = 0x000080B8;
// DMA S2MM 0 BD4 0
const unsigned int mem_dma_s2mm_0_bd4_0 = 0x000080C0;
// DMA S2MM 0 BD4 1
const unsigned int mem_dma_s2mm_0_bd4_1 = 0x000080C4;
// DMA S2MM 0 BD4 2
const unsigned int mem_dma_s2mm_0_bd4_2 = 0x000080C8;
// DMA S2MM 0 BD4 3
const unsigned int mem_dma_s2mm_0_bd4_3 = 0x000080CC;
// DMA S2MM 0 BD4 4
const unsigned int mem_dma_s2mm_0_bd4_4 = 0x000080D0;
// DMA S2MM 0 BD4 5
const unsigned int mem_dma_s2mm_0_bd4_5 = 0x000080D4;
// DMA S2MM 0 BD4 6
const unsigned int mem_dma_s2mm_0_bd4_6 = 0x000080D8;
// DMA S2MM 0 BD4 7
const unsigned int mem_dma_s2mm_0_bd4_7 = 0x000080DC;
// DMA S2MM 0 BD4 8
const unsigned int mem_dma_s2mm_0_bd4_8 = 0x000080E0;
// DMA S2MM 0 BD4 9
const unsigned int mem_dma_s2mm_0_bd4_9 = 0x000080E4;
// DMA S2MM 0 BD4 10
const unsigned int mem_dma_s2mm_0_bd4_10 = 0x000080E8;
// DMA S2MM 0 BD5 0
const unsigned int mem_dma_s2mm_0_bd5_0 = 0x000080F0;
// DMA S2MM 0 BD5 1
const unsigned int mem_dma_s2mm_0_bd5_1 = 0x000080F4;
// DMA S2MM 0 BD5 2
const unsigned int mem_dma_s2mm_0_bd5_2 = 0x000080F8;
// DMA S2MM 0 BD5 3
const unsigned int mem_dma_s2mm_0_bd5_3 = 0x000080FC;
// DMA S2MM 0 BD5 4
const unsigned int mem_dma_s2mm_0_bd5_4 = 0x00008100;
// DMA S2MM 0 BD5 5
const unsigned int mem_dma_s2mm_0_bd5_5 = 0x00008104;
// DMA S2MM 0 BD5 6
const unsigned int mem_dma_s2mm_0_bd5_6 = 0x00008108;
// DMA S2MM 0 BD5 7
const unsigned int mem_dma_s2mm_0_bd5_7 = 0x0000810C;
// DMA S2MM 0 BD5 8
const unsigned int mem_dma_s2mm_0_bd5_8 = 0x00008110;
// DMA S2MM 0 BD5 9
const unsigned int mem_dma_s2mm_0_bd5_9 = 0x00008114;
// DMA S2MM 0 BD5 10
const unsigned int mem_dma_s2mm_0_bd5_10 = 0x00008118;
// DMA S2MM 0 BD6 0
const unsigned int mem_dma_s2mm_0_bd6_0 = 0x00008120;
// DMA S2MM 0 BD6 1
const unsigned int mem_dma_s2mm_0_bd6_1 = 0x00008124;
// DMA S2MM 0 BD6 2
const unsigned int mem_dma_s2mm_0_bd6_2 = 0x00008128;
// DMA S2MM 0 BD6 3
const unsigned int mem_dma_s2mm_0_bd6_3 = 0x0000812C;
// DMA S2MM 0 BD6 4
const unsigned int mem_dma_s2mm_0_bd6_4 = 0x00008130;
// DMA S2MM 0 BD6 5
const unsigned int mem_dma_s2mm_0_bd6_5 = 0x00008134;
// DMA S2MM 0 BD6 6
const unsigned int mem_dma_s2mm_0_bd6_6 = 0x00008138;
// DMA S2MM 0 BD6 7
const unsigned int mem_dma_s2mm_0_bd6_7 = 0x0000813C;
// DMA S2MM 0 BD6 8
const unsigned int mem_dma_s2mm_0_bd6_8 = 0x00008140;
// DMA S2MM 0 BD6 9
const unsigned int mem_dma_s2mm_0_bd6_9 = 0x00008144;
// DMA S2MM 0 BD6 10
const unsigned int mem_dma_s2mm_0_bd6_10 = 0x00008148;
// DMA S2MM 0 BD7 0
const unsigned int mem_dma_s2mm_0_bd7_0 = 0x00008150;
// DMA S2MM 0 BD7 1
const unsigned int mem_dma_s2mm_0_bd7_1 = 0x00008154;
// DMA S2MM 0 BD7 2
const unsigned int mem_dma_s2mm_0_bd7_2 = 0x00008158;
// DMA S2MM 0 BD7 3
const unsigned int mem_dma_s2mm_0_bd7_3 = 0x0000815C;
// DMA S2MM 0 BD7 4
const unsigned int mem_dma_s2mm_0_bd7_4 = 0x00008160;
// DMA S2MM 0 BD7 5
const unsigned int mem_dma_s2mm_0_bd7_5 = 0x00008164;
// DMA S2MM 0 BD7 6
const unsigned int mem_dma_s2mm_0_bd7_6 = 0x00008168;
// DMA S2MM 0 BD7 7
const unsigned int mem_dma_s2mm_0_bd7_7 = 0x0000816C;
// DMA S2MM 0 BD7 8
const unsigned int mem_dma_s2mm_0_bd7_8 = 0x00008170;
// DMA S2MM 0 BD7 9
const unsigned int mem_dma_s2mm_0_bd7_9 = 0x00008174;
// DMA S2MM 0 BD7 10
const unsigned int mem_dma_s2mm_0_bd7_10 = 0x00008178;
// DMA S2MM 0 BD8 0
const unsigned int mem_dma_s2mm_0_bd8_0 = 0x00008180;
// DMA S2MM 0 BD8 1
const unsigned int mem_dma_s2mm_0_bd8_1 = 0x00008184;
// DMA S2MM 0 BD8 2
const unsigned int mem_dma_s2mm_0_bd8_2 = 0x00008188;
// DMA S2MM 0 BD8 3
const unsigned int mem_dma_s2mm_0_bd8_3 = 0x0000818C;
// DMA S2MM 0 BD8 4
const unsigned int mem_dma_s2mm_0_bd8_4 = 0x00008190;
// DMA S2MM 0 BD8 5
const unsigned int mem_dma_s2mm_0_bd8_5 = 0x00008194;
// DMA S2MM 0 BD8 6
const unsigned int mem_dma_s2mm_0_bd8_6 = 0x00008198;
// DMA S2MM 0 BD8 7
const unsigned int mem_dma_s2mm_0_bd8_7 = 0x0000819C;
// DMA S2MM 0 BD8 8
const unsigned int mem_dma_s2mm_0_bd8_8 = 0x000081A0;
// DMA S2MM 0 BD8 9
const unsigned int mem_dma_s2mm_0_bd8_9 = 0x000081A4;
// DMA S2MM 0 BD8 10
const unsigned int mem_dma_s2mm_0_bd8_10 = 0x000081A8;
// DMA S2MM 0 BD9 0
const unsigned int mem_dma_s2mm_0_bd9_0 = 0x000081B0;
// DMA S2MM 0 BD9 1
const unsigned int mem_dma_s2mm_0_bd9_1 = 0x000081B4;
// DMA S2MM 0 BD9 2
const unsigned int mem_dma_s2mm_0_bd9_2 = 0x000081B8;
// DMA S2MM 0 BD9 3
const unsigned int mem_dma_s2mm_0_bd9_3 = 0x000081BC;
// DMA S2MM 0 BD9 4
const unsigned int mem_dma_s2mm_0_bd9_4 = 0x000081C0;
// DMA S2MM 0 BD9 5
const unsigned int mem_dma_s2mm_0_bd9_5 = 0x000081C4;
// DMA S2MM 0 BD9 6
const unsigned int mem_dma_s2mm_0_bd9_6 = 0x000081C8;
// DMA S2MM 0 BD9 7
const unsigned int mem_dma_s2mm_0_bd9_7 = 0x000081CC;
// DMA S2MM 0 BD9 8
const unsigned int mem_dma_s2mm_0_bd9_8 = 0x000081D0;
// DMA S2MM 0 BD9 9
const unsigned int mem_dma_s2mm_0_bd9_9 = 0x000081D4;
// DMA S2MM 0 BD9 10
const unsigned int mem_dma_s2mm_0_bd9_10 = 0x000081D8;
// DMA S2MM 0 BD10 0
const unsigned int mem_dma_s2mm_0_bd10_0 = 0x000081E0;
// DMA S2MM 0 BD10 1
const unsigned int mem_dma_s2mm_0_bd10_1 = 0x000081E4;
// DMA S2MM 0 BD10 2
const unsigned int mem_dma_s2mm_0_bd10_2 = 0x000081E8;
// DMA S2MM 0 BD10 3
const unsigned int mem_dma_s2mm_0_bd10_3 = 0x000081EC;
// DMA S2MM 0 BD10 4
const unsigned int mem_dma_s2mm_0_bd10_4 = 0x000081F0;
// DMA S2MM 0 BD10 5
const unsigned int mem_dma_s2mm_0_bd10_5 = 0x000081F4;
// DMA S2MM 0 BD10 6
const unsigned int mem_dma_s2mm_0_bd10_6 = 0x000081F8;
// DMA S2MM 0 BD10 7
const unsigned int mem_dma_s2mm_0_bd10_7 = 0x000081FC;
// DMA S2MM 0 BD10 8
const unsigned int mem_dma_s2mm_0_bd10_8 = 0x00008200;
// DMA S2MM 0 BD10 9
const unsigned int mem_dma_s2mm_0_bd10_9 = 0x00008204;
// DMA S2MM 0 BD10 10
const unsigned int mem_dma_s2mm_0_bd10_10 = 0x00008208;
// DMA S2MM 0 BD11 0
const unsigned int mem_dma_s2mm_0_bd11_0 = 0x00008210;
// DMA S2MM 0 BD11 1
const unsigned int mem_dma_s2mm_0_bd11_1 = 0x00008214;
// DMA S2MM 0 BD11 2
const unsigned int mem_dma_s2mm_0_bd11_2 = 0x00008218;
// DMA S2MM 0 BD11 3
const unsigned int mem_dma_s2mm_0_bd11_3 = 0x0000821C;
// DMA S2MM 0 BD11 4
const unsigned int mem_dma_s2mm_0_bd11_4 = 0x00008220;
// DMA S2MM 0 BD11 5
const unsigned int mem_dma_s2mm_0_bd11_5 = 0x00008224;
// DMA S2MM 0 BD11 6
const unsigned int mem_dma_s2mm_0_bd11_6 = 0x00008228;
// DMA S2MM 0 BD11 7
const unsigned int mem_dma_s2mm_0_bd11_7 = 0x0000822C;
// DMA S2MM 0 BD11 8
const unsigned int mem_dma_s2mm_0_bd11_8 = 0x00008230;
// DMA S2MM 0 BD11 9
const unsigned int mem_dma_s2mm_0_bd11_9 = 0x00008234;
// DMA S2MM 0 BD11 10
const unsigned int mem_dma_s2mm_0_bd11_10 = 0x00008238;
// DMA S2MM 0 BD12 0
const unsigned int mem_dma_s2mm_0_bd12_0 = 0x00008240;
// DMA S2MM 0 BD12 1
const unsigned int mem_dma_s2mm_0_bd12_1 = 0x00008244;
// DMA S2MM 0 BD12 2
const unsigned int mem_dma_s2mm_0_bd12_2 = 0x00008248;
// DMA S2MM 0 BD12 3
const unsigned int mem_dma_s2mm_0_bd12_3 = 0x0000824C;
// DMA S2MM 0 BD12 4
const unsigned int mem_dma_s2mm_0_bd12_4 = 0x00008250;
// DMA S2MM 0 BD12 5
const unsigned int mem_dma_s2mm_0_bd12_5 = 0x00008254;
// DMA S2MM 0 BD12 6
const unsigned int mem_dma_s2mm_0_bd12_6 = 0x00008258;
// DMA S2MM 0 BD12 7
const unsigned int mem_dma_s2mm_0_bd12_7 = 0x0000825C;
// DMA S2MM 0 BD12 8
const unsigned int mem_dma_s2mm_0_bd12_8 = 0x00008260;
// DMA S2MM 0 BD12 9
const unsigned int mem_dma_s2mm_0_bd12_9 = 0x00008264;
// DMA S2MM 0 BD12 10
const unsigned int mem_dma_s2mm_0_bd12_10 = 0x00008268;
// DMA S2MM 0 BD13 0
const unsigned int mem_dma_s2mm_0_bd13_0 = 0x00008270;
// DMA S2MM 0 BD13 1
const unsigned int mem_dma_s2mm_0_bd13_1 = 0x00008274;
// DMA S2MM 0 BD13 2
const unsigned int mem_dma_s2mm_0_bd13_2 = 0x00008278;
// DMA S2MM 0 BD13 3
const unsigned int mem_dma_s2mm_0_bd13_3 = 0x0000827C;
// DMA S2MM 0 BD13 4
const unsigned int mem_dma_s2mm_0_bd13_4 = 0x00008280;
// DMA S2MM 0 BD13 5
const unsigned int mem_dma_s2mm_0_bd13_5 = 0x00008284;
// DMA S2MM 0 BD13 6
const unsigned int mem_dma_s2mm_0_bd13_6 = 0x00008288;
// DMA S2MM 0 BD13 7
const unsigned int mem_dma_s2mm_0_bd13_7 = 0x0000828C;
// DMA S2MM 0 BD13 8
const unsigned int mem_dma_s2mm_0_bd13_8 = 0x00008290;
// DMA S2MM 0 BD13 9
const unsigned int mem_dma_s2mm_0_bd13_9 = 0x00008294;
// DMA S2MM 0 BD13 10
const unsigned int mem_dma_s2mm_0_bd13_10 = 0x00008298;
// DMA S2MM 0 BD14 0
const unsigned int mem_dma_s2mm_0_bd14_0 = 0x000082A0;
// DMA S2MM 0 BD14 1
const unsigned int mem_dma_s2mm_0_bd14_1 = 0x000082A4;
// DMA S2MM 0 BD14 2
const unsigned int mem_dma_s2mm_0_bd14_2 = 0x000082A8;
// DMA S2MM 0 BD14 3
const unsigned int mem_dma_s2mm_0_bd14_3 = 0x000082AC;
// DMA S2MM 0 BD14 4
const unsigned int mem_dma_s2mm_0_bd14_4 = 0x000082B0;
// DMA S2MM 0 BD14 5
const unsigned int mem_dma_s2mm_0_bd14_5 = 0x000082B4;
// DMA S2MM 0 BD14 6
const unsigned int mem_dma_s2mm_0_bd14_6 = 0x000082B8;
// DMA S2MM 0 BD14 7
const unsigned int mem_dma_s2mm_0_bd14_7 = 0x000082BC;
// DMA S2MM 0 BD14 8
const unsigned int mem_dma_s2mm_0_bd14_8 = 0x000082C0;
// DMA S2MM 0 BD14 9
const unsigned int mem_dma_s2mm_0_bd14_9 = 0x000082C4;
// DMA S2MM 0 BD14 10
const unsigned int mem_dma_s2mm_0_bd14_10 = 0x000082C8;
// DMA S2MM 0 BD15 0
const unsigned int mem_dma_s2mm_0_bd15_0 = 0x000082D0;
// DMA S2MM 0 BD15 1
const unsigned int mem_dma_s2mm_0_bd15_1 = 0x000082D4;
// DMA S2MM 0 BD15 2
const unsigned int mem_dma_s2mm_0_bd15_2 = 0x000082D8;
// DMA S2MM 0 BD15 3
const unsigned int mem_dma_s2mm_0_bd15_3 = 0x000082DC;
// DMA S2MM 0 BD15 4
const unsigned int mem_dma_s2mm_0_bd15_4 = 0x000082E0;
// DMA S2MM 0 BD15 5
const unsigned int mem_dma_s2mm_0_bd15_5 = 0x000082E4;
// DMA S2MM 0 BD15 6
const unsigned int mem_dma_s2mm_0_bd15_6 = 0x000082E8;
// DMA S2MM 0 BD15 7
const unsigned int mem_dma_s2mm_0_bd15_7 = 0x000082EC;
// DMA S2MM 0 BD15 8
const unsigned int mem_dma_s2mm_0_bd15_8 = 0x000082F0;
// DMA S2MM 0 BD15 9
const unsigned int mem_dma_s2mm_0_bd15_9 = 0x000082F4;
// DMA S2MM 0 BD15 10
const unsigned int mem_dma_s2mm_0_bd15_10 = 0x000082F8;
// DMA S2MM 1 BD0 0
const unsigned int mem_dma_s2mm_1_bd0_0 = 0x00008300;
// DMA S2MM 1 BD0 1
const unsigned int mem_dma_s2mm_1_bd0_1 = 0x00008304;
// DMA S2MM 1 BD0 2
const unsigned int mem_dma_s2mm_1_bd0_2 = 0x00008308;
// DMA S2MM 1 BD0 3
const unsigned int mem_dma_s2mm_1_bd0_3 = 0x0000830C;
// DMA S2MM 1 BD0 4
const unsigned int mem_dma_s2mm_1_bd0_4 = 0x00008310;
// DMA S2MM 1 BD0 5
const unsigned int mem_dma_s2mm_1_bd0_5 = 0x00008314;
// DMA S2MM 1 BD0 6
const unsigned int mem_dma_s2mm_1_bd0_6 = 0x00008318;
// DMA S2MM 1 BD0 7
const unsigned int mem_dma_s2mm_1_bd0_7 = 0x0000831C;
// DMA S2MM 1 BD0 8
const unsigned int mem_dma_s2mm_1_bd0_8 = 0x00008320;
// DMA S2MM 1 BD0 9
const unsigned int mem_dma_s2mm_1_bd0_9 = 0x00008324;
// DMA S2MM 1 BD0 10
const unsigned int mem_dma_s2mm_1_bd0_10 = 0x00008328;
// DMA S2MM 1 BD1 0
const unsigned int mem_dma_s2mm_1_bd1_0 = 0x00008330;
// DMA S2MM 1 BD1 1
const unsigned int mem_dma_s2mm_1_bd1_1 = 0x00008334;
// DMA S2MM 1 BD1 2
const unsigned int mem_dma_s2mm_1_bd1_2 = 0x00008338;
// DMA S2MM 1 BD1 3
const unsigned int mem_dma_s2mm_1_bd1_3 = 0x0000833C;
// DMA S2MM 1 BD1 4
const unsigned int mem_dma_s2mm_1_bd1_4 = 0x00008340;
// DMA S2MM 1 BD1 5
const unsigned int mem_dma_s2mm_1_bd1_5 = 0x00008344;
// DMA S2MM 1 BD1 6
const unsigned int mem_dma_s2mm_1_bd1_6 = 0x00008348;
// DMA S2MM 1 BD1 7
const unsigned int mem_dma_s2mm_1_bd1_7 = 0x0000834C;
// DMA S2MM 1 BD1 8
const unsigned int mem_dma_s2mm_1_bd1_8 = 0x00008350;
// DMA S2MM 1 BD1 9
const unsigned int mem_dma_s2mm_1_bd1_9 = 0x00008354;
// DMA S2MM 1 BD1 10
const unsigned int mem_dma_s2mm_1_bd1_10 = 0x00008358;
// DMA S2MM 1 BD2 0
const unsigned int mem_dma_s2mm_1_bd2_0 = 0x00008360;
// DMA S2MM 1 BD2 1
const unsigned int mem_dma_s2mm_1_bd2_1 = 0x00008364;
// DMA S2MM 1 BD2 2
const unsigned int mem_dma_s2mm_1_bd2_2 = 0x00008368;
// DMA S2MM 1 BD2 3
const unsigned int mem_dma_s2mm_1_bd2_3 = 0x0000836C;
// DMA S2MM 1 BD2 4
const unsigned int mem_dma_s2mm_1_bd2_4 = 0x00008370;
// DMA S2MM 1 BD2 5
const unsigned int mem_dma_s2mm_1_bd2_5 = 0x00008374;
// DMA S2MM 1 BD2 6
const unsigned int mem_dma_s2mm_1_bd2_6 = 0x00008378;
// DMA S2MM 1 BD2 7
const unsigned int mem_dma_s2mm_1_bd2_7 = 0x0000837C;
// DMA S2MM 1 BD2 8
const unsigned int mem_dma_s2mm_1_bd2_8 = 0x00008380;
// DMA S2MM 1 BD2 9
const unsigned int mem_dma_s2mm_1_bd2_9 = 0x00008384;
// DMA S2MM 1 BD2 10
const unsigned int mem_dma_s2mm_1_bd2_10 = 0x00008388;
// DMA S2MM 1 BD3 0
const unsigned int mem_dma_s2mm_1_bd3_0 = 0x00008390;
// DMA S2MM 1 BD3 1
const unsigned int mem_dma_s2mm_1_bd3_1 = 0x00008394;
// DMA S2MM 1 BD3 2
const unsigned int mem_dma_s2mm_1_bd3_2 = 0x00008398;
// DMA S2MM 1 BD3 3
const unsigned int mem_dma_s2mm_1_bd3_3 = 0x0000839C;
// DMA S2MM 1 BD3 4
const unsigned int mem_dma_s2mm_1_bd3_4 = 0x000083A0;
// DMA S2MM 1 BD3 5
const unsigned int mem_dma_s2mm_1_bd3_5 = 0x000083A4;
// DMA S2MM 1 BD3 6
const unsigned int mem_dma_s2mm_1_bd3_6 = 0x000083A8;
// DMA S2MM 1 BD3 7
const unsigned int mem_dma_s2mm_1_bd3_7 = 0x000083AC;
// DMA S2MM 1 BD3 8
const unsigned int mem_dma_s2mm_1_bd3_8 = 0x000083B0;
// DMA S2MM 1 BD3 9
const unsigned int mem_dma_s2mm_1_bd3_9 = 0x000083B4;
// DMA S2MM 1 BD3 10
const unsigned int mem_dma_s2mm_1_bd3_10 = 0x000083B8;
// DMA S2MM 1 BD4 0
const unsigned int mem_dma_s2mm_1_bd4_0 = 0x000083C0;
// DMA S2MM 1 BD4 1
const unsigned int mem_dma_s2mm_1_bd4_1 = 0x000083C4;
// DMA S2MM 1 BD4 2
const unsigned int mem_dma_s2mm_1_bd4_2 = 0x000083C8;
// DMA S2MM 1 BD4 3
const unsigned int mem_dma_s2mm_1_bd4_3 = 0x000083CC;
// DMA S2MM 1 BD4 4
const unsigned int mem_dma_s2mm_1_bd4_4 = 0x000083D0;
// DMA S2MM 1 BD4 5
const unsigned int mem_dma_s2mm_1_bd4_5 = 0x000083D4;
// DMA S2MM 1 BD4 6
const unsigned int mem_dma_s2mm_1_bd4_6 = 0x000083D8;
// DMA S2MM 1 BD4 7
const unsigned int mem_dma_s2mm_1_bd4_7 = 0x000083DC;
// DMA S2MM 1 BD4 8
const unsigned int mem_dma_s2mm_1_bd4_8 = 0x000083E0;
// DMA S2MM 1 BD4 9
const unsigned int mem_dma_s2mm_1_bd4_9 = 0x000083E4;
// DMA S2MM 1 BD4 10
const unsigned int mem_dma_s2mm_1_bd4_10 = 0x000083E8;
// DMA S2MM 1 BD5 0
const unsigned int mem_dma_s2mm_1_bd5_0 = 0x000083F0;
// DMA S2MM 1 BD5 1
const unsigned int mem_dma_s2mm_1_bd5_1 = 0x000083F4;
// DMA S2MM 1 BD5 2
const unsigned int mem_dma_s2mm_1_bd5_2 = 0x000083F8;
// DMA S2MM 1 BD5 3
const unsigned int mem_dma_s2mm_1_bd5_3 = 0x000083FC;
// DMA S2MM 1 BD5 4
const unsigned int mem_dma_s2mm_1_bd5_4 = 0x00008400;
// DMA S2MM 1 BD5 5
const unsigned int mem_dma_s2mm_1_bd5_5 = 0x00008404;
// DMA S2MM 1 BD5 6
const unsigned int mem_dma_s2mm_1_bd5_6 = 0x00008408;
// DMA S2MM 1 BD5 7
const unsigned int mem_dma_s2mm_1_bd5_7 = 0x0000840C;
// DMA S2MM 1 BD5 8
const unsigned int mem_dma_s2mm_1_bd5_8 = 0x00008410;
// DMA S2MM 1 BD5 9
const unsigned int mem_dma_s2mm_1_bd5_9 = 0x00008414;
// DMA S2MM 1 BD5 10
const unsigned int mem_dma_s2mm_1_bd5_10 = 0x00008418;
// DMA S2MM 1 BD6 0
const unsigned int mem_dma_s2mm_1_bd6_0 = 0x00008420;
// DMA S2MM 1 BD6 1
const unsigned int mem_dma_s2mm_1_bd6_1 = 0x00008424;
// DMA S2MM 1 BD6 2
const unsigned int mem_dma_s2mm_1_bd6_2 = 0x00008428;
// DMA S2MM 1 BD6 3
const unsigned int mem_dma_s2mm_1_bd6_3 = 0x0000842C;
// DMA S2MM 1 BD6 4
const unsigned int mem_dma_s2mm_1_bd6_4 = 0x00008430;
// DMA S2MM 1 BD6 5
const unsigned int mem_dma_s2mm_1_bd6_5 = 0x00008434;
// DMA S2MM 1 BD6 6
const unsigned int mem_dma_s2mm_1_bd6_6 = 0x00008438;
// DMA S2MM 1 BD6 7
const unsigned int mem_dma_s2mm_1_bd6_7 = 0x0000843C;
// DMA S2MM 1 BD6 8
const unsigned int mem_dma_s2mm_1_bd6_8 = 0x00008440;
// DMA S2MM 1 BD6 9
const unsigned int mem_dma_s2mm_1_bd6_9 = 0x00008444;
// DMA S2MM 1 BD6 10
const unsigned int mem_dma_s2mm_1_bd6_10 = 0x00008448;
// DMA S2MM 1 BD7 0
const unsigned int mem_dma_s2mm_1_bd7_0 = 0x00008450;
// DMA S2MM 1 BD7 1
const unsigned int mem_dma_s2mm_1_bd7_1 = 0x00008454;
// DMA S2MM 1 BD7 2
const unsigned int mem_dma_s2mm_1_bd7_2 = 0x00008458;
// DMA S2MM 1 BD7 3
const unsigned int mem_dma_s2mm_1_bd7_3 = 0x0000845C;
// DMA S2MM 1 BD7 4
const unsigned int mem_dma_s2mm_1_bd7_4 = 0x00008460;
// DMA S2MM 1 BD7 5
const unsigned int mem_dma_s2mm_1_bd7_5 = 0x00008464;
// DMA S2MM 1 BD7 6
const unsigned int mem_dma_s2mm_1_bd7_6 = 0x00008468;
// DMA S2MM 1 BD7 7
const unsigned int mem_dma_s2mm_1_bd7_7 = 0x0000846C;
// DMA S2MM 1 BD7 8
const unsigned int mem_dma_s2mm_1_bd7_8 = 0x00008470;
// DMA S2MM 1 BD7 9
const unsigned int mem_dma_s2mm_1_bd7_9 = 0x00008474;
// DMA S2MM 1 BD7 10
const unsigned int mem_dma_s2mm_1_bd7_10 = 0x00008478;
// DMA S2MM 1 BD8 0
const unsigned int mem_dma_s2mm_1_bd8_0 = 0x00008480;
// DMA S2MM 1 BD8 1
const unsigned int mem_dma_s2mm_1_bd8_1 = 0x00008484;
// DMA S2MM 1 BD8 2
const unsigned int mem_dma_s2mm_1_bd8_2 = 0x00008488;
// DMA S2MM 1 BD8 3
const unsigned int mem_dma_s2mm_1_bd8_3 = 0x0000848C;
// DMA S2MM 1 BD8 4
const unsigned int mem_dma_s2mm_1_bd8_4 = 0x00008490;
// DMA S2MM 1 BD8 5
const unsigned int mem_dma_s2mm_1_bd8_5 = 0x00008494;
// DMA S2MM 1 BD8 6
const unsigned int mem_dma_s2mm_1_bd8_6 = 0x00008498;
// DMA S2MM 1 BD8 7
const unsigned int mem_dma_s2mm_1_bd8_7 = 0x0000849C;
// DMA S2MM 1 BD8 8
const unsigned int mem_dma_s2mm_1_bd8_8 = 0x000084A0;
// DMA S2MM 1 BD8 9
const unsigned int mem_dma_s2mm_1_bd8_9 = 0x000084A4;
// DMA S2MM 1 BD8 10
const unsigned int mem_dma_s2mm_1_bd8_10 = 0x000084A8;
// DMA S2MM 1 BD9 0
const unsigned int mem_dma_s2mm_1_bd9_0 = 0x000084B0;
// DMA S2MM 1 BD9 1
const unsigned int mem_dma_s2mm_1_bd9_1 = 0x000084B4;
// DMA S2MM 1 BD9 2
const unsigned int mem_dma_s2mm_1_bd9_2 = 0x000084B8;
// DMA S2MM 1 BD9 3
const unsigned int mem_dma_s2mm_1_bd9_3 = 0x000084BC;
// DMA S2MM 1 BD9 4
const unsigned int mem_dma_s2mm_1_bd9_4 = 0x000084C0;
// DMA S2MM 1 BD9 5
const unsigned int mem_dma_s2mm_1_bd9_5 = 0x000084C4;
// DMA S2MM 1 BD9 6
const unsigned int mem_dma_s2mm_1_bd9_6 = 0x000084C8;
// DMA S2MM 1 BD9 7
const unsigned int mem_dma_s2mm_1_bd9_7 = 0x000084CC;
// DMA S2MM 1 BD9 8
const unsigned int mem_dma_s2mm_1_bd9_8 = 0x000084D0;
// DMA S2MM 1 BD9 9
const unsigned int mem_dma_s2mm_1_bd9_9 = 0x000084D4;
// DMA S2MM 1 BD9 10
const unsigned int mem_dma_s2mm_1_bd9_10 = 0x000084D8;
// DMA S2MM 1 BD10 0
const unsigned int mem_dma_s2mm_1_bd10_0 = 0x000084E0;
// DMA S2MM 1 BD10 1
const unsigned int mem_dma_s2mm_1_bd10_1 = 0x000084E4;
// DMA S2MM 1 BD10 2
const unsigned int mem_dma_s2mm_1_bd10_2 = 0x000084E8;
// DMA S2MM 1 BD10 3
const unsigned int mem_dma_s2mm_1_bd10_3 = 0x000084EC;
// DMA S2MM 1 BD10 4
const unsigned int mem_dma_s2mm_1_bd10_4 = 0x000084F0;
// DMA S2MM 1 BD10 5
const unsigned int mem_dma_s2mm_1_bd10_5 = 0x000084F4;
// DMA S2MM 1 BD10 6
const unsigned int mem_dma_s2mm_1_bd10_6 = 0x000084F8;
// DMA S2MM 1 BD10 7
const unsigned int mem_dma_s2mm_1_bd10_7 = 0x000084FC;
// DMA S2MM 1 BD10 8
const unsigned int mem_dma_s2mm_1_bd10_8 = 0x00008500;
// DMA S2MM 1 BD10 9
const unsigned int mem_dma_s2mm_1_bd10_9 = 0x00008504;
// DMA S2MM 1 BD10 10
const unsigned int mem_dma_s2mm_1_bd10_10 = 0x00008508;
// DMA S2MM 1 BD11 0
const unsigned int mem_dma_s2mm_1_bd11_0 = 0x00008510;
// DMA S2MM 1 BD11 1
const unsigned int mem_dma_s2mm_1_bd11_1 = 0x00008514;
// DMA S2MM 1 BD11 2
const unsigned int mem_dma_s2mm_1_bd11_2 = 0x00008518;
// DMA S2MM 1 BD11 3
const unsigned int mem_dma_s2mm_1_bd11_3 = 0x0000851C;
// DMA S2MM 1 BD11 4
const unsigned int mem_dma_s2mm_1_bd11_4 = 0x00008520;
// DMA S2MM 1 BD11 5
const unsigned int mem_dma_s2mm_1_bd11_5 = 0x00008524;
// DMA S2MM 1 BD11 6
const unsigned int mem_dma_s2mm_1_bd11_6 = 0x00008528;
// DMA S2MM 1 BD11 7
const unsigned int mem_dma_s2mm_1_bd11_7 = 0x0000852C;
// DMA S2MM 1 BD11 8
const unsigned int mem_dma_s2mm_1_bd11_8 = 0x00008530;
// DMA S2MM 1 BD11 9
const unsigned int mem_dma_s2mm_1_bd11_9 = 0x00008534;
// DMA S2MM 1 BD11 10
const unsigned int mem_dma_s2mm_1_bd11_10 = 0x00008538;
// DMA S2MM 1 BD12 0
const unsigned int mem_dma_s2mm_1_bd12_0 = 0x00008540;
// DMA S2MM 1 BD12 1
const unsigned int mem_dma_s2mm_1_bd12_1 = 0x00008544;
// DMA S2MM 1 BD12 2
const unsigned int mem_dma_s2mm_1_bd12_2 = 0x00008548;
// DMA S2MM 1 BD12 3
const unsigned int mem_dma_s2mm_1_bd12_3 = 0x0000854C;
// DMA S2MM 1 BD12 4
const unsigned int mem_dma_s2mm_1_bd12_4 = 0x00008550;
// DMA S2MM 1 BD12 5
const unsigned int mem_dma_s2mm_1_bd12_5 = 0x00008554;
// DMA S2MM 1 BD12 6
const unsigned int mem_dma_s2mm_1_bd12_6 = 0x00008558;
// DMA S2MM 1 BD12 7
const unsigned int mem_dma_s2mm_1_bd12_7 = 0x0000855C;
// DMA S2MM 1 BD12 8
const unsigned int mem_dma_s2mm_1_bd12_8 = 0x00008560;
// DMA S2MM 1 BD12 9
const unsigned int mem_dma_s2mm_1_bd12_9 = 0x00008564;
// DMA S2MM 1 BD12 10
const unsigned int mem_dma_s2mm_1_bd12_10 = 0x00008568;
// DMA S2MM 1 BD13 0
const unsigned int mem_dma_s2mm_1_bd13_0 = 0x00008570;
// DMA S2MM 1 BD13 1
const unsigned int mem_dma_s2mm_1_bd13_1 = 0x00008574;
// DMA S2MM 1 BD13 2
const unsigned int mem_dma_s2mm_1_bd13_2 = 0x00008578;
// DMA S2MM 1 BD13 3
const unsigned int mem_dma_s2mm_1_bd13_3 = 0x0000857C;
// DMA S2MM 1 BD13 4
const unsigned int mem_dma_s2mm_1_bd13_4 = 0x00008580;
// DMA S2MM 1 BD13 5
const unsigned int mem_dma_s2mm_1_bd13_5 = 0x00008584;
// DMA S2MM 1 BD13 6
const unsigned int mem_dma_s2mm_1_bd13_6 = 0x00008588;
// DMA S2MM 1 BD13 7
const unsigned int mem_dma_s2mm_1_bd13_7 = 0x0000858C;
// DMA S2MM 1 BD13 8
const unsigned int mem_dma_s2mm_1_bd13_8 = 0x00008590;
// DMA S2MM 1 BD13 9
const unsigned int mem_dma_s2mm_1_bd13_9 = 0x00008594;
// DMA S2MM 1 BD13 10
const unsigned int mem_dma_s2mm_1_bd13_10 = 0x00008598;
// DMA S2MM 1 BD14 0
const unsigned int mem_dma_s2mm_1_bd14_0 = 0x000085A0;
// DMA S2MM 1 BD14 1
const unsigned int mem_dma_s2mm_1_bd14_1 = 0x000085A4;
// DMA S2MM 1 BD14 2
const unsigned int mem_dma_s2mm_1_bd14_2 = 0x000085A8;
// DMA S2MM 1 BD14 3
const unsigned int mem_dma_s2mm_1_bd14_3 = 0x000085AC;
// DMA S2MM 1 BD14 4
const unsigned int mem_dma_s2mm_1_bd14_4 = 0x000085B0;
// DMA S2MM 1 BD14 5
const unsigned int mem_dma_s2mm_1_bd14_5 = 0x000085B4;
// DMA S2MM 1 BD14 6
const unsigned int mem_dma_s2mm_1_bd14_6 = 0x000085B8;
// DMA S2MM 1 BD14 7
const unsigned int mem_dma_s2mm_1_bd14_7 = 0x000085BC;
// DMA S2MM 1 BD14 8
const unsigned int mem_dma_s2mm_1_bd14_8 = 0x000085C0;
// DMA S2MM 1 BD14 9
const unsigned int mem_dma_s2mm_1_bd14_9 = 0x000085C4;
// DMA S2MM 1 BD14 10
const unsigned int mem_dma_s2mm_1_bd14_10 = 0x000085C8;
// DMA S2MM 1 BD15 0
const unsigned int mem_dma_s2mm_1_bd15_0 = 0x000085D0;
// DMA S2MM 1 BD15 1
const unsigned int mem_dma_s2mm_1_bd15_1 = 0x000085D4;
// DMA S2MM 1 BD15 2
const unsigned int mem_dma_s2mm_1_bd15_2 = 0x000085D8;
// DMA S2MM 1 BD15 3
const unsigned int mem_dma_s2mm_1_bd15_3 = 0x000085DC;
// DMA S2MM 1 BD15 4
const unsigned int mem_dma_s2mm_1_bd15_4 = 0x000085E0;
// DMA S2MM 1 BD15 5
const unsigned int mem_dma_s2mm_1_bd15_5 = 0x000085E4;
// DMA S2MM 1 BD15 6
const unsigned int mem_dma_s2mm_1_bd15_6 = 0x000085E8;
// DMA S2MM 1 BD15 7
const unsigned int mem_dma_s2mm_1_bd15_7 = 0x000085EC;
// DMA S2MM 1 BD15 8
const unsigned int mem_dma_s2mm_1_bd15_8 = 0x000085F0;
// DMA S2MM 1 BD15 9
const unsigned int mem_dma_s2mm_1_bd15_9 = 0x000085F4;
// DMA S2MM 1 BD15 10
const unsigned int mem_dma_s2mm_1_bd15_10 = 0x000085F8;
// DMA S2MM 2 BD0 0
const unsigned int mem_dma_s2mm_2_bd0_0 = 0x00008600;
// DMA S2MM 2 BD0 1
const unsigned int mem_dma_s2mm_2_bd0_1 = 0x00008604;
// DMA S2MM 2 BD0 2
const unsigned int mem_dma_s2mm_2_bd0_2 = 0x00008608;
// DMA S2MM 2 BD0 3
const unsigned int mem_dma_s2mm_2_bd0_3 = 0x0000860C;
// DMA S2MM 2 BD0 4
const unsigned int mem_dma_s2mm_2_bd0_4 = 0x00008610;
// DMA S2MM 2 BD0 5
const unsigned int mem_dma_s2mm_2_bd0_5 = 0x00008614;
// DMA S2MM 2 BD0 6
const unsigned int mem_dma_s2mm_2_bd0_6 = 0x00008618;
// DMA S2MM 2 BD0 7
const unsigned int mem_dma_s2mm_2_bd0_7 = 0x0000861C;
// DMA S2MM 2 BD0 8
const unsigned int mem_dma_s2mm_2_bd0_8 = 0x00008620;
// DMA S2MM 2 BD0 9
const unsigned int mem_dma_s2mm_2_bd0_9 = 0x00008624;
// DMA S2MM 2 BD0 10
const unsigned int mem_dma_s2mm_2_bd0_10 = 0x00008628;
// DMA S2MM 2 BD1 0
const unsigned int mem_dma_s2mm_2_bd1_0 = 0x00008630;
// DMA S2MM 2 BD1 1
const unsigned int mem_dma_s2mm_2_bd1_1 = 0x00008634;
// DMA S2MM 2 BD1 2
const unsigned int mem_dma_s2mm_2_bd1_2 = 0x00008638;
// DMA S2MM 2 BD1 3
const unsigned int mem_dma_s2mm_2_bd1_3 = 0x0000863C;
// DMA S2MM 2 BD1 4
const unsigned int mem_dma_s2mm_2_bd1_4 = 0x00008640;
// DMA S2MM 2 BD1 5
const unsigned int mem_dma_s2mm_2_bd1_5 = 0x00008644;
// DMA S2MM 2 BD1 6
const unsigned int mem_dma_s2mm_2_bd1_6 = 0x00008648;
// DMA S2MM 2 BD1 7
const unsigned int mem_dma_s2mm_2_bd1_7 = 0x0000864C;
// DMA S2MM 2 BD1 8
const unsigned int mem_dma_s2mm_2_bd1_8 = 0x00008650;
// DMA S2MM 2 BD1 9
const unsigned int mem_dma_s2mm_2_bd1_9 = 0x00008654;
// DMA S2MM 2 BD1 10
const unsigned int mem_dma_s2mm_2_bd1_10 = 0x00008658;
// DMA S2MM 2 BD2 0
const unsigned int mem_dma_s2mm_2_bd2_0 = 0x00008660;
// DMA S2MM 2 BD2 1
const unsigned int mem_dma_s2mm_2_bd2_1 = 0x00008664;
// DMA S2MM 2 BD2 2
const unsigned int mem_dma_s2mm_2_bd2_2 = 0x00008668;
// DMA S2MM 2 BD2 3
const unsigned int mem_dma_s2mm_2_bd2_3 = 0x0000866C;
// DMA S2MM 2 BD2 4
const unsigned int mem_dma_s2mm_2_bd2_4 = 0x00008670;
// DMA S2MM 2 BD2 5
const unsigned int mem_dma_s2mm_2_bd2_5 = 0x00008674;
// DMA S2MM 2 BD2 6
const unsigned int mem_dma_s2mm_2_bd2_6 = 0x00008678;
// DMA S2MM 2 BD2 7
const unsigned int mem_dma_s2mm_2_bd2_7 = 0x0000867C;
// DMA S2MM 2 BD2 8
const unsigned int mem_dma_s2mm_2_bd2_8 = 0x00008680;
// DMA S2MM 2 BD2 9
const unsigned int mem_dma_s2mm_2_bd2_9 = 0x00008684;
// DMA S2MM 2 BD2 10
const unsigned int mem_dma_s2mm_2_bd2_10 = 0x00008688;
// DMA S2MM 2 BD3 0
const unsigned int mem_dma_s2mm_2_bd3_0 = 0x00008690;
// DMA S2MM 2 BD3 1
const unsigned int mem_dma_s2mm_2_bd3_1 = 0x00008694;
// DMA S2MM 2 BD3 2
const unsigned int mem_dma_s2mm_2_bd3_2 = 0x00008698;
// DMA S2MM 2 BD3 3
const unsigned int mem_dma_s2mm_2_bd3_3 = 0x0000869C;
// DMA S2MM 2 BD3 4
const unsigned int mem_dma_s2mm_2_bd3_4 = 0x000086A0;
// DMA S2MM 2 BD3 5
const unsigned int mem_dma_s2mm_2_bd3_5 = 0x000086A4;
// DMA S2MM 2 BD3 6
const unsigned int mem_dma_s2mm_2_bd3_6 = 0x000086A8;
// DMA S2MM 2 BD3 7
const unsigned int mem_dma_s2mm_2_bd3_7 = 0x000086AC;
// DMA S2MM 2 BD3 8
const unsigned int mem_dma_s2mm_2_bd3_8 = 0x000086B0;
// DMA S2MM 2 BD3 9
const unsigned int mem_dma_s2mm_2_bd3_9 = 0x000086B4;
// DMA S2MM 2 BD3 10
const unsigned int mem_dma_s2mm_2_bd3_10 = 0x000086B8;
// DMA S2MM 2 BD4 0
const unsigned int mem_dma_s2mm_2_bd4_0 = 0x000086C0;
// DMA S2MM 2 BD4 1
const unsigned int mem_dma_s2mm_2_bd4_1 = 0x000086C4;
// DMA S2MM 2 BD4 2
const unsigned int mem_dma_s2mm_2_bd4_2 = 0x000086C8;
// DMA S2MM 2 BD4 3
const unsigned int mem_dma_s2mm_2_bd4_3 = 0x000086CC;
// DMA S2MM 2 BD4 4
const unsigned int mem_dma_s2mm_2_bd4_4 = 0x000086D0;
// DMA S2MM 2 BD4 5
const unsigned int mem_dma_s2mm_2_bd4_5 = 0x000086D4;
// DMA S2MM 2 BD4 6
const unsigned int mem_dma_s2mm_2_bd4_6 = 0x000086D8;
// DMA S2MM 2 BD4 7
const unsigned int mem_dma_s2mm_2_bd4_7 = 0x000086DC;
// DMA S2MM 2 BD4 8
const unsigned int mem_dma_s2mm_2_bd4_8 = 0x000086E0;
// DMA S2MM 2 BD4 9
const unsigned int mem_dma_s2mm_2_bd4_9 = 0x000086E4;
// DMA S2MM 2 BD4 10
const unsigned int mem_dma_s2mm_2_bd4_10 = 0x000086E8;
// DMA S2MM 2 BD5 0
const unsigned int mem_dma_s2mm_2_bd5_0 = 0x000086F0;
// DMA S2MM 2 BD5 1
const unsigned int mem_dma_s2mm_2_bd5_1 = 0x000086F4;
// DMA S2MM 2 BD5 2
const unsigned int mem_dma_s2mm_2_bd5_2 = 0x000086F8;
// DMA S2MM 2 BD5 3
const unsigned int mem_dma_s2mm_2_bd5_3 = 0x000086FC;
// DMA S2MM 2 BD5 4
const unsigned int mem_dma_s2mm_2_bd5_4 = 0x00008700;
// DMA S2MM 2 BD5 5
const unsigned int mem_dma_s2mm_2_bd5_5 = 0x00008704;
// DMA S2MM 2 BD5 6
const unsigned int mem_dma_s2mm_2_bd5_6 = 0x00008708;
// DMA S2MM 2 BD5 7
const unsigned int mem_dma_s2mm_2_bd5_7 = 0x0000870C;
// DMA S2MM 2 BD5 8
const unsigned int mem_dma_s2mm_2_bd5_8 = 0x00008710;
// DMA S2MM 2 BD5 9
const unsigned int mem_dma_s2mm_2_bd5_9 = 0x00008714;
// DMA S2MM 2 BD5 10
const unsigned int mem_dma_s2mm_2_bd5_10 = 0x00008718;
// DMA S2MM 2 BD6 0
const unsigned int mem_dma_s2mm_2_bd6_0 = 0x00008720;
// DMA S2MM 2 BD6 1
const unsigned int mem_dma_s2mm_2_bd6_1 = 0x00008724;
// DMA S2MM 2 BD6 2
const unsigned int mem_dma_s2mm_2_bd6_2 = 0x00008728;
// DMA S2MM 2 BD6 3
const unsigned int mem_dma_s2mm_2_bd6_3 = 0x0000872C;
// DMA S2MM 2 BD6 4
const unsigned int mem_dma_s2mm_2_bd6_4 = 0x00008730;
// DMA S2MM 2 BD6 5
const unsigned int mem_dma_s2mm_2_bd6_5 = 0x00008734;
// DMA S2MM 2 BD6 6
const unsigned int mem_dma_s2mm_2_bd6_6 = 0x00008738;
// DMA S2MM 2 BD6 7
const unsigned int mem_dma_s2mm_2_bd6_7 = 0x0000873C;
// DMA S2MM 2 BD6 8
const unsigned int mem_dma_s2mm_2_bd6_8 = 0x00008740;
// DMA S2MM 2 BD6 9
const unsigned int mem_dma_s2mm_2_bd6_9 = 0x00008744;
// DMA S2MM 2 BD6 10
const unsigned int mem_dma_s2mm_2_bd6_10 = 0x00008748;
// DMA S2MM 2 BD7 0
const unsigned int mem_dma_s2mm_2_bd7_0 = 0x00008750;
// DMA S2MM 2 BD7 1
const unsigned int mem_dma_s2mm_2_bd7_1 = 0x00008754;
// DMA S2MM 2 BD7 2
const unsigned int mem_dma_s2mm_2_bd7_2 = 0x00008758;
// DMA S2MM 2 BD7 3
const unsigned int mem_dma_s2mm_2_bd7_3 = 0x0000875C;
// DMA S2MM 2 BD7 4
const unsigned int mem_dma_s2mm_2_bd7_4 = 0x00008760;
// DMA S2MM 2 BD7 5
const unsigned int mem_dma_s2mm_2_bd7_5 = 0x00008764;
// DMA S2MM 2 BD7 6
const unsigned int mem_dma_s2mm_2_bd7_6 = 0x00008768;
// DMA S2MM 2 BD7 7
const unsigned int mem_dma_s2mm_2_bd7_7 = 0x0000876C;
// DMA S2MM 2 BD7 8
const unsigned int mem_dma_s2mm_2_bd7_8 = 0x00008770;
// DMA S2MM 2 BD7 9
const unsigned int mem_dma_s2mm_2_bd7_9 = 0x00008774;
// DMA S2MM 2 BD7 10
const unsigned int mem_dma_s2mm_2_bd7_10 = 0x00008778;
// DMA S2MM 2 BD8 0
const unsigned int mem_dma_s2mm_2_bd8_0 = 0x00008780;
// DMA S2MM 2 BD8 1
const unsigned int mem_dma_s2mm_2_bd8_1 = 0x00008784;
// DMA S2MM 2 BD8 2
const unsigned int mem_dma_s2mm_2_bd8_2 = 0x00008788;
// DMA S2MM 2 BD8 3
const unsigned int mem_dma_s2mm_2_bd8_3 = 0x0000878C;
// DMA S2MM 2 BD8 4
const unsigned int mem_dma_s2mm_2_bd8_4 = 0x00008790;
// DMA S2MM 2 BD8 5
const unsigned int mem_dma_s2mm_2_bd8_5 = 0x00008794;
// DMA S2MM 2 BD8 6
const unsigned int mem_dma_s2mm_2_bd8_6 = 0x00008798;
// DMA S2MM 2 BD8 7
const unsigned int mem_dma_s2mm_2_bd8_7 = 0x0000879C;
// DMA S2MM 2 BD8 8
const unsigned int mem_dma_s2mm_2_bd8_8 = 0x000087A0;
// DMA S2MM 2 BD8 9
const unsigned int mem_dma_s2mm_2_bd8_9 = 0x000087A4;
// DMA S2MM 2 BD8 10
const unsigned int mem_dma_s2mm_2_bd8_10 = 0x000087A8;
// DMA S2MM 2 BD9 0
const unsigned int mem_dma_s2mm_2_bd9_0 = 0x000087B0;
// DMA S2MM 2 BD9 1
const unsigned int mem_dma_s2mm_2_bd9_1 = 0x000087B4;
// DMA S2MM 2 BD9 2
const unsigned int mem_dma_s2mm_2_bd9_2 = 0x000087B8;
// DMA S2MM 2 BD9 3
const unsigned int mem_dma_s2mm_2_bd9_3 = 0x000087BC;
// DMA S2MM 2 BD9 4
const unsigned int mem_dma_s2mm_2_bd9_4 = 0x000087C0;
// DMA S2MM 2 BD9 5
const unsigned int mem_dma_s2mm_2_bd9_5 = 0x000087C4;
// DMA S2MM 2 BD9 6
const unsigned int mem_dma_s2mm_2_bd9_6 = 0x000087C8;
// DMA S2MM 2 BD9 7
const unsigned int mem_dma_s2mm_2_bd9_7 = 0x000087CC;
// DMA S2MM 2 BD9 8
const unsigned int mem_dma_s2mm_2_bd9_8 = 0x000087D0;
// DMA S2MM 2 BD9 9
const unsigned int mem_dma_s2mm_2_bd9_9 = 0x000087D4;
// DMA S2MM 2 BD9 10
const unsigned int mem_dma_s2mm_2_bd9_10 = 0x000087D8;
// DMA S2MM 2 BD10 0
const unsigned int mem_dma_s2mm_2_bd10_0 = 0x000087E0;
// DMA S2MM 2 BD10 1
const unsigned int mem_dma_s2mm_2_bd10_1 = 0x000087E4;
// DMA S2MM 2 BD10 2
const unsigned int mem_dma_s2mm_2_bd10_2 = 0x000087E8;
// DMA S2MM 2 BD10 3
const unsigned int mem_dma_s2mm_2_bd10_3 = 0x000087EC;
// DMA S2MM 2 BD10 4
const unsigned int mem_dma_s2mm_2_bd10_4 = 0x000087F0;
// DMA S2MM 2 BD10 5
const unsigned int mem_dma_s2mm_2_bd10_5 = 0x000087F4;
// DMA S2MM 2 BD10 6
const unsigned int mem_dma_s2mm_2_bd10_6 = 0x000087F8;
// DMA S2MM 2 BD10 7
const unsigned int mem_dma_s2mm_2_bd10_7 = 0x000087FC;
// DMA S2MM 2 BD10 8
const unsigned int mem_dma_s2mm_2_bd10_8 = 0x00008800;
// DMA S2MM 2 BD10 9
const unsigned int mem_dma_s2mm_2_bd10_9 = 0x00008804;
// DMA S2MM 2 BD10 10
const unsigned int mem_dma_s2mm_2_bd10_10 = 0x00008808;
// DMA S2MM 2 BD11 0
const unsigned int mem_dma_s2mm_2_bd11_0 = 0x00008810;
// DMA S2MM 2 BD11 1
const unsigned int mem_dma_s2mm_2_bd11_1 = 0x00008814;
// DMA S2MM 2 BD11 2
const unsigned int mem_dma_s2mm_2_bd11_2 = 0x00008818;
// DMA S2MM 2 BD11 3
const unsigned int mem_dma_s2mm_2_bd11_3 = 0x0000881C;
// DMA S2MM 2 BD11 4
const unsigned int mem_dma_s2mm_2_bd11_4 = 0x00008820;
// DMA S2MM 2 BD11 5
const unsigned int mem_dma_s2mm_2_bd11_5 = 0x00008824;
// DMA S2MM 2 BD11 6
const unsigned int mem_dma_s2mm_2_bd11_6 = 0x00008828;
// DMA S2MM 2 BD11 7
const unsigned int mem_dma_s2mm_2_bd11_7 = 0x0000882C;
// DMA S2MM 2 BD11 8
const unsigned int mem_dma_s2mm_2_bd11_8 = 0x00008830;
// DMA S2MM 2 BD11 9
const unsigned int mem_dma_s2mm_2_bd11_9 = 0x00008834;
// DMA S2MM 2 BD11 10
const unsigned int mem_dma_s2mm_2_bd11_10 = 0x00008838;
// DMA S2MM 2 BD12 0
const unsigned int mem_dma_s2mm_2_bd12_0 = 0x00008840;
// DMA S2MM 2 BD12 1
const unsigned int mem_dma_s2mm_2_bd12_1 = 0x00008844;
// DMA S2MM 2 BD12 2
const unsigned int mem_dma_s2mm_2_bd12_2 = 0x00008848;
// DMA S2MM 2 BD12 3
const unsigned int mem_dma_s2mm_2_bd12_3 = 0x0000884C;
// DMA S2MM 2 BD12 4
const unsigned int mem_dma_s2mm_2_bd12_4 = 0x00008850;
// DMA S2MM 2 BD12 5
const unsigned int mem_dma_s2mm_2_bd12_5 = 0x00008854;
// DMA S2MM 2 BD12 6
const unsigned int mem_dma_s2mm_2_bd12_6 = 0x00008858;
// DMA S2MM 2 BD12 7
const unsigned int mem_dma_s2mm_2_bd12_7 = 0x0000885C;
// DMA S2MM 2 BD12 8
const unsigned int mem_dma_s2mm_2_bd12_8 = 0x00008860;
// DMA S2MM 2 BD12 9
const unsigned int mem_dma_s2mm_2_bd12_9 = 0x00008864;
// DMA S2MM 2 BD12 10
const unsigned int mem_dma_s2mm_2_bd12_10 = 0x00008868;
// DMA S2MM 2 BD13 0
const unsigned int mem_dma_s2mm_2_bd13_0 = 0x00008870;
// DMA S2MM 2 BD13 1
const unsigned int mem_dma_s2mm_2_bd13_1 = 0x00008874;
// DMA S2MM 2 BD13 2
const unsigned int mem_dma_s2mm_2_bd13_2 = 0x00008878;
// DMA S2MM 2 BD13 3
const unsigned int mem_dma_s2mm_2_bd13_3 = 0x0000887C;
// DMA S2MM 2 BD13 4
const unsigned int mem_dma_s2mm_2_bd13_4 = 0x00008880;
// DMA S2MM 2 BD13 5
const unsigned int mem_dma_s2mm_2_bd13_5 = 0x00008884;
// DMA S2MM 2 BD13 6
const unsigned int mem_dma_s2mm_2_bd13_6 = 0x00008888;
// DMA S2MM 2 BD13 7
const unsigned int mem_dma_s2mm_2_bd13_7 = 0x0000888C;
// DMA S2MM 2 BD13 8
const unsigned int mem_dma_s2mm_2_bd13_8 = 0x00008890;
// DMA S2MM 2 BD13 9
const unsigned int mem_dma_s2mm_2_bd13_9 = 0x00008894;
// DMA S2MM 2 BD13 10
const unsigned int mem_dma_s2mm_2_bd13_10 = 0x00008898;
// DMA S2MM 2 BD14 0
const unsigned int mem_dma_s2mm_2_bd14_0 = 0x000088A0;
// DMA S2MM 2 BD14 1
const unsigned int mem_dma_s2mm_2_bd14_1 = 0x000088A4;
// DMA S2MM 2 BD14 2
const unsigned int mem_dma_s2mm_2_bd14_2 = 0x000088A8;
// DMA S2MM 2 BD14 3
const unsigned int mem_dma_s2mm_2_bd14_3 = 0x000088AC;
// DMA S2MM 2 BD14 4
const unsigned int mem_dma_s2mm_2_bd14_4 = 0x000088B0;
// DMA S2MM 2 BD14 5
const unsigned int mem_dma_s2mm_2_bd14_5 = 0x000088B4;
// DMA S2MM 2 BD14 6
const unsigned int mem_dma_s2mm_2_bd14_6 = 0x000088B8;
// DMA S2MM 2 BD14 7
const unsigned int mem_dma_s2mm_2_bd14_7 = 0x000088BC;
// DMA S2MM 2 BD14 8
const unsigned int mem_dma_s2mm_2_bd14_8 = 0x000088C0;
// DMA S2MM 2 BD14 9
const unsigned int mem_dma_s2mm_2_bd14_9 = 0x000088C4;
// DMA S2MM 2 BD14 10
const unsigned int mem_dma_s2mm_2_bd14_10 = 0x000088C8;
// DMA S2MM 2 BD15 0
const unsigned int mem_dma_s2mm_2_bd15_0 = 0x000088D0;
// DMA S2MM 2 BD15 1
const unsigned int mem_dma_s2mm_2_bd15_1 = 0x000088D4;
// DMA S2MM 2 BD15 2
const unsigned int mem_dma_s2mm_2_bd15_2 = 0x000088D8;
// DMA S2MM 2 BD15 3
const unsigned int mem_dma_s2mm_2_bd15_3 = 0x000088DC;
// DMA S2MM 2 BD15 4
const unsigned int mem_dma_s2mm_2_bd15_4 = 0x000088E0;
// DMA S2MM 2 BD15 5
const unsigned int mem_dma_s2mm_2_bd15_5 = 0x000088E4;
// DMA S2MM 2 BD15 6
const unsigned int mem_dma_s2mm_2_bd15_6 = 0x000088E8;
// DMA S2MM 2 BD15 7
const unsigned int mem_dma_s2mm_2_bd15_7 = 0x000088EC;
// DMA S2MM 2 BD15 8
const unsigned int mem_dma_s2mm_2_bd15_8 = 0x000088F0;
// DMA S2MM 2 BD15 9
const unsigned int mem_dma_s2mm_2_bd15_9 = 0x000088F4;
// DMA S2MM 2 BD15 10
const unsigned int mem_dma_s2mm_2_bd15_10 = 0x000088F8;
// DMA S2MM 3 BD0 0
const unsigned int mem_dma_s2mm_3_bd0_0 = 0x00008900;
// DMA S2MM 3 BD0 1
const unsigned int mem_dma_s2mm_3_bd0_1 = 0x00008904;
// DMA S2MM 3 BD0 2
const unsigned int mem_dma_s2mm_3_bd0_2 = 0x00008908;
// DMA S2MM 3 BD0 3
const unsigned int mem_dma_s2mm_3_bd0_3 = 0x0000890C;
// DMA S2MM 3 BD0 4
const unsigned int mem_dma_s2mm_3_bd0_4 = 0x00008910;
// DMA S2MM 3 BD0 5
const unsigned int mem_dma_s2mm_3_bd0_5 = 0x00008914;
// DMA S2MM 3 BD0 6
const unsigned int mem_dma_s2mm_3_bd0_6 = 0x00008918;
// DMA S2MM 3 BD0 7
const unsigned int mem_dma_s2mm_3_bd0_7 = 0x0000891C;
// DMA S2MM 3 BD0 8
const unsigned int mem_dma_s2mm_3_bd0_8 = 0x00008920;
// DMA S2MM 3 BD0 9
const unsigned int mem_dma_s2mm_3_bd0_9 = 0x00008924;
// DMA S2MM 3 BD0 10
const unsigned int mem_dma_s2mm_3_bd0_10 = 0x00008928;
// DMA S2MM 3 BD1 0
const unsigned int mem_dma_s2mm_3_bd1_0 = 0x00008930;
// DMA S2MM 3 BD1 1
const unsigned int mem_dma_s2mm_3_bd1_1 = 0x00008934;
// DMA S2MM 3 BD1 2
const unsigned int mem_dma_s2mm_3_bd1_2 = 0x00008938;
// DMA S2MM 3 BD1 3
const unsigned int mem_dma_s2mm_3_bd1_3 = 0x0000893C;
// DMA S2MM 3 BD1 4
const unsigned int mem_dma_s2mm_3_bd1_4 = 0x00008940;
// DMA S2MM 3 BD1 5
const unsigned int mem_dma_s2mm_3_bd1_5 = 0x00008944;
// DMA S2MM 3 BD1 6
const unsigned int mem_dma_s2mm_3_bd1_6 = 0x00008948;
// DMA S2MM 3 BD1 7
const unsigned int mem_dma_s2mm_3_bd1_7 = 0x0000894C;
// DMA S2MM 3 BD1 8
const unsigned int mem_dma_s2mm_3_bd1_8 = 0x00008950;
// DMA S2MM 3 BD1 9
const unsigned int mem_dma_s2mm_3_bd1_9 = 0x00008954;
// DMA S2MM 3 BD1 10
const unsigned int mem_dma_s2mm_3_bd1_10 = 0x00008958;
// DMA S2MM 3 BD2 0
const unsigned int mem_dma_s2mm_3_bd2_0 = 0x00008960;
// DMA S2MM 3 BD2 1
const unsigned int mem_dma_s2mm_3_bd2_1 = 0x00008964;
// DMA S2MM 3 BD2 2
const unsigned int mem_dma_s2mm_3_bd2_2 = 0x00008968;
// DMA S2MM 3 BD2 3
const unsigned int mem_dma_s2mm_3_bd2_3 = 0x0000896C;
// DMA S2MM 3 BD2 4
const unsigned int mem_dma_s2mm_3_bd2_4 = 0x00008970;
// DMA S2MM 3 BD2 5
const unsigned int mem_dma_s2mm_3_bd2_5 = 0x00008974;
// DMA S2MM 3 BD2 6
const unsigned int mem_dma_s2mm_3_bd2_6 = 0x00008978;
// DMA S2MM 3 BD2 7
const unsigned int mem_dma_s2mm_3_bd2_7 = 0x0000897C;
// DMA S2MM 3 BD2 8
const unsigned int mem_dma_s2mm_3_bd2_8 = 0x00008980;
// DMA S2MM 3 BD2 9
const unsigned int mem_dma_s2mm_3_bd2_9 = 0x00008984;
// DMA S2MM 3 BD2 10
const unsigned int mem_dma_s2mm_3_bd2_10 = 0x00008988;
// DMA S2MM 3 BD3 0
const unsigned int mem_dma_s2mm_3_bd3_0 = 0x00008990;
// DMA S2MM 3 BD3 1
const unsigned int mem_dma_s2mm_3_bd3_1 = 0x00008994;
// DMA S2MM 3 BD3 2
const unsigned int mem_dma_s2mm_3_bd3_2 = 0x00008998;
// DMA S2MM 3 BD3 3
const unsigned int mem_dma_s2mm_3_bd3_3 = 0x0000899C;
// DMA S2MM 3 BD3 4
const unsigned int mem_dma_s2mm_3_bd3_4 = 0x000089A0;
// DMA S2MM 3 BD3 5
const unsigned int mem_dma_s2mm_3_bd3_5 = 0x000089A4;
// DMA S2MM 3 BD3 6
const unsigned int mem_dma_s2mm_3_bd3_6 = 0x000089A8;
// DMA S2MM 3 BD3 7
const unsigned int mem_dma_s2mm_3_bd3_7 = 0x000089AC;
// DMA S2MM 3 BD3 8
const unsigned int mem_dma_s2mm_3_bd3_8 = 0x000089B0;
// DMA S2MM 3 BD3 9
const unsigned int mem_dma_s2mm_3_bd3_9 = 0x000089B4;
// DMA S2MM 3 BD3 10
const unsigned int mem_dma_s2mm_3_bd3_10 = 0x000089B8;
// DMA S2MM 3 BD4 0
const unsigned int mem_dma_s2mm_3_bd4_0 = 0x000089C0;
// DMA S2MM 3 BD4 1
const unsigned int mem_dma_s2mm_3_bd4_1 = 0x000089C4;
// DMA S2MM 3 BD4 2
const unsigned int mem_dma_s2mm_3_bd4_2 = 0x000089C8;
// DMA S2MM 3 BD4 3
const unsigned int mem_dma_s2mm_3_bd4_3 = 0x000089CC;
// DMA S2MM 3 BD4 4
const unsigned int mem_dma_s2mm_3_bd4_4 = 0x000089D0;
// DMA S2MM 3 BD4 5
const unsigned int mem_dma_s2mm_3_bd4_5 = 0x000089D4;
// DMA S2MM 3 BD4 6
const unsigned int mem_dma_s2mm_3_bd4_6 = 0x000089D8;
// DMA S2MM 3 BD4 7
const unsigned int mem_dma_s2mm_3_bd4_7 = 0x000089DC;
// DMA S2MM 3 BD4 8
const unsigned int mem_dma_s2mm_3_bd4_8 = 0x000089E0;
// DMA S2MM 3 BD4 9
const unsigned int mem_dma_s2mm_3_bd4_9 = 0x000089E4;
// DMA S2MM 3 BD4 10
const unsigned int mem_dma_s2mm_3_bd4_10 = 0x000089E8;
// DMA S2MM 3 BD5 0
const unsigned int mem_dma_s2mm_3_bd5_0 = 0x000089F0;
// DMA S2MM 3 BD5 1
const unsigned int mem_dma_s2mm_3_bd5_1 = 0x000089F4;
// DMA S2MM 3 BD5 2
const unsigned int mem_dma_s2mm_3_bd5_2 = 0x000089F8;
// DMA S2MM 3 BD5 3
const unsigned int mem_dma_s2mm_3_bd5_3 = 0x000089FC;
// DMA S2MM 3 BD5 4
const unsigned int mem_dma_s2mm_3_bd5_4 = 0x00008A00;
// DMA S2MM 3 BD5 5
const unsigned int mem_dma_s2mm_3_bd5_5 = 0x00008A04;
// DMA S2MM 3 BD5 6
const unsigned int mem_dma_s2mm_3_bd5_6 = 0x00008A08;
// DMA S2MM 3 BD5 7
const unsigned int mem_dma_s2mm_3_bd5_7 = 0x00008A0C;
// DMA S2MM 3 BD5 8
const unsigned int mem_dma_s2mm_3_bd5_8 = 0x00008A10;
// DMA S2MM 3 BD5 9
const unsigned int mem_dma_s2mm_3_bd5_9 = 0x00008A14;
// DMA S2MM 3 BD5 10
const unsigned int mem_dma_s2mm_3_bd5_10 = 0x00008A18;
// DMA S2MM 3 BD6 0
const unsigned int mem_dma_s2mm_3_bd6_0 = 0x00008A20;
// DMA S2MM 3 BD6 1
const unsigned int mem_dma_s2mm_3_bd6_1 = 0x00008A24;
// DMA S2MM 3 BD6 2
const unsigned int mem_dma_s2mm_3_bd6_2 = 0x00008A28;
// DMA S2MM 3 BD6 3
const unsigned int mem_dma_s2mm_3_bd6_3 = 0x00008A2C;
// DMA S2MM 3 BD6 4
const unsigned int mem_dma_s2mm_3_bd6_4 = 0x00008A30;
// DMA S2MM 3 BD6 5
const unsigned int mem_dma_s2mm_3_bd6_5 = 0x00008A34;
// DMA S2MM 3 BD6 6
const unsigned int mem_dma_s2mm_3_bd6_6 = 0x00008A38;
// DMA S2MM 3 BD6 7
const unsigned int mem_dma_s2mm_3_bd6_7 = 0x00008A3C;
// DMA S2MM 3 BD6 8
const unsigned int mem_dma_s2mm_3_bd6_8 = 0x00008A40;
// DMA S2MM 3 BD6 9
const unsigned int mem_dma_s2mm_3_bd6_9 = 0x00008A44;
// DMA S2MM 3 BD6 10
const unsigned int mem_dma_s2mm_3_bd6_10 = 0x00008A48;
// DMA S2MM 3 BD7 0
const unsigned int mem_dma_s2mm_3_bd7_0 = 0x00008A50;
// DMA S2MM 3 BD7 1
const unsigned int mem_dma_s2mm_3_bd7_1 = 0x00008A54;
// DMA S2MM 3 BD7 2
const unsigned int mem_dma_s2mm_3_bd7_2 = 0x00008A58;
// DMA S2MM 3 BD7 3
const unsigned int mem_dma_s2mm_3_bd7_3 = 0x00008A5C;
// DMA S2MM 3 BD7 4
const unsigned int mem_dma_s2mm_3_bd7_4 = 0x00008A60;
// DMA S2MM 3 BD7 5
const unsigned int mem_dma_s2mm_3_bd7_5 = 0x00008A64;
// DMA S2MM 3 BD7 6
const unsigned int mem_dma_s2mm_3_bd7_6 = 0x00008A68;
// DMA S2MM 3 BD7 7
const unsigned int mem_dma_s2mm_3_bd7_7 = 0x00008A6C;
// DMA S2MM 3 BD7 8
const unsigned int mem_dma_s2mm_3_bd7_8 = 0x00008A70;
// DMA S2MM 3 BD7 9
const unsigned int mem_dma_s2mm_3_bd7_9 = 0x00008A74;
// DMA S2MM 3 BD7 10
const unsigned int mem_dma_s2mm_3_bd7_10 = 0x00008A78;
// DMA S2MM 3 BD8 0
const unsigned int mem_dma_s2mm_3_bd8_0 = 0x00008A80;
// DMA S2MM 3 BD8 1
const unsigned int mem_dma_s2mm_3_bd8_1 = 0x00008A84;
// DMA S2MM 3 BD8 2
const unsigned int mem_dma_s2mm_3_bd8_2 = 0x00008A88;
// DMA S2MM 3 BD8 3
const unsigned int mem_dma_s2mm_3_bd8_3 = 0x00008A8C;
// DMA S2MM 3 BD8 4
const unsigned int mem_dma_s2mm_3_bd8_4 = 0x00008A90;
// DMA S2MM 3 BD8 5
const unsigned int mem_dma_s2mm_3_bd8_5 = 0x00008A94;
// DMA S2MM 3 BD8 6
const unsigned int mem_dma_s2mm_3_bd8_6 = 0x00008A98;
// DMA S2MM 3 BD8 7
const unsigned int mem_dma_s2mm_3_bd8_7 = 0x00008A9C;
// DMA S2MM 3 BD8 8
const unsigned int mem_dma_s2mm_3_bd8_8 = 0x00008AA0;
// DMA S2MM 3 BD8 9
const unsigned int mem_dma_s2mm_3_bd8_9 = 0x00008AA4;
// DMA S2MM 3 BD8 10
const unsigned int mem_dma_s2mm_3_bd8_10 = 0x00008AA8;
// DMA S2MM 3 BD9 0
const unsigned int mem_dma_s2mm_3_bd9_0 = 0x00008AB0;
// DMA S2MM 3 BD9 1
const unsigned int mem_dma_s2mm_3_bd9_1 = 0x00008AB4;
// DMA S2MM 3 BD9 2
const unsigned int mem_dma_s2mm_3_bd9_2 = 0x00008AB8;
// DMA S2MM 3 BD9 3
const unsigned int mem_dma_s2mm_3_bd9_3 = 0x00008ABC;
// DMA S2MM 3 BD9 4
const unsigned int mem_dma_s2mm_3_bd9_4 = 0x00008AC0;
// DMA S2MM 3 BD9 5
const unsigned int mem_dma_s2mm_3_bd9_5 = 0x00008AC4;
// DMA S2MM 3 BD9 6
const unsigned int mem_dma_s2mm_3_bd9_6 = 0x00008AC8;
// DMA S2MM 3 BD9 7
const unsigned int mem_dma_s2mm_3_bd9_7 = 0x00008ACC;
// DMA S2MM 3 BD9 8
const unsigned int mem_dma_s2mm_3_bd9_8 = 0x00008AD0;
// DMA S2MM 3 BD9 9
const unsigned int mem_dma_s2mm_3_bd9_9 = 0x00008AD4;
// DMA S2MM 3 BD9 10
const unsigned int mem_dma_s2mm_3_bd9_10 = 0x00008AD8;
// DMA S2MM 3 BD10 0
const unsigned int mem_dma_s2mm_3_bd10_0 = 0x00008AE0;
// DMA S2MM 3 BD10 1
const unsigned int mem_dma_s2mm_3_bd10_1 = 0x00008AE4;
// DMA S2MM 3 BD10 2
const unsigned int mem_dma_s2mm_3_bd10_2 = 0x00008AE8;
// DMA S2MM 3 BD10 3
const unsigned int mem_dma_s2mm_3_bd10_3 = 0x00008AEC;
// DMA S2MM 3 BD10 4
const unsigned int mem_dma_s2mm_3_bd10_4 = 0x00008AF0;
// DMA S2MM 3 BD10 5
const unsigned int mem_dma_s2mm_3_bd10_5 = 0x00008AF4;
// DMA S2MM 3 BD10 6
const unsigned int mem_dma_s2mm_3_bd10_6 = 0x00008AF8;
// DMA S2MM 3 BD10 7
const unsigned int mem_dma_s2mm_3_bd10_7 = 0x00008AFC;
// DMA S2MM 3 BD10 8
const unsigned int mem_dma_s2mm_3_bd10_8 = 0x00008B00;
// DMA S2MM 3 BD10 9
const unsigned int mem_dma_s2mm_3_bd10_9 = 0x00008B04;
// DMA S2MM 3 BD10 10
const unsigned int mem_dma_s2mm_3_bd10_10 = 0x00008B08;
// DMA S2MM 3 BD11 0
const unsigned int mem_dma_s2mm_3_bd11_0 = 0x00008B10;
// DMA S2MM 3 BD11 1
const unsigned int mem_dma_s2mm_3_bd11_1 = 0x00008B14;
// DMA S2MM 3 BD11 2
const unsigned int mem_dma_s2mm_3_bd11_2 = 0x00008B18;
// DMA S2MM 3 BD11 3
const unsigned int mem_dma_s2mm_3_bd11_3 = 0x00008B1C;
// DMA S2MM 3 BD11 4
const unsigned int mem_dma_s2mm_3_bd11_4 = 0x00008B20;
// DMA S2MM 3 BD11 5
const unsigned int mem_dma_s2mm_3_bd11_5 = 0x00008B24;
// DMA S2MM 3 BD11 6
const unsigned int mem_dma_s2mm_3_bd11_6 = 0x00008B28;
// DMA S2MM 3 BD11 7
const unsigned int mem_dma_s2mm_3_bd11_7 = 0x00008B2C;
// DMA S2MM 3 BD11 8
const unsigned int mem_dma_s2mm_3_bd11_8 = 0x00008B30;
// DMA S2MM 3 BD11 9
const unsigned int mem_dma_s2mm_3_bd11_9 = 0x00008B34;
// DMA S2MM 3 BD11 10
const unsigned int mem_dma_s2mm_3_bd11_10 = 0x00008B38;
// DMA S2MM 3 BD12 0
const unsigned int mem_dma_s2mm_3_bd12_0 = 0x00008B40;
// DMA S2MM 3 BD12 1
const unsigned int mem_dma_s2mm_3_bd12_1 = 0x00008B44;
// DMA S2MM 3 BD12 2
const unsigned int mem_dma_s2mm_3_bd12_2 = 0x00008B48;
// DMA S2MM 3 BD12 3
const unsigned int mem_dma_s2mm_3_bd12_3 = 0x00008B4C;
// DMA S2MM 3 BD12 4
const unsigned int mem_dma_s2mm_3_bd12_4 = 0x00008B50;
// DMA S2MM 3 BD12 5
const unsigned int mem_dma_s2mm_3_bd12_5 = 0x00008B54;
// DMA S2MM 3 BD12 6
const unsigned int mem_dma_s2mm_3_bd12_6 = 0x00008B58;
// DMA S2MM 3 BD12 7
const unsigned int mem_dma_s2mm_3_bd12_7 = 0x00008B5C;
// DMA S2MM 3 BD12 8
const unsigned int mem_dma_s2mm_3_bd12_8 = 0x00008B60;
// DMA S2MM 3 BD12 9
const unsigned int mem_dma_s2mm_3_bd12_9 = 0x00008B64;
// DMA S2MM 3 BD12 10
const unsigned int mem_dma_s2mm_3_bd12_10 = 0x00008B68;
// DMA S2MM 3 BD13 0
const unsigned int mem_dma_s2mm_3_bd13_0 = 0x00008B70;
// DMA S2MM 3 BD13 1
const unsigned int mem_dma_s2mm_3_bd13_1 = 0x00008B74;
// DMA S2MM 3 BD13 2
const unsigned int mem_dma_s2mm_3_bd13_2 = 0x00008B78;
// DMA S2MM 3 BD13 3
const unsigned int mem_dma_s2mm_3_bd13_3 = 0x00008B7C;
// DMA S2MM 3 BD13 4
const unsigned int mem_dma_s2mm_3_bd13_4 = 0x00008B80;
// DMA S2MM 3 BD13 5
const unsigned int mem_dma_s2mm_3_bd13_5 = 0x00008B84;
// DMA S2MM 3 BD13 6
const unsigned int mem_dma_s2mm_3_bd13_6 = 0x00008B88;
// DMA S2MM 3 BD13 7
const unsigned int mem_dma_s2mm_3_bd13_7 = 0x00008B8C;
// DMA S2MM 3 BD13 8
const unsigned int mem_dma_s2mm_3_bd13_8 = 0x00008B90;
// DMA S2MM 3 BD13 9
const unsigned int mem_dma_s2mm_3_bd13_9 = 0x00008B94;
// DMA S2MM 3 BD13 10
const unsigned int mem_dma_s2mm_3_bd13_10 = 0x00008B98;
// DMA S2MM 3 BD14 0
const unsigned int mem_dma_s2mm_3_bd14_0 = 0x00008BA0;
// DMA S2MM 3 BD14 1
const unsigned int mem_dma_s2mm_3_bd14_1 = 0x00008BA4;
// DMA S2MM 3 BD14 2
const unsigned int mem_dma_s2mm_3_bd14_2 = 0x00008BA8;
// DMA S2MM 3 BD14 3
const unsigned int mem_dma_s2mm_3_bd14_3 = 0x00008BAC;
// DMA S2MM 3 BD14 4
const unsigned int mem_dma_s2mm_3_bd14_4 = 0x00008BB0;
// DMA S2MM 3 BD14 5
const unsigned int mem_dma_s2mm_3_bd14_5 = 0x00008BB4;
// DMA S2MM 3 BD14 6
const unsigned int mem_dma_s2mm_3_bd14_6 = 0x00008BB8;
// DMA S2MM 3 BD14 7
const unsigned int mem_dma_s2mm_3_bd14_7 = 0x00008BBC;
// DMA S2MM 3 BD14 8
const unsigned int mem_dma_s2mm_3_bd14_8 = 0x00008BC0;
// DMA S2MM 3 BD14 9
const unsigned int mem_dma_s2mm_3_bd14_9 = 0x00008BC4;
// DMA S2MM 3 BD14 10
const unsigned int mem_dma_s2mm_3_bd14_10 = 0x00008BC8;
// DMA S2MM 3 BD15 0
const unsigned int mem_dma_s2mm_3_bd15_0 = 0x00008BD0;
// DMA S2MM 3 BD15 1
const unsigned int mem_dma_s2mm_3_bd15_1 = 0x00008BD4;
// DMA S2MM 3 BD15 2
const unsigned int mem_dma_s2mm_3_bd15_2 = 0x00008BD8;
// DMA S2MM 3 BD15 3
const unsigned int mem_dma_s2mm_3_bd15_3 = 0x00008BDC;
// DMA S2MM 3 BD15 4
const unsigned int mem_dma_s2mm_3_bd15_4 = 0x00008BE0;
// DMA S2MM 3 BD15 5
const unsigned int mem_dma_s2mm_3_bd15_5 = 0x00008BE4;
// DMA S2MM 3 BD15 6
const unsigned int mem_dma_s2mm_3_bd15_6 = 0x00008BE8;
// DMA S2MM 3 BD15 7
const unsigned int mem_dma_s2mm_3_bd15_7 = 0x00008BEC;
// DMA S2MM 3 BD15 8
const unsigned int mem_dma_s2mm_3_bd15_8 = 0x00008BF0;
// DMA S2MM 3 BD15 9
const unsigned int mem_dma_s2mm_3_bd15_9 = 0x00008BF4;
// DMA S2MM 3 BD15 10
const unsigned int mem_dma_s2mm_3_bd15_10 = 0x00008BF8;
// DMA MM2S 0 BD0 0
const unsigned int mem_dma_mm2s_0_bd0_0 = 0x00008C00;
// DMA MM2S 0 BD0 1
const unsigned int mem_dma_mm2s_0_bd0_1 = 0x00008C04;
// DMA MM2S 0 BD0 2
const unsigned int mem_dma_mm2s_0_bd0_2 = 0x00008C08;
// DMA MM2S 0 BD0 3
const unsigned int mem_dma_mm2s_0_bd0_3 = 0x00008C0C;
// DMA MM2S 0 BD0 4
const unsigned int mem_dma_mm2s_0_bd0_4 = 0x00008C10;
// DMA MM2S 0 BD0 5
const unsigned int mem_dma_mm2s_0_bd0_5 = 0x00008C14;
// DMA MM2S 0 BD0 6
const unsigned int mem_dma_mm2s_0_bd0_6 = 0x00008C18;
// DMA MM2S 0 BD0 7
const unsigned int mem_dma_mm2s_0_bd0_7 = 0x00008C1C;
// DMA MM2S 0 BD0 8
const unsigned int mem_dma_mm2s_0_bd0_8 = 0x00008C20;
// DMA MM2S 0 BD0 9
const unsigned int mem_dma_mm2s_0_bd0_9 = 0x00008C24;
// DMA MM2S 0 BD0 10
const unsigned int mem_dma_mm2s_0_bd0_10 = 0x00008C28;
// DMA MM2S 0 BD1 0
const unsigned int mem_dma_mm2s_0_bd1_0 = 0x00008C30;
// DMA MM2S 0 BD1 1
const unsigned int mem_dma_mm2s_0_bd1_1 = 0x00008C34;
// DMA MM2S 0 BD1 2
const unsigned int mem_dma_mm2s_0_bd1_2 = 0x00008C38;
// DMA MM2S 0 BD1 3
const unsigned int mem_dma_mm2s_0_bd1_3 = 0x00008C3C;
// DMA MM2S 0 BD1 4
const unsigned int mem_dma_mm2s_0_bd1_4 = 0x00008C40;
// DMA MM2S 0 BD1 5
const unsigned int mem_dma_mm2s_0_bd1_5 = 0x00008C44;
// DMA MM2S 0 BD1 6
const unsigned int mem_dma_mm2s_0_bd1_6 = 0x00008C48;
// DMA MM2S 0 BD1 7
const unsigned int mem_dma_mm2s_0_bd1_7 = 0x00008C4C;
// DMA MM2S 0 BD1 8
const unsigned int mem_dma_mm2s_0_bd1_8 = 0x00008C50;
// DMA MM2S 0 BD1 9
const unsigned int mem_dma_mm2s_0_bd1_9 = 0x00008C54;
// DMA MM2S 0 BD1 10
const unsigned int mem_dma_mm2s_0_bd1_10 = 0x00008C58;
// DMA MM2S 0 BD2 0
const unsigned int mem_dma_mm2s_0_bd2_0 = 0x00008C60;
// DMA MM2S 0 BD2 1
const unsigned int mem_dma_mm2s_0_bd2_1 = 0x00008C64;
// DMA MM2S 0 BD2 2
const unsigned int mem_dma_mm2s_0_bd2_2 = 0x00008C68;
// DMA MM2S 0 BD2 3
const unsigned int mem_dma_mm2s_0_bd2_3 = 0x00008C6C;
// DMA MM2S 0 BD2 4
const unsigned int mem_dma_mm2s_0_bd2_4 = 0x00008C70;
// DMA MM2S 0 BD2 5
const unsigned int mem_dma_mm2s_0_bd2_5 = 0x00008C74;
// DMA MM2S 0 BD2 6
const unsigned int mem_dma_mm2s_0_bd2_6 = 0x00008C78;
// DMA MM2S 0 BD2 7
const unsigned int mem_dma_mm2s_0_bd2_7 = 0x00008C7C;
// DMA MM2S 0 BD2 8
const unsigned int mem_dma_mm2s_0_bd2_8 = 0x00008C80;
// DMA MM2S 0 BD2 9
const unsigned int mem_dma_mm2s_0_bd2_9 = 0x00008C84;
// DMA MM2S 0 BD2 10
const unsigned int mem_dma_mm2s_0_bd2_10 = 0x00008C88;
// DMA MM2S 0 BD3 0
const unsigned int mem_dma_mm2s_0_bd3_0 = 0x00008C90;
// DMA MM2S 0 BD3 1
const unsigned int mem_dma_mm2s_0_bd3_1 = 0x00008C94;
// DMA MM2S 0 BD3 2
const unsigned int mem_dma_mm2s_0_bd3_2 = 0x00008C98;
// DMA MM2S 0 BD3 3
const unsigned int mem_dma_mm2s_0_bd3_3 = 0x00008C9C;
// DMA MM2S 0 BD3 4
const unsigned int mem_dma_mm2s_0_bd3_4 = 0x00008CA0;
// DMA MM2S 0 BD3 5
const unsigned int mem_dma_mm2s_0_bd3_5 = 0x00008CA4;
// DMA MM2S 0 BD3 6
const unsigned int mem_dma_mm2s_0_bd3_6 = 0x00008CA8;
// DMA MM2S 0 BD3 7
const unsigned int mem_dma_mm2s_0_bd3_7 = 0x00008CAC;
// DMA MM2S 0 BD3 8
const unsigned int mem_dma_mm2s_0_bd3_8 = 0x00008CB0;
// DMA MM2S 0 BD3 9
const unsigned int mem_dma_mm2s_0_bd3_9 = 0x00008CB4;
// DMA MM2S 0 BD3 10
const unsigned int mem_dma_mm2s_0_bd3_10 = 0x00008CB8;
// DMA MM2S 0 BD4 0
const unsigned int mem_dma_mm2s_0_bd4_0 = 0x00008CC0;
// DMA MM2S 0 BD4 1
const unsigned int mem_dma_mm2s_0_bd4_1 = 0x00008CC4;
// DMA MM2S 0 BD4 2
const unsigned int mem_dma_mm2s_0_bd4_2 = 0x00008CC8;
// DMA MM2S 0 BD4 3
const unsigned int mem_dma_mm2s_0_bd4_3 = 0x00008CCC;
// DMA MM2S 0 BD4 4
const unsigned int mem_dma_mm2s_0_bd4_4 = 0x00008CD0;
// DMA MM2S 0 BD4 5
const unsigned int mem_dma_mm2s_0_bd4_5 = 0x00008CD4;
// DMA MM2S 0 BD4 6
const unsigned int mem_dma_mm2s_0_bd4_6 = 0x00008CD8;
// DMA MM2S 0 BD4 7
const unsigned int mem_dma_mm2s_0_bd4_7 = 0x00008CDC;
// DMA MM2S 0 BD4 8
const unsigned int mem_dma_mm2s_0_bd4_8 = 0x00008CE0;
// DMA MM2S 0 BD4 9
const unsigned int mem_dma_mm2s_0_bd4_9 = 0x00008CE4;
// DMA MM2S 0 BD4 10
const unsigned int mem_dma_mm2s_0_bd4_10 = 0x00008CE8;
// DMA MM2S 0 BD5 0
const unsigned int mem_dma_mm2s_0_bd5_0 = 0x00008CF0;
// DMA MM2S 0 BD5 1
const unsigned int mem_dma_mm2s_0_bd5_1 = 0x00008CF4;
// DMA MM2S 0 BD5 2
const unsigned int mem_dma_mm2s_0_bd5_2 = 0x00008CF8;
// DMA MM2S 0 BD5 3
const unsigned int mem_dma_mm2s_0_bd5_3 = 0x00008CFC;
// DMA MM2S 0 BD5 4
const unsigned int mem_dma_mm2s_0_bd5_4 = 0x00008D00;
// DMA MM2S 0 BD5 5
const unsigned int mem_dma_mm2s_0_bd5_5 = 0x00008D04;
// DMA MM2S 0 BD5 6
const unsigned int mem_dma_mm2s_0_bd5_6 = 0x00008D08;
// DMA MM2S 0 BD5 7
const unsigned int mem_dma_mm2s_0_bd5_7 = 0x00008D0C;
// DMA MM2S 0 BD5 8
const unsigned int mem_dma_mm2s_0_bd5_8 = 0x00008D10;
// DMA MM2S 0 BD5 9
const unsigned int mem_dma_mm2s_0_bd5_9 = 0x00008D14;
// DMA MM2S 0 BD5 10
const unsigned int mem_dma_mm2s_0_bd5_10 = 0x00008D18;
// DMA MM2S 0 BD6 0
const unsigned int mem_dma_mm2s_0_bd6_0 = 0x00008D20;
// DMA MM2S 0 BD6 1
const unsigned int mem_dma_mm2s_0_bd6_1 = 0x00008D24;
// DMA MM2S 0 BD6 2
const unsigned int mem_dma_mm2s_0_bd6_2 = 0x00008D28;
// DMA MM2S 0 BD6 3
const unsigned int mem_dma_mm2s_0_bd6_3 = 0x00008D2C;
// DMA MM2S 0 BD6 4
const unsigned int mem_dma_mm2s_0_bd6_4 = 0x00008D30;
// DMA MM2S 0 BD6 5
const unsigned int mem_dma_mm2s_0_bd6_5 = 0x00008D34;
// DMA MM2S 0 BD6 6
const unsigned int mem_dma_mm2s_0_bd6_6 = 0x00008D38;
// DMA MM2S 0 BD6 7
const unsigned int mem_dma_mm2s_0_bd6_7 = 0x00008D3C;
// DMA MM2S 0 BD6 8
const unsigned int mem_dma_mm2s_0_bd6_8 = 0x00008D40;
// DMA MM2S 0 BD6 9
const unsigned int mem_dma_mm2s_0_bd6_9 = 0x00008D44;
// DMA MM2S 0 BD6 10
const unsigned int mem_dma_mm2s_0_bd6_10 = 0x00008D48;
// DMA MM2S 0 BD7 0
const unsigned int mem_dma_mm2s_0_bd7_0 = 0x00008D50;
// DMA MM2S 0 BD7 1
const unsigned int mem_dma_mm2s_0_bd7_1 = 0x00008D54;
// DMA MM2S 0 BD7 2
const unsigned int mem_dma_mm2s_0_bd7_2 = 0x00008D58;
// DMA MM2S 0 BD7 3
const unsigned int mem_dma_mm2s_0_bd7_3 = 0x00008D5C;
// DMA MM2S 0 BD7 4
const unsigned int mem_dma_mm2s_0_bd7_4 = 0x00008D60;
// DMA MM2S 0 BD7 5
const unsigned int mem_dma_mm2s_0_bd7_5 = 0x00008D64;
// DMA MM2S 0 BD7 6
const unsigned int mem_dma_mm2s_0_bd7_6 = 0x00008D68;
// DMA MM2S 0 BD7 7
const unsigned int mem_dma_mm2s_0_bd7_7 = 0x00008D6C;
// DMA MM2S 0 BD7 8
const unsigned int mem_dma_mm2s_0_bd7_8 = 0x00008D70;
// DMA MM2S 0 BD7 9
const unsigned int mem_dma_mm2s_0_bd7_9 = 0x00008D74;
// DMA MM2S 0 BD7 10
const unsigned int mem_dma_mm2s_0_bd7_10 = 0x00008D78;
// DMA MM2S 0 BD8 0
const unsigned int mem_dma_mm2s_0_bd8_0 = 0x00008D80;
// DMA MM2S 0 BD8 1
const unsigned int mem_dma_mm2s_0_bd8_1 = 0x00008D84;
// DMA MM2S 0 BD8 2
const unsigned int mem_dma_mm2s_0_bd8_2 = 0x00008D88;
// DMA MM2S 0 BD8 3
const unsigned int mem_dma_mm2s_0_bd8_3 = 0x00008D8C;
// DMA MM2S 0 BD8 4
const unsigned int mem_dma_mm2s_0_bd8_4 = 0x00008D90;
// DMA MM2S 0 BD8 5
const unsigned int mem_dma_mm2s_0_bd8_5 = 0x00008D94;
// DMA MM2S 0 BD8 6
const unsigned int mem_dma_mm2s_0_bd8_6 = 0x00008D98;
// DMA MM2S 0 BD8 7
const unsigned int mem_dma_mm2s_0_bd8_7 = 0x00008D9C;
// DMA MM2S 0 BD8 8
const unsigned int mem_dma_mm2s_0_bd8_8 = 0x00008DA0;
// DMA MM2S 0 BD8 9
const unsigned int mem_dma_mm2s_0_bd8_9 = 0x00008DA4;
// DMA MM2S 0 BD8 10
const unsigned int mem_dma_mm2s_0_bd8_10 = 0x00008DA8;
// DMA MM2S 0 BD9 0
const unsigned int mem_dma_mm2s_0_bd9_0 = 0x00008DB0;
// DMA MM2S 0 BD9 1
const unsigned int mem_dma_mm2s_0_bd9_1 = 0x00008DB4;
// DMA MM2S 0 BD9 2
const unsigned int mem_dma_mm2s_0_bd9_2 = 0x00008DB8;
// DMA MM2S 0 BD9 3
const unsigned int mem_dma_mm2s_0_bd9_3 = 0x00008DBC;
// DMA MM2S 0 BD9 4
const unsigned int mem_dma_mm2s_0_bd9_4 = 0x00008DC0;
// DMA MM2S 0 BD9 5
const unsigned int mem_dma_mm2s_0_bd9_5 = 0x00008DC4;
// DMA MM2S 0 BD9 6
const unsigned int mem_dma_mm2s_0_bd9_6 = 0x00008DC8;
// DMA MM2S 0 BD9 7
const unsigned int mem_dma_mm2s_0_bd9_7 = 0x00008DCC;
// DMA MM2S 0 BD9 8
const unsigned int mem_dma_mm2s_0_bd9_8 = 0x00008DD0;
// DMA MM2S 0 BD9 9
const unsigned int mem_dma_mm2s_0_bd9_9 = 0x00008DD4;
// DMA MM2S 0 BD9 10
const unsigned int mem_dma_mm2s_0_bd9_10 = 0x00008DD8;
// DMA MM2S 0 BD10 0
const unsigned int mem_dma_mm2s_0_bd10_0 = 0x00008DE0;
// DMA MM2S 0 BD10 1
const unsigned int mem_dma_mm2s_0_bd10_1 = 0x00008DE4;
// DMA MM2S 0 BD10 2
const unsigned int mem_dma_mm2s_0_bd10_2 = 0x00008DE8;
// DMA MM2S 0 BD10 3
const unsigned int mem_dma_mm2s_0_bd10_3 = 0x00008DEC;
// DMA MM2S 0 BD10 4
const unsigned int mem_dma_mm2s_0_bd10_4 = 0x00008DF0;
// DMA MM2S 0 BD10 5
const unsigned int mem_dma_mm2s_0_bd10_5 = 0x00008DF4;
// DMA MM2S 0 BD10 6
const unsigned int mem_dma_mm2s_0_bd10_6 = 0x00008DF8;
// DMA MM2S 0 BD10 7
const unsigned int mem_dma_mm2s_0_bd10_7 = 0x00008DFC;
// DMA MM2S 0 BD10 8
const unsigned int mem_dma_mm2s_0_bd10_8 = 0x00008E00;
// DMA MM2S 0 BD10 9
const unsigned int mem_dma_mm2s_0_bd10_9 = 0x00008E04;
// DMA MM2S 0 BD10 10
const unsigned int mem_dma_mm2s_0_bd10_10 = 0x00008E08;
// DMA MM2S 0 BD11 0
const unsigned int mem_dma_mm2s_0_bd11_0 = 0x00008E10;
// DMA MM2S 0 BD11 1
const unsigned int mem_dma_mm2s_0_bd11_1 = 0x00008E14;
// DMA MM2S 0 BD11 2
const unsigned int mem_dma_mm2s_0_bd11_2 = 0x00008E18;
// DMA MM2S 0 BD11 3
const unsigned int mem_dma_mm2s_0_bd11_3 = 0x00008E1C;
// DMA MM2S 0 BD11 4
const unsigned int mem_dma_mm2s_0_bd11_4 = 0x00008E20;
// DMA MM2S 0 BD11 5
const unsigned int mem_dma_mm2s_0_bd11_5 = 0x00008E24;
// DMA MM2S 0 BD11 6
const unsigned int mem_dma_mm2s_0_bd11_6 = 0x00008E28;
// DMA MM2S 0 BD11 7
const unsigned int mem_dma_mm2s_0_bd11_7 = 0x00008E2C;
// DMA MM2S 0 BD11 8
const unsigned int mem_dma_mm2s_0_bd11_8 = 0x00008E30;
// DMA MM2S 0 BD11 9
const unsigned int mem_dma_mm2s_0_bd11_9 = 0x00008E34;
// DMA MM2S 0 BD11 10
const unsigned int mem_dma_mm2s_0_bd11_10 = 0x00008E38;
// DMA MM2S 0 BD12 0
const unsigned int mem_dma_mm2s_0_bd12_0 = 0x00008E40;
// DMA MM2S 0 BD12 1
const unsigned int mem_dma_mm2s_0_bd12_1 = 0x00008E44;
// DMA MM2S 0 BD12 2
const unsigned int mem_dma_mm2s_0_bd12_2 = 0x00008E48;
// DMA MM2S 0 BD12 3
const unsigned int mem_dma_mm2s_0_bd12_3 = 0x00008E4C;
// DMA MM2S 0 BD12 4
const unsigned int mem_dma_mm2s_0_bd12_4 = 0x00008E50;
// DMA MM2S 0 BD12 5
const unsigned int mem_dma_mm2s_0_bd12_5 = 0x00008E54;
// DMA MM2S 0 BD12 6
const unsigned int mem_dma_mm2s_0_bd12_6 = 0x00008E58;
// DMA MM2S 0 BD12 7
const unsigned int mem_dma_mm2s_0_bd12_7 = 0x00008E5C;
// DMA MM2S 0 BD12 8
const unsigned int mem_dma_mm2s_0_bd12_8 = 0x00008E60;
// DMA MM2S 0 BD12 9
const unsigned int mem_dma_mm2s_0_bd12_9 = 0x00008E64;
// DMA MM2S 0 BD12 10
const unsigned int mem_dma_mm2s_0_bd12_10 = 0x00008E68;
// DMA MM2S 0 BD13 0
const unsigned int mem_dma_mm2s_0_bd13_0 = 0x00008E70;
// DMA MM2S 0 BD13 1
const unsigned int mem_dma_mm2s_0_bd13_1 = 0x00008E74;
// DMA MM2S 0 BD13 2
const unsigned int mem_dma_mm2s_0_bd13_2 = 0x00008E78;
// DMA MM2S 0 BD13 3
const unsigned int mem_dma_mm2s_0_bd13_3 = 0x00008E7C;
// DMA MM2S 0 BD13 4
const unsigned int mem_dma_mm2s_0_bd13_4 = 0x00008E80;
// DMA MM2S 0 BD13 5
const unsigned int mem_dma_mm2s_0_bd13_5 = 0x00008E84;
// DMA MM2S 0 BD13 6
const unsigned int mem_dma_mm2s_0_bd13_6 = 0x00008E88;
// DMA MM2S 0 BD13 7
const unsigned int mem_dma_mm2s_0_bd13_7 = 0x00008E8C;
// DMA MM2S 0 BD13 8
const unsigned int mem_dma_mm2s_0_bd13_8 = 0x00008E90;
// DMA MM2S 0 BD13 9
const unsigned int mem_dma_mm2s_0_bd13_9 = 0x00008E94;
// DMA MM2S 0 BD13 10
const unsigned int mem_dma_mm2s_0_bd13_10 = 0x00008E98;
// DMA MM2S 0 BD14 0
const unsigned int mem_dma_mm2s_0_bd14_0 = 0x00008EA0;
// DMA MM2S 0 BD14 1
const unsigned int mem_dma_mm2s_0_bd14_1 = 0x00008EA4;
// DMA MM2S 0 BD14 2
const unsigned int mem_dma_mm2s_0_bd14_2 = 0x00008EA8;
// DMA MM2S 0 BD14 3
const unsigned int mem_dma_mm2s_0_bd14_3 = 0x00008EAC;
// DMA MM2S 0 BD14 4
const unsigned int mem_dma_mm2s_0_bd14_4 = 0x00008EB0;
// DMA MM2S 0 BD14 5
const unsigned int mem_dma_mm2s_0_bd14_5 = 0x00008EB4;
// DMA MM2S 0 BD14 6
const unsigned int mem_dma_mm2s_0_bd14_6 = 0x00008EB8;
// DMA MM2S 0 BD14 7
const unsigned int mem_dma_mm2s_0_bd14_7 = 0x00008EBC;
// DMA MM2S 0 BD14 8
const unsigned int mem_dma_mm2s_0_bd14_8 = 0x00008EC0;
// DMA MM2S 0 BD14 9
const unsigned int mem_dma_mm2s_0_bd14_9 = 0x00008EC4;
// DMA MM2S 0 BD14 10
const unsigned int mem_dma_mm2s_0_bd14_10 = 0x00008EC8;
// DMA MM2S 0 BD15 0
const unsigned int mem_dma_mm2s_0_bd15_0 = 0x00008ED0;
// DMA MM2S 0 BD15 1
const unsigned int mem_dma_mm2s_0_bd15_1 = 0x00008ED4;
// DMA MM2S 0 BD15 2
const unsigned int mem_dma_mm2s_0_bd15_2 = 0x00008ED8;
// DMA MM2S 0 BD15 3
const unsigned int mem_dma_mm2s_0_bd15_3 = 0x00008EDC;
// DMA MM2S 0 BD15 4
const unsigned int mem_dma_mm2s_0_bd15_4 = 0x00008EE0;
// DMA MM2S 0 BD15 5
const unsigned int mem_dma_mm2s_0_bd15_5 = 0x00008EE4;
// DMA MM2S 0 BD15 6
const unsigned int mem_dma_mm2s_0_bd15_6 = 0x00008EE8;
// DMA MM2S 0 BD15 7
const unsigned int mem_dma_mm2s_0_bd15_7 = 0x00008EEC;
// DMA MM2S 0 BD15 8
const unsigned int mem_dma_mm2s_0_bd15_8 = 0x00008EF0;
// DMA MM2S 0 BD15 9
const unsigned int mem_dma_mm2s_0_bd15_9 = 0x00008EF4;
// DMA MM2S 0 BD15 10
const unsigned int mem_dma_mm2s_0_bd15_10 = 0x00008EF8;
// DMA MM2S 1 BD0 0
const unsigned int mem_dma_mm2s_1_bd0_0 = 0x00008F00;
// DMA MM2S 1 BD0 1
const unsigned int mem_dma_mm2s_1_bd0_1 = 0x00008F04;
// DMA MM2S 1 BD0 2
const unsigned int mem_dma_mm2s_1_bd0_2 = 0x00008F08;
// DMA MM2S 1 BD0 3
const unsigned int mem_dma_mm2s_1_bd0_3 = 0x00008F0C;
// DMA MM2S 1 BD0 4
const unsigned int mem_dma_mm2s_1_bd0_4 = 0x00008F10;
// DMA MM2S 1 BD0 5
const unsigned int mem_dma_mm2s_1_bd0_5 = 0x00008F14;
// DMA MM2S 1 BD0 6
const unsigned int mem_dma_mm2s_1_bd0_6 = 0x00008F18;
// DMA MM2S 1 BD0 7
const unsigned int mem_dma_mm2s_1_bd0_7 = 0x00008F1C;
// DMA MM2S 1 BD0 8
const unsigned int mem_dma_mm2s_1_bd0_8 = 0x00008F20;
// DMA MM2S 1 BD0 9
const unsigned int mem_dma_mm2s_1_bd0_9 = 0x00008F24;
// DMA MM2S 1 BD0 10
const unsigned int mem_dma_mm2s_1_bd0_10 = 0x00008F28;
// DMA MM2S 1 BD1 0
const unsigned int mem_dma_mm2s_1_bd1_0 = 0x00008F30;
// DMA MM2S 1 BD1 1
const unsigned int mem_dma_mm2s_1_bd1_1 = 0x00008F34;
// DMA MM2S 1 BD1 2
const unsigned int mem_dma_mm2s_1_bd1_2 = 0x00008F38;
// DMA MM2S 1 BD1 3
const unsigned int mem_dma_mm2s_1_bd1_3 = 0x00008F3C;
// DMA MM2S 1 BD1 4
const unsigned int mem_dma_mm2s_1_bd1_4 = 0x00008F40;
// DMA MM2S 1 BD1 5
const unsigned int mem_dma_mm2s_1_bd1_5 = 0x00008F44;
// DMA MM2S 1 BD1 6
const unsigned int mem_dma_mm2s_1_bd1_6 = 0x00008F48;
// DMA MM2S 1 BD1 7
const unsigned int mem_dma_mm2s_1_bd1_7 = 0x00008F4C;
// DMA MM2S 1 BD1 8
const unsigned int mem_dma_mm2s_1_bd1_8 = 0x00008F50;
// DMA MM2S 1 BD1 9
const unsigned int mem_dma_mm2s_1_bd1_9 = 0x00008F54;
// DMA MM2S 1 BD1 10
const unsigned int mem_dma_mm2s_1_bd1_10 = 0x00008F58;
// DMA MM2S 1 BD2 0
const unsigned int mem_dma_mm2s_1_bd2_0 = 0x00008F60;
// DMA MM2S 1 BD2 1
const unsigned int mem_dma_mm2s_1_bd2_1 = 0x00008F64;
// DMA MM2S 1 BD2 2
const unsigned int mem_dma_mm2s_1_bd2_2 = 0x00008F68;
// DMA MM2S 1 BD2 3
const unsigned int mem_dma_mm2s_1_bd2_3 = 0x00008F6C;
// DMA MM2S 1 BD2 4
const unsigned int mem_dma_mm2s_1_bd2_4 = 0x00008F70;
// DMA MM2S 1 BD2 5
const unsigned int mem_dma_mm2s_1_bd2_5 = 0x00008F74;
// DMA MM2S 1 BD2 6
const unsigned int mem_dma_mm2s_1_bd2_6 = 0x00008F78;
// DMA MM2S 1 BD2 7
const unsigned int mem_dma_mm2s_1_bd2_7 = 0x00008F7C;
// DMA MM2S 1 BD2 8
const unsigned int mem_dma_mm2s_1_bd2_8 = 0x00008F80;
// DMA MM2S 1 BD2 9
const unsigned int mem_dma_mm2s_1_bd2_9 = 0x00008F84;
// DMA MM2S 1 BD2 10
const unsigned int mem_dma_mm2s_1_bd2_10 = 0x00008F88;
// DMA MM2S 1 BD3 0
const unsigned int mem_dma_mm2s_1_bd3_0 = 0x00008F90;
// DMA MM2S 1 BD3 1
const unsigned int mem_dma_mm2s_1_bd3_1 = 0x00008F94;
// DMA MM2S 1 BD3 2
const unsigned int mem_dma_mm2s_1_bd3_2 = 0x00008F98;
// DMA MM2S 1 BD3 3
const unsigned int mem_dma_mm2s_1_bd3_3 = 0x00008F9C;
// DMA MM2S 1 BD3 4
const unsigned int mem_dma_mm2s_1_bd3_4 = 0x00008FA0;
// DMA MM2S 1 BD3 5
const unsigned int mem_dma_mm2s_1_bd3_5 = 0x00008FA4;
// DMA MM2S 1 BD3 6
const unsigned int mem_dma_mm2s_1_bd3_6 = 0x00008FA8;
// DMA MM2S 1 BD3 7
const unsigned int mem_dma_mm2s_1_bd3_7 = 0x00008FAC;
// DMA MM2S 1 BD3 8
const unsigned int mem_dma_mm2s_1_bd3_8 = 0x00008FB0;
// DMA MM2S 1 BD3 9
const unsigned int mem_dma_mm2s_1_bd3_9 = 0x00008FB4;
// DMA MM2S 1 BD3 10
const unsigned int mem_dma_mm2s_1_bd3_10 = 0x00008FB8;
// DMA MM2S 1 BD4 0
const unsigned int mem_dma_mm2s_1_bd4_0 = 0x00008FC0;
// DMA MM2S 1 BD4 1
const unsigned int mem_dma_mm2s_1_bd4_1 = 0x00008FC4;
// DMA MM2S 1 BD4 2
const unsigned int mem_dma_mm2s_1_bd4_2 = 0x00008FC8;
// DMA MM2S 1 BD4 3
const unsigned int mem_dma_mm2s_1_bd4_3 = 0x00008FCC;
// DMA MM2S 1 BD4 4
const unsigned int mem_dma_mm2s_1_bd4_4 = 0x00008FD0;
// DMA MM2S 1 BD4 5
const unsigned int mem_dma_mm2s_1_bd4_5 = 0x00008FD4;
// DMA MM2S 1 BD4 6
const unsigned int mem_dma_mm2s_1_bd4_6 = 0x00008FD8;
// DMA MM2S 1 BD4 7
const unsigned int mem_dma_mm2s_1_bd4_7 = 0x00008FDC;
// DMA MM2S 1 BD4 8
const unsigned int mem_dma_mm2s_1_bd4_8 = 0x00008FE0;
// DMA MM2S 1 BD4 9
const unsigned int mem_dma_mm2s_1_bd4_9 = 0x00008FE4;
// DMA MM2S 1 BD4 10
const unsigned int mem_dma_mm2s_1_bd4_10 = 0x00008FE8;
// DMA MM2S 1 BD5 0
const unsigned int mem_dma_mm2s_1_bd5_0 = 0x00008FF0;
// DMA MM2S 1 BD5 1
const unsigned int mem_dma_mm2s_1_bd5_1 = 0x00008FF4;
// DMA MM2S 1 BD5 2
const unsigned int mem_dma_mm2s_1_bd5_2 = 0x00008FF8;
// DMA MM2S 1 BD5 3
const unsigned int mem_dma_mm2s_1_bd5_3 = 0x00008FFC;
// DMA MM2S 1 BD5 4
const unsigned int mem_dma_mm2s_1_bd5_4 = 0x00009000;
// DMA MM2S 1 BD5 5
const unsigned int mem_dma_mm2s_1_bd5_5 = 0x00009004;
// DMA MM2S 1 BD5 6
const unsigned int mem_dma_mm2s_1_bd5_6 = 0x00009008;
// DMA MM2S 1 BD5 7
const unsigned int mem_dma_mm2s_1_bd5_7 = 0x0000900C;
// DMA MM2S 1 BD5 8
const unsigned int mem_dma_mm2s_1_bd5_8 = 0x00009010;
// DMA MM2S 1 BD5 9
const unsigned int mem_dma_mm2s_1_bd5_9 = 0x00009014;
// DMA MM2S 1 BD5 10
const unsigned int mem_dma_mm2s_1_bd5_10 = 0x00009018;
// DMA MM2S 1 BD6 0
const unsigned int mem_dma_mm2s_1_bd6_0 = 0x00009020;
// DMA MM2S 1 BD6 1
const unsigned int mem_dma_mm2s_1_bd6_1 = 0x00009024;
// DMA MM2S 1 BD6 2
const unsigned int mem_dma_mm2s_1_bd6_2 = 0x00009028;
// DMA MM2S 1 BD6 3
const unsigned int mem_dma_mm2s_1_bd6_3 = 0x0000902C;
// DMA MM2S 1 BD6 4
const unsigned int mem_dma_mm2s_1_bd6_4 = 0x00009030;
// DMA MM2S 1 BD6 5
const unsigned int mem_dma_mm2s_1_bd6_5 = 0x00009034;
// DMA MM2S 1 BD6 6
const unsigned int mem_dma_mm2s_1_bd6_6 = 0x00009038;
// DMA MM2S 1 BD6 7
const unsigned int mem_dma_mm2s_1_bd6_7 = 0x0000903C;
// DMA MM2S 1 BD6 8
const unsigned int mem_dma_mm2s_1_bd6_8 = 0x00009040;
// DMA MM2S 1 BD6 9
const unsigned int mem_dma_mm2s_1_bd6_9 = 0x00009044;
// DMA MM2S 1 BD6 10
const unsigned int mem_dma_mm2s_1_bd6_10 = 0x00009048;
// DMA MM2S 1 BD7 0
const unsigned int mem_dma_mm2s_1_bd7_0 = 0x00009050;
// DMA MM2S 1 BD7 1
const unsigned int mem_dma_mm2s_1_bd7_1 = 0x00009054;
// DMA MM2S 1 BD7 2
const unsigned int mem_dma_mm2s_1_bd7_2 = 0x00009058;
// DMA MM2S 1 BD7 3
const unsigned int mem_dma_mm2s_1_bd7_3 = 0x0000905C;
// DMA MM2S 1 BD7 4
const unsigned int mem_dma_mm2s_1_bd7_4 = 0x00009060;
// DMA MM2S 1 BD7 5
const unsigned int mem_dma_mm2s_1_bd7_5 = 0x00009064;
// DMA MM2S 1 BD7 6
const unsigned int mem_dma_mm2s_1_bd7_6 = 0x00009068;
// DMA MM2S 1 BD7 7
const unsigned int mem_dma_mm2s_1_bd7_7 = 0x0000906C;
// DMA MM2S 1 BD7 8
const unsigned int mem_dma_mm2s_1_bd7_8 = 0x00009070;
// DMA MM2S 1 BD7 9
const unsigned int mem_dma_mm2s_1_bd7_9 = 0x00009074;
// DMA MM2S 1 BD7 10
const unsigned int mem_dma_mm2s_1_bd7_10 = 0x00009078;
// DMA MM2S 1 BD8 0
const unsigned int mem_dma_mm2s_1_bd8_0 = 0x00009080;
// DMA MM2S 1 BD8 1
const unsigned int mem_dma_mm2s_1_bd8_1 = 0x00009084;
// DMA MM2S 1 BD8 2
const unsigned int mem_dma_mm2s_1_bd8_2 = 0x00009088;
// DMA MM2S 1 BD8 3
const unsigned int mem_dma_mm2s_1_bd8_3 = 0x0000908C;
// DMA MM2S 1 BD8 4
const unsigned int mem_dma_mm2s_1_bd8_4 = 0x00009090;
// DMA MM2S 1 BD8 5
const unsigned int mem_dma_mm2s_1_bd8_5 = 0x00009094;
// DMA MM2S 1 BD8 6
const unsigned int mem_dma_mm2s_1_bd8_6 = 0x00009098;
// DMA MM2S 1 BD8 7
const unsigned int mem_dma_mm2s_1_bd8_7 = 0x0000909C;
// DMA MM2S 1 BD8 8
const unsigned int mem_dma_mm2s_1_bd8_8 = 0x000090A0;
// DMA MM2S 1 BD8 9
const unsigned int mem_dma_mm2s_1_bd8_9 = 0x000090A4;
// DMA MM2S 1 BD8 10
const unsigned int mem_dma_mm2s_1_bd8_10 = 0x000090A8;
// DMA MM2S 1 BD9 0
const unsigned int mem_dma_mm2s_1_bd9_0 = 0x000090B0;
// DMA MM2S 1 BD9 1
const unsigned int mem_dma_mm2s_1_bd9_1 = 0x000090B4;
// DMA MM2S 1 BD9 2
const unsigned int mem_dma_mm2s_1_bd9_2 = 0x000090B8;
// DMA MM2S 1 BD9 3
const unsigned int mem_dma_mm2s_1_bd9_3 = 0x000090BC;
// DMA MM2S 1 BD9 4
const unsigned int mem_dma_mm2s_1_bd9_4 = 0x000090C0;
// DMA MM2S 1 BD9 5
const unsigned int mem_dma_mm2s_1_bd9_5 = 0x000090C4;
// DMA MM2S 1 BD9 6
const unsigned int mem_dma_mm2s_1_bd9_6 = 0x000090C8;
// DMA MM2S 1 BD9 7
const unsigned int mem_dma_mm2s_1_bd9_7 = 0x000090CC;
// DMA MM2S 1 BD9 8
const unsigned int mem_dma_mm2s_1_bd9_8 = 0x000090D0;
// DMA MM2S 1 BD9 9
const unsigned int mem_dma_mm2s_1_bd9_9 = 0x000090D4;
// DMA MM2S 1 BD9 10
const unsigned int mem_dma_mm2s_1_bd9_10 = 0x000090D8;
// DMA MM2S 1 BD10 0
const unsigned int mem_dma_mm2s_1_bd10_0 = 0x000090E0;
// DMA MM2S 1 BD10 1
const unsigned int mem_dma_mm2s_1_bd10_1 = 0x000090E4;
// DMA MM2S 1 BD10 2
const unsigned int mem_dma_mm2s_1_bd10_2 = 0x000090E8;
// DMA MM2S 1 BD10 3
const unsigned int mem_dma_mm2s_1_bd10_3 = 0x000090EC;
// DMA MM2S 1 BD10 4
const unsigned int mem_dma_mm2s_1_bd10_4 = 0x000090F0;
// DMA MM2S 1 BD10 5
const unsigned int mem_dma_mm2s_1_bd10_5 = 0x000090F4;
// DMA MM2S 1 BD10 6
const unsigned int mem_dma_mm2s_1_bd10_6 = 0x000090F8;
// DMA MM2S 1 BD10 7
const unsigned int mem_dma_mm2s_1_bd10_7 = 0x000090FC;
// DMA MM2S 1 BD10 8
const unsigned int mem_dma_mm2s_1_bd10_8 = 0x00009100;
// DMA MM2S 1 BD10 9
const unsigned int mem_dma_mm2s_1_bd10_9 = 0x00009104;
// DMA MM2S 1 BD10 10
const unsigned int mem_dma_mm2s_1_bd10_10 = 0x00009108;
// DMA MM2S 1 BD11 0
const unsigned int mem_dma_mm2s_1_bd11_0 = 0x00009110;
// DMA MM2S 1 BD11 1
const unsigned int mem_dma_mm2s_1_bd11_1 = 0x00009114;
// DMA MM2S 1 BD11 2
const unsigned int mem_dma_mm2s_1_bd11_2 = 0x00009118;
// DMA MM2S 1 BD11 3
const unsigned int mem_dma_mm2s_1_bd11_3 = 0x0000911C;
// DMA MM2S 1 BD11 4
const unsigned int mem_dma_mm2s_1_bd11_4 = 0x00009120;
// DMA MM2S 1 BD11 5
const unsigned int mem_dma_mm2s_1_bd11_5 = 0x00009124;
// DMA MM2S 1 BD11 6
const unsigned int mem_dma_mm2s_1_bd11_6 = 0x00009128;
// DMA MM2S 1 BD11 7
const unsigned int mem_dma_mm2s_1_bd11_7 = 0x0000912C;
// DMA MM2S 1 BD11 8
const unsigned int mem_dma_mm2s_1_bd11_8 = 0x00009130;
// DMA MM2S 1 BD11 9
const unsigned int mem_dma_mm2s_1_bd11_9 = 0x00009134;
// DMA MM2S 1 BD11 10
const unsigned int mem_dma_mm2s_1_bd11_10 = 0x00009138;
// DMA MM2S 1 BD12 0
const unsigned int mem_dma_mm2s_1_bd12_0 = 0x00009140;
// DMA MM2S 1 BD12 1
const unsigned int mem_dma_mm2s_1_bd12_1 = 0x00009144;
// DMA MM2S 1 BD12 2
const unsigned int mem_dma_mm2s_1_bd12_2 = 0x00009148;
// DMA MM2S 1 BD12 3
const unsigned int mem_dma_mm2s_1_bd12_3 = 0x0000914C;
// DMA MM2S 1 BD12 4
const unsigned int mem_dma_mm2s_1_bd12_4 = 0x00009150;
// DMA MM2S 1 BD12 5
const unsigned int mem_dma_mm2s_1_bd12_5 = 0x00009154;
// DMA MM2S 1 BD12 6
const unsigned int mem_dma_mm2s_1_bd12_6 = 0x00009158;
// DMA MM2S 1 BD12 7
const unsigned int mem_dma_mm2s_1_bd12_7 = 0x0000915C;
// DMA MM2S 1 BD12 8
const unsigned int mem_dma_mm2s_1_bd12_8 = 0x00009160;
// DMA MM2S 1 BD12 9
const unsigned int mem_dma_mm2s_1_bd12_9 = 0x00009164;
// DMA MM2S 1 BD12 10
const unsigned int mem_dma_mm2s_1_bd12_10 = 0x00009168;
// DMA MM2S 1 BD13 0
const unsigned int mem_dma_mm2s_1_bd13_0 = 0x00009170;
// DMA MM2S 1 BD13 1
const unsigned int mem_dma_mm2s_1_bd13_1 = 0x00009174;
// DMA MM2S 1 BD13 2
const unsigned int mem_dma_mm2s_1_bd13_2 = 0x00009178;
// DMA MM2S 1 BD13 3
const unsigned int mem_dma_mm2s_1_bd13_3 = 0x0000917C;
// DMA MM2S 1 BD13 4
const unsigned int mem_dma_mm2s_1_bd13_4 = 0x00009180;
// DMA MM2S 1 BD13 5
const unsigned int mem_dma_mm2s_1_bd13_5 = 0x00009184;
// DMA MM2S 1 BD13 6
const unsigned int mem_dma_mm2s_1_bd13_6 = 0x00009188;
// DMA MM2S 1 BD13 7
const unsigned int mem_dma_mm2s_1_bd13_7 = 0x0000918C;
// DMA MM2S 1 BD13 8
const unsigned int mem_dma_mm2s_1_bd13_8 = 0x00009190;
// DMA MM2S 1 BD13 9
const unsigned int mem_dma_mm2s_1_bd13_9 = 0x00009194;
// DMA MM2S 1 BD13 10
const unsigned int mem_dma_mm2s_1_bd13_10 = 0x00009198;
// DMA MM2S 1 BD14 0
const unsigned int mem_dma_mm2s_1_bd14_0 = 0x000091A0;
// DMA MM2S 1 BD14 1
const unsigned int mem_dma_mm2s_1_bd14_1 = 0x000091A4;
// DMA MM2S 1 BD14 2
const unsigned int mem_dma_mm2s_1_bd14_2 = 0x000091A8;
// DMA MM2S 1 BD14 3
const unsigned int mem_dma_mm2s_1_bd14_3 = 0x000091AC;
// DMA MM2S 1 BD14 4
const unsigned int mem_dma_mm2s_1_bd14_4 = 0x000091B0;
// DMA MM2S 1 BD14 5
const unsigned int mem_dma_mm2s_1_bd14_5 = 0x000091B4;
// DMA MM2S 1 BD14 6
const unsigned int mem_dma_mm2s_1_bd14_6 = 0x000091B8;
// DMA MM2S 1 BD14 7
const unsigned int mem_dma_mm2s_1_bd14_7 = 0x000091BC;
// DMA MM2S 1 BD14 8
const unsigned int mem_dma_mm2s_1_bd14_8 = 0x000091C0;
// DMA MM2S 1 BD14 9
const unsigned int mem_dma_mm2s_1_bd14_9 = 0x000091C4;
// DMA MM2S 1 BD14 10
const unsigned int mem_dma_mm2s_1_bd14_10 = 0x000091C8;
// DMA MM2S 1 BD15 0
const unsigned int mem_dma_mm2s_1_bd15_0 = 0x000091D0;
// DMA MM2S 1 BD15 1
const unsigned int mem_dma_mm2s_1_bd15_1 = 0x000091D4;
// DMA MM2S 1 BD15 2
const unsigned int mem_dma_mm2s_1_bd15_2 = 0x000091D8;
// DMA MM2S 1 BD15 3
const unsigned int mem_dma_mm2s_1_bd15_3 = 0x000091DC;
// DMA MM2S 1 BD15 4
const unsigned int mem_dma_mm2s_1_bd15_4 = 0x000091E0;
// DMA MM2S 1 BD15 5
const unsigned int mem_dma_mm2s_1_bd15_5 = 0x000091E4;
// DMA MM2S 1 BD15 6
const unsigned int mem_dma_mm2s_1_bd15_6 = 0x000091E8;
// DMA MM2S 1 BD15 7
const unsigned int mem_dma_mm2s_1_bd15_7 = 0x000091EC;
// DMA MM2S 1 BD15 8
const unsigned int mem_dma_mm2s_1_bd15_8 = 0x000091F0;
// DMA MM2S 1 BD15 9
const unsigned int mem_dma_mm2s_1_bd15_9 = 0x000091F4;
// DMA MM2S 1 BD15 10
const unsigned int mem_dma_mm2s_1_bd15_10 = 0x000091F8;
// DMA MM2S 2 BD0 0
const unsigned int mem_dma_mm2s_2_bd0_0 = 0x00009200;
// DMA MM2S 2 BD0 1
const unsigned int mem_dma_mm2s_2_bd0_1 = 0x00009204;
// DMA MM2S 2 BD0 2
const unsigned int mem_dma_mm2s_2_bd0_2 = 0x00009208;
// DMA MM2S 2 BD0 3
const unsigned int mem_dma_mm2s_2_bd0_3 = 0x0000920C;
// DMA MM2S 2 BD0 4
const unsigned int mem_dma_mm2s_2_bd0_4 = 0x00009210;
// DMA MM2S 2 BD0 5
const unsigned int mem_dma_mm2s_2_bd0_5 = 0x00009214;
// DMA MM2S 2 BD0 6
const unsigned int mem_dma_mm2s_2_bd0_6 = 0x00009218;
// DMA MM2S 2 BD0 7
const unsigned int mem_dma_mm2s_2_bd0_7 = 0x0000921C;
// DMA MM2S 2 BD0 8
const unsigned int mem_dma_mm2s_2_bd0_8 = 0x00009220;
// DMA MM2S 2 BD0 9
const unsigned int mem_dma_mm2s_2_bd0_9 = 0x00009224;
// DMA MM2S 2 BD0 10
const unsigned int mem_dma_mm2s_2_bd0_10 = 0x00009228;
// DMA MM2S 2 BD1 0
const unsigned int mem_dma_mm2s_2_bd1_0 = 0x00009230;
// DMA MM2S 2 BD1 1
const unsigned int mem_dma_mm2s_2_bd1_1 = 0x00009234;
// DMA MM2S 2 BD1 2
const unsigned int mem_dma_mm2s_2_bd1_2 = 0x00009238;
// DMA MM2S 2 BD1 3
const unsigned int mem_dma_mm2s_2_bd1_3 = 0x0000923C;
// DMA MM2S 2 BD1 4
const unsigned int mem_dma_mm2s_2_bd1_4 = 0x00009240;
// DMA MM2S 2 BD1 5
const unsigned int mem_dma_mm2s_2_bd1_5 = 0x00009244;
// DMA MM2S 2 BD1 6
const unsigned int mem_dma_mm2s_2_bd1_6 = 0x00009248;
// DMA MM2S 2 BD1 7
const unsigned int mem_dma_mm2s_2_bd1_7 = 0x0000924C;
// DMA MM2S 2 BD1 8
const unsigned int mem_dma_mm2s_2_bd1_8 = 0x00009250;
// DMA MM2S 2 BD1 9
const unsigned int mem_dma_mm2s_2_bd1_9 = 0x00009254;
// DMA MM2S 2 BD1 10
const unsigned int mem_dma_mm2s_2_bd1_10 = 0x00009258;
// DMA MM2S 2 BD2 0
const unsigned int mem_dma_mm2s_2_bd2_0 = 0x00009260;
// DMA MM2S 2 BD2 1
const unsigned int mem_dma_mm2s_2_bd2_1 = 0x00009264;
// DMA MM2S 2 BD2 2
const unsigned int mem_dma_mm2s_2_bd2_2 = 0x00009268;
// DMA MM2S 2 BD2 3
const unsigned int mem_dma_mm2s_2_bd2_3 = 0x0000926C;
// DMA MM2S 2 BD2 4
const unsigned int mem_dma_mm2s_2_bd2_4 = 0x00009270;
// DMA MM2S 2 BD2 5
const unsigned int mem_dma_mm2s_2_bd2_5 = 0x00009274;
// DMA MM2S 2 BD2 6
const unsigned int mem_dma_mm2s_2_bd2_6 = 0x00009278;
// DMA MM2S 2 BD2 7
const unsigned int mem_dma_mm2s_2_bd2_7 = 0x0000927C;
// DMA MM2S 2 BD2 8
const unsigned int mem_dma_mm2s_2_bd2_8 = 0x00009280;
// DMA MM2S 2 BD2 9
const unsigned int mem_dma_mm2s_2_bd2_9 = 0x00009284;
// DMA MM2S 2 BD2 10
const unsigned int mem_dma_mm2s_2_bd2_10 = 0x00009288;
// DMA MM2S 2 BD3 0
const unsigned int mem_dma_mm2s_2_bd3_0 = 0x00009290;
// DMA MM2S 2 BD3 1
const unsigned int mem_dma_mm2s_2_bd3_1 = 0x00009294;
// DMA MM2S 2 BD3 2
const unsigned int mem_dma_mm2s_2_bd3_2 = 0x00009298;
// DMA MM2S 2 BD3 3
const unsigned int mem_dma_mm2s_2_bd3_3 = 0x0000929C;
// DMA MM2S 2 BD3 4
const unsigned int mem_dma_mm2s_2_bd3_4 = 0x000092A0;
// DMA MM2S 2 BD3 5
const unsigned int mem_dma_mm2s_2_bd3_5 = 0x000092A4;
// DMA MM2S 2 BD3 6
const unsigned int mem_dma_mm2s_2_bd3_6 = 0x000092A8;
// DMA MM2S 2 BD3 7
const unsigned int mem_dma_mm2s_2_bd3_7 = 0x000092AC;
// DMA MM2S 2 BD3 8
const unsigned int mem_dma_mm2s_2_bd3_8 = 0x000092B0;
// DMA MM2S 2 BD3 9
const unsigned int mem_dma_mm2s_2_bd3_9 = 0x000092B4;
// DMA MM2S 2 BD3 10
const unsigned int mem_dma_mm2s_2_bd3_10 = 0x000092B8;
// DMA MM2S 2 BD4 0
const unsigned int mem_dma_mm2s_2_bd4_0 = 0x000092C0;
// DMA MM2S 2 BD4 1
const unsigned int mem_dma_mm2s_2_bd4_1 = 0x000092C4;
// DMA MM2S 2 BD4 2
const unsigned int mem_dma_mm2s_2_bd4_2 = 0x000092C8;
// DMA MM2S 2 BD4 3
const unsigned int mem_dma_mm2s_2_bd4_3 = 0x000092CC;
// DMA MM2S 2 BD4 4
const unsigned int mem_dma_mm2s_2_bd4_4 = 0x000092D0;
// DMA MM2S 2 BD4 5
const unsigned int mem_dma_mm2s_2_bd4_5 = 0x000092D4;
// DMA MM2S 2 BD4 6
const unsigned int mem_dma_mm2s_2_bd4_6 = 0x000092D8;
// DMA MM2S 2 BD4 7
const unsigned int mem_dma_mm2s_2_bd4_7 = 0x000092DC;
// DMA MM2S 2 BD4 8
const unsigned int mem_dma_mm2s_2_bd4_8 = 0x000092E0;
// DMA MM2S 2 BD4 9
const unsigned int mem_dma_mm2s_2_bd4_9 = 0x000092E4;
// DMA MM2S 2 BD4 10
const unsigned int mem_dma_mm2s_2_bd4_10 = 0x000092E8;
// DMA MM2S 2 BD5 0
const unsigned int mem_dma_mm2s_2_bd5_0 = 0x000092F0;
// DMA MM2S 2 BD5 1
const unsigned int mem_dma_mm2s_2_bd5_1 = 0x000092F4;
// DMA MM2S 2 BD5 2
const unsigned int mem_dma_mm2s_2_bd5_2 = 0x000092F8;
// DMA MM2S 2 BD5 3
const unsigned int mem_dma_mm2s_2_bd5_3 = 0x000092FC;
// DMA MM2S 2 BD5 4
const unsigned int mem_dma_mm2s_2_bd5_4 = 0x00009300;
// DMA MM2S 2 BD5 5
const unsigned int mem_dma_mm2s_2_bd5_5 = 0x00009304;
// DMA MM2S 2 BD5 6
const unsigned int mem_dma_mm2s_2_bd5_6 = 0x00009308;
// DMA MM2S 2 BD5 7
const unsigned int mem_dma_mm2s_2_bd5_7 = 0x0000930C;
// DMA MM2S 2 BD5 8
const unsigned int mem_dma_mm2s_2_bd5_8 = 0x00009310;
// DMA MM2S 2 BD5 9
const unsigned int mem_dma_mm2s_2_bd5_9 = 0x00009314;
// DMA MM2S 2 BD5 10
const unsigned int mem_dma_mm2s_2_bd5_10 = 0x00009318;
// DMA MM2S 2 BD6 0
const unsigned int mem_dma_mm2s_2_bd6_0 = 0x00009320;
// DMA MM2S 2 BD6 1
const unsigned int mem_dma_mm2s_2_bd6_1 = 0x00009324;
// DMA MM2S 2 BD6 2
const unsigned int mem_dma_mm2s_2_bd6_2 = 0x00009328;
// DMA MM2S 2 BD6 3
const unsigned int mem_dma_mm2s_2_bd6_3 = 0x0000932C;
// DMA MM2S 2 BD6 4
const unsigned int mem_dma_mm2s_2_bd6_4 = 0x00009330;
// DMA MM2S 2 BD6 5
const unsigned int mem_dma_mm2s_2_bd6_5 = 0x00009334;
// DMA MM2S 2 BD6 6
const unsigned int mem_dma_mm2s_2_bd6_6 = 0x00009338;
// DMA MM2S 2 BD6 7
const unsigned int mem_dma_mm2s_2_bd6_7 = 0x0000933C;
// DMA MM2S 2 BD6 8
const unsigned int mem_dma_mm2s_2_bd6_8 = 0x00009340;
// DMA MM2S 2 BD6 9
const unsigned int mem_dma_mm2s_2_bd6_9 = 0x00009344;
// DMA MM2S 2 BD6 10
const unsigned int mem_dma_mm2s_2_bd6_10 = 0x00009348;
// DMA MM2S 2 BD7 0
const unsigned int mem_dma_mm2s_2_bd7_0 = 0x00009350;
// DMA MM2S 2 BD7 1
const unsigned int mem_dma_mm2s_2_bd7_1 = 0x00009354;
// DMA MM2S 2 BD7 2
const unsigned int mem_dma_mm2s_2_bd7_2 = 0x00009358;
// DMA MM2S 2 BD7 3
const unsigned int mem_dma_mm2s_2_bd7_3 = 0x0000935C;
// DMA MM2S 2 BD7 4
const unsigned int mem_dma_mm2s_2_bd7_4 = 0x00009360;
// DMA MM2S 2 BD7 5
const unsigned int mem_dma_mm2s_2_bd7_5 = 0x00009364;
// DMA MM2S 2 BD7 6
const unsigned int mem_dma_mm2s_2_bd7_6 = 0x00009368;
// DMA MM2S 2 BD7 7
const unsigned int mem_dma_mm2s_2_bd7_7 = 0x0000936C;
// DMA MM2S 2 BD7 8
const unsigned int mem_dma_mm2s_2_bd7_8 = 0x00009370;
// DMA MM2S 2 BD7 9
const unsigned int mem_dma_mm2s_2_bd7_9 = 0x00009374;
// DMA MM2S 2 BD7 10
const unsigned int mem_dma_mm2s_2_bd7_10 = 0x00009378;
// DMA MM2S 2 BD8 0
const unsigned int mem_dma_mm2s_2_bd8_0 = 0x00009380;
// DMA MM2S 2 BD8 1
const unsigned int mem_dma_mm2s_2_bd8_1 = 0x00009384;
// DMA MM2S 2 BD8 2
const unsigned int mem_dma_mm2s_2_bd8_2 = 0x00009388;
// DMA MM2S 2 BD8 3
const unsigned int mem_dma_mm2s_2_bd8_3 = 0x0000938C;
// DMA MM2S 2 BD8 4
const unsigned int mem_dma_mm2s_2_bd8_4 = 0x00009390;
// DMA MM2S 2 BD8 5
const unsigned int mem_dma_mm2s_2_bd8_5 = 0x00009394;
// DMA MM2S 2 BD8 6
const unsigned int mem_dma_mm2s_2_bd8_6 = 0x00009398;
// DMA MM2S 2 BD8 7
const unsigned int mem_dma_mm2s_2_bd8_7 = 0x0000939C;
// DMA MM2S 2 BD8 8
const unsigned int mem_dma_mm2s_2_bd8_8 = 0x000093A0;
// DMA MM2S 2 BD8 9
const unsigned int mem_dma_mm2s_2_bd8_9 = 0x000093A4;
// DMA MM2S 2 BD8 10
const unsigned int mem_dma_mm2s_2_bd8_10 = 0x000093A8;
// DMA MM2S 2 BD9 0
const unsigned int mem_dma_mm2s_2_bd9_0 = 0x000093B0;
// DMA MM2S 2 BD9 1
const unsigned int mem_dma_mm2s_2_bd9_1 = 0x000093B4;
// DMA MM2S 2 BD9 2
const unsigned int mem_dma_mm2s_2_bd9_2 = 0x000093B8;
// DMA MM2S 2 BD9 3
const unsigned int mem_dma_mm2s_2_bd9_3 = 0x000093BC;
// DMA MM2S 2 BD9 4
const unsigned int mem_dma_mm2s_2_bd9_4 = 0x000093C0;
// DMA MM2S 2 BD9 5
const unsigned int mem_dma_mm2s_2_bd9_5 = 0x000093C4;
// DMA MM2S 2 BD9 6
const unsigned int mem_dma_mm2s_2_bd9_6 = 0x000093C8;
// DMA MM2S 2 BD9 7
const unsigned int mem_dma_mm2s_2_bd9_7 = 0x000093CC;
// DMA MM2S 2 BD9 8
const unsigned int mem_dma_mm2s_2_bd9_8 = 0x000093D0;
// DMA MM2S 2 BD9 9
const unsigned int mem_dma_mm2s_2_bd9_9 = 0x000093D4;
// DMA MM2S 2 BD9 10
const unsigned int mem_dma_mm2s_2_bd9_10 = 0x000093D8;
// DMA MM2S 2 BD10 0
const unsigned int mem_dma_mm2s_2_bd10_0 = 0x000093E0;
// DMA MM2S 2 BD10 1
const unsigned int mem_dma_mm2s_2_bd10_1 = 0x000093E4;
// DMA MM2S 2 BD10 2
const unsigned int mem_dma_mm2s_2_bd10_2 = 0x000093E8;
// DMA MM2S 2 BD10 3
const unsigned int mem_dma_mm2s_2_bd10_3 = 0x000093EC;
// DMA MM2S 2 BD10 4
const unsigned int mem_dma_mm2s_2_bd10_4 = 0x000093F0;
// DMA MM2S 2 BD10 5
const unsigned int mem_dma_mm2s_2_bd10_5 = 0x000093F4;
// DMA MM2S 2 BD10 6
const unsigned int mem_dma_mm2s_2_bd10_6 = 0x000093F8;
// DMA MM2S 2 BD10 7
const unsigned int mem_dma_mm2s_2_bd10_7 = 0x000093FC;
// DMA MM2S 2 BD10 8
const unsigned int mem_dma_mm2s_2_bd10_8 = 0x00009400;
// DMA MM2S 2 BD10 9
const unsigned int mem_dma_mm2s_2_bd10_9 = 0x00009404;
// DMA MM2S 2 BD10 10
const unsigned int mem_dma_mm2s_2_bd10_10 = 0x00009408;
// DMA MM2S 2 BD11 0
const unsigned int mem_dma_mm2s_2_bd11_0 = 0x00009410;
// DMA MM2S 2 BD11 1
const unsigned int mem_dma_mm2s_2_bd11_1 = 0x00009414;
// DMA MM2S 2 BD11 2
const unsigned int mem_dma_mm2s_2_bd11_2 = 0x00009418;
// DMA MM2S 2 BD11 3
const unsigned int mem_dma_mm2s_2_bd11_3 = 0x0000941C;
// DMA MM2S 2 BD11 4
const unsigned int mem_dma_mm2s_2_bd11_4 = 0x00009420;
// DMA MM2S 2 BD11 5
const unsigned int mem_dma_mm2s_2_bd11_5 = 0x00009424;
// DMA MM2S 2 BD11 6
const unsigned int mem_dma_mm2s_2_bd11_6 = 0x00009428;
// DMA MM2S 2 BD11 7
const unsigned int mem_dma_mm2s_2_bd11_7 = 0x0000942C;
// DMA MM2S 2 BD11 8
const unsigned int mem_dma_mm2s_2_bd11_8 = 0x00009430;
// DMA MM2S 2 BD11 9
const unsigned int mem_dma_mm2s_2_bd11_9 = 0x00009434;
// DMA MM2S 2 BD11 10
const unsigned int mem_dma_mm2s_2_bd11_10 = 0x00009438;
// DMA MM2S 2 BD12 0
const unsigned int mem_dma_mm2s_2_bd12_0 = 0x00009440;
// DMA MM2S 2 BD12 1
const unsigned int mem_dma_mm2s_2_bd12_1 = 0x00009444;
// DMA MM2S 2 BD12 2
const unsigned int mem_dma_mm2s_2_bd12_2 = 0x00009448;
// DMA MM2S 2 BD12 3
const unsigned int mem_dma_mm2s_2_bd12_3 = 0x0000944C;
// DMA MM2S 2 BD12 4
const unsigned int mem_dma_mm2s_2_bd12_4 = 0x00009450;
// DMA MM2S 2 BD12 5
const unsigned int mem_dma_mm2s_2_bd12_5 = 0x00009454;
// DMA MM2S 2 BD12 6
const unsigned int mem_dma_mm2s_2_bd12_6 = 0x00009458;
// DMA MM2S 2 BD12 7
const unsigned int mem_dma_mm2s_2_bd12_7 = 0x0000945C;
// DMA MM2S 2 BD12 8
const unsigned int mem_dma_mm2s_2_bd12_8 = 0x00009460;
// DMA MM2S 2 BD12 9
const unsigned int mem_dma_mm2s_2_bd12_9 = 0x00009464;
// DMA MM2S 2 BD12 10
const unsigned int mem_dma_mm2s_2_bd12_10 = 0x00009468;
// DMA MM2S 2 BD13 0
const unsigned int mem_dma_mm2s_2_bd13_0 = 0x00009470;
// DMA MM2S 2 BD13 1
const unsigned int mem_dma_mm2s_2_bd13_1 = 0x00009474;
// DMA MM2S 2 BD13 2
const unsigned int mem_dma_mm2s_2_bd13_2 = 0x00009478;
// DMA MM2S 2 BD13 3
const unsigned int mem_dma_mm2s_2_bd13_3 = 0x0000947C;
// DMA MM2S 2 BD13 4
const unsigned int mem_dma_mm2s_2_bd13_4 = 0x00009480;
// DMA MM2S 2 BD13 5
const unsigned int mem_dma_mm2s_2_bd13_5 = 0x00009484;
// DMA MM2S 2 BD13 6
const unsigned int mem_dma_mm2s_2_bd13_6 = 0x00009488;
// DMA MM2S 2 BD13 7
const unsigned int mem_dma_mm2s_2_bd13_7 = 0x0000948C;
// DMA MM2S 2 BD13 8
const unsigned int mem_dma_mm2s_2_bd13_8 = 0x00009490;
// DMA MM2S 2 BD13 9
const unsigned int mem_dma_mm2s_2_bd13_9 = 0x00009494;
// DMA MM2S 2 BD13 10
const unsigned int mem_dma_mm2s_2_bd13_10 = 0x00009498;
// DMA MM2S 2 BD14 0
const unsigned int mem_dma_mm2s_2_bd14_0 = 0x000094A0;
// DMA MM2S 2 BD14 1
const unsigned int mem_dma_mm2s_2_bd14_1 = 0x000094A4;
// DMA MM2S 2 BD14 2
const unsigned int mem_dma_mm2s_2_bd14_2 = 0x000094A8;
// DMA MM2S 2 BD14 3
const unsigned int mem_dma_mm2s_2_bd14_3 = 0x000094AC;
// DMA MM2S 2 BD14 4
const unsigned int mem_dma_mm2s_2_bd14_4 = 0x000094B0;
// DMA MM2S 2 BD14 5
const unsigned int mem_dma_mm2s_2_bd14_5 = 0x000094B4;
// DMA MM2S 2 BD14 6
const unsigned int mem_dma_mm2s_2_bd14_6 = 0x000094B8;
// DMA MM2S 2 BD14 7
const unsigned int mem_dma_mm2s_2_bd14_7 = 0x000094BC;
// DMA MM2S 2 BD14 8
const unsigned int mem_dma_mm2s_2_bd14_8 = 0x000094C0;
// DMA MM2S 2 BD14 9
const unsigned int mem_dma_mm2s_2_bd14_9 = 0x000094C4;
// DMA MM2S 2 BD14 10
const unsigned int mem_dma_mm2s_2_bd14_10 = 0x000094C8;
// DMA MM2S 2 BD15 0
const unsigned int mem_dma_mm2s_2_bd15_0 = 0x000094D0;
// DMA MM2S 2 BD15 1
const unsigned int mem_dma_mm2s_2_bd15_1 = 0x000094D4;
// DMA MM2S 2 BD15 2
const unsigned int mem_dma_mm2s_2_bd15_2 = 0x000094D8;
// DMA MM2S 2 BD15 3
const unsigned int mem_dma_mm2s_2_bd15_3 = 0x000094DC;
// DMA MM2S 2 BD15 4
const unsigned int mem_dma_mm2s_2_bd15_4 = 0x000094E0;
// DMA MM2S 2 BD15 5
const unsigned int mem_dma_mm2s_2_bd15_5 = 0x000094E4;
// DMA MM2S 2 BD15 6
const unsigned int mem_dma_mm2s_2_bd15_6 = 0x000094E8;
// DMA MM2S 2 BD15 7
const unsigned int mem_dma_mm2s_2_bd15_7 = 0x000094EC;
// DMA MM2S 2 BD15 8
const unsigned int mem_dma_mm2s_2_bd15_8 = 0x000094F0;
// DMA MM2S 2 BD15 9
const unsigned int mem_dma_mm2s_2_bd15_9 = 0x000094F4;
// DMA MM2S 2 BD15 10
const unsigned int mem_dma_mm2s_2_bd15_10 = 0x000094F8;
// DMA MM2S 3 BD0 0
const unsigned int mem_dma_mm2s_3_bd0_0 = 0x00009500;
// DMA MM2S 3 BD0 1
const unsigned int mem_dma_mm2s_3_bd0_1 = 0x00009504;
// DMA MM2S 3 BD0 2
const unsigned int mem_dma_mm2s_3_bd0_2 = 0x00009508;
// DMA MM2S 3 BD0 3
const unsigned int mem_dma_mm2s_3_bd0_3 = 0x0000950C;
// DMA MM2S 3 BD0 4
const unsigned int mem_dma_mm2s_3_bd0_4 = 0x00009510;
// DMA MM2S 3 BD0 5
const unsigned int mem_dma_mm2s_3_bd0_5 = 0x00009514;
// DMA MM2S 3 BD0 6
const unsigned int mem_dma_mm2s_3_bd0_6 = 0x00009518;
// DMA MM2S 3 BD0 7
const unsigned int mem_dma_mm2s_3_bd0_7 = 0x0000951C;
// DMA MM2S 3 BD0 8
const unsigned int mem_dma_mm2s_3_bd0_8 = 0x00009520;
// DMA MM2S 3 BD0 9
const unsigned int mem_dma_mm2s_3_bd0_9 = 0x00009524;
// DMA MM2S 3 BD0 10
const unsigned int mem_dma_mm2s_3_bd0_10 = 0x00009528;
// DMA MM2S 3 BD1 0
const unsigned int mem_dma_mm2s_3_bd1_0 = 0x00009530;
// DMA MM2S 3 BD1 1
const unsigned int mem_dma_mm2s_3_bd1_1 = 0x00009534;
// DMA MM2S 3 BD1 2
const unsigned int mem_dma_mm2s_3_bd1_2 = 0x00009538;
// DMA MM2S 3 BD1 3
const unsigned int mem_dma_mm2s_3_bd1_3 = 0x0000953C;
// DMA MM2S 3 BD1 4
const unsigned int mem_dma_mm2s_3_bd1_4 = 0x00009540;
// DMA MM2S 3 BD1 5
const unsigned int mem_dma_mm2s_3_bd1_5 = 0x00009544;
// DMA MM2S 3 BD1 6
const unsigned int mem_dma_mm2s_3_bd1_6 = 0x00009548;
// DMA MM2S 3 BD1 7
const unsigned int mem_dma_mm2s_3_bd1_7 = 0x0000954C;
// DMA MM2S 3 BD1 8
const unsigned int mem_dma_mm2s_3_bd1_8 = 0x00009550;
// DMA MM2S 3 BD1 9
const unsigned int mem_dma_mm2s_3_bd1_9 = 0x00009554;
// DMA MM2S 3 BD1 10
const unsigned int mem_dma_mm2s_3_bd1_10 = 0x00009558;
// DMA MM2S 3 BD2 0
const unsigned int mem_dma_mm2s_3_bd2_0 = 0x00009560;
// DMA MM2S 3 BD2 1
const unsigned int mem_dma_mm2s_3_bd2_1 = 0x00009564;
// DMA MM2S 3 BD2 2
const unsigned int mem_dma_mm2s_3_bd2_2 = 0x00009568;
// DMA MM2S 3 BD2 3
const unsigned int mem_dma_mm2s_3_bd2_3 = 0x0000956C;
// DMA MM2S 3 BD2 4
const unsigned int mem_dma_mm2s_3_bd2_4 = 0x00009570;
// DMA MM2S 3 BD2 5
const unsigned int mem_dma_mm2s_3_bd2_5 = 0x00009574;
// DMA MM2S 3 BD2 6
const unsigned int mem_dma_mm2s_3_bd2_6 = 0x00009578;
// DMA MM2S 3 BD2 7
const unsigned int mem_dma_mm2s_3_bd2_7 = 0x0000957C;
// DMA MM2S 3 BD2 8
const unsigned int mem_dma_mm2s_3_bd2_8 = 0x00009580;
// DMA MM2S 3 BD2 9
const unsigned int mem_dma_mm2s_3_bd2_9 = 0x00009584;
// DMA MM2S 3 BD2 10
const unsigned int mem_dma_mm2s_3_bd2_10 = 0x00009588;
// DMA MM2S 3 BD3 0
const unsigned int mem_dma_mm2s_3_bd3_0 = 0x00009590;
// DMA MM2S 3 BD3 1
const unsigned int mem_dma_mm2s_3_bd3_1 = 0x00009594;
// DMA MM2S 3 BD3 2
const unsigned int mem_dma_mm2s_3_bd3_2 = 0x00009598;
// DMA MM2S 3 BD3 3
const unsigned int mem_dma_mm2s_3_bd3_3 = 0x0000959C;
// DMA MM2S 3 BD3 4
const unsigned int mem_dma_mm2s_3_bd3_4 = 0x000095A0;
// DMA MM2S 3 BD3 5
const unsigned int mem_dma_mm2s_3_bd3_5 = 0x000095A4;
// DMA MM2S 3 BD3 6
const unsigned int mem_dma_mm2s_3_bd3_6 = 0x000095A8;
// DMA MM2S 3 BD3 7
const unsigned int mem_dma_mm2s_3_bd3_7 = 0x000095AC;
// DMA MM2S 3 BD3 8
const unsigned int mem_dma_mm2s_3_bd3_8 = 0x000095B0;
// DMA MM2S 3 BD3 9
const unsigned int mem_dma_mm2s_3_bd3_9 = 0x000095B4;
// DMA MM2S 3 BD3 10
const unsigned int mem_dma_mm2s_3_bd3_10 = 0x000095B8;
// DMA MM2S 3 BD4 0
const unsigned int mem_dma_mm2s_3_bd4_0 = 0x000095C0;
// DMA MM2S 3 BD4 1
const unsigned int mem_dma_mm2s_3_bd4_1 = 0x000095C4;
// DMA MM2S 3 BD4 2
const unsigned int mem_dma_mm2s_3_bd4_2 = 0x000095C8;
// DMA MM2S 3 BD4 3
const unsigned int mem_dma_mm2s_3_bd4_3 = 0x000095CC;
// DMA MM2S 3 BD4 4
const unsigned int mem_dma_mm2s_3_bd4_4 = 0x000095D0;
// DMA MM2S 3 BD4 5
const unsigned int mem_dma_mm2s_3_bd4_5 = 0x000095D4;
// DMA MM2S 3 BD4 6
const unsigned int mem_dma_mm2s_3_bd4_6 = 0x000095D8;
// DMA MM2S 3 BD4 7
const unsigned int mem_dma_mm2s_3_bd4_7 = 0x000095DC;
// DMA MM2S 3 BD4 8
const unsigned int mem_dma_mm2s_3_bd4_8 = 0x000095E0;
// DMA MM2S 3 BD4 9
const unsigned int mem_dma_mm2s_3_bd4_9 = 0x000095E4;
// DMA MM2S 3 BD4 10
const unsigned int mem_dma_mm2s_3_bd4_10 = 0x000095E8;
// DMA MM2S 3 BD5 0
const unsigned int mem_dma_mm2s_3_bd5_0 = 0x000095F0;
// DMA MM2S 3 BD5 1
const unsigned int mem_dma_mm2s_3_bd5_1 = 0x000095F4;
// DMA MM2S 3 BD5 2
const unsigned int mem_dma_mm2s_3_bd5_2 = 0x000095F8;
// DMA MM2S 3 BD5 3
const unsigned int mem_dma_mm2s_3_bd5_3 = 0x000095FC;
// DMA MM2S 3 BD5 4
const unsigned int mem_dma_mm2s_3_bd5_4 = 0x00009600;
// DMA MM2S 3 BD5 5
const unsigned int mem_dma_mm2s_3_bd5_5 = 0x00009604;
// DMA MM2S 3 BD5 6
const unsigned int mem_dma_mm2s_3_bd5_6 = 0x00009608;
// DMA MM2S 3 BD5 7
const unsigned int mem_dma_mm2s_3_bd5_7 = 0x0000960C;
// DMA MM2S 3 BD5 8
const unsigned int mem_dma_mm2s_3_bd5_8 = 0x00009610;
// DMA MM2S 3 BD5 9
const unsigned int mem_dma_mm2s_3_bd5_9 = 0x00009614;
// DMA MM2S 3 BD5 10
const unsigned int mem_dma_mm2s_3_bd5_10 = 0x00009618;
// DMA MM2S 3 BD6 0
const unsigned int mem_dma_mm2s_3_bd6_0 = 0x00009620;
// DMA MM2S 3 BD6 1
const unsigned int mem_dma_mm2s_3_bd6_1 = 0x00009624;
// DMA MM2S 3 BD6 2
const unsigned int mem_dma_mm2s_3_bd6_2 = 0x00009628;
// DMA MM2S 3 BD6 3
const unsigned int mem_dma_mm2s_3_bd6_3 = 0x0000962C;
// DMA MM2S 3 BD6 4
const unsigned int mem_dma_mm2s_3_bd6_4 = 0x00009630;
// DMA MM2S 3 BD6 5
const unsigned int mem_dma_mm2s_3_bd6_5 = 0x00009634;
// DMA MM2S 3 BD6 6
const unsigned int mem_dma_mm2s_3_bd6_6 = 0x00009638;
// DMA MM2S 3 BD6 7
const unsigned int mem_dma_mm2s_3_bd6_7 = 0x0000963C;
// DMA MM2S 3 BD6 8
const unsigned int mem_dma_mm2s_3_bd6_8 = 0x00009640;
// DMA MM2S 3 BD6 9
const unsigned int mem_dma_mm2s_3_bd6_9 = 0x00009644;
// DMA MM2S 3 BD6 10
const unsigned int mem_dma_mm2s_3_bd6_10 = 0x00009648;
// DMA MM2S 3 BD7 0
const unsigned int mem_dma_mm2s_3_bd7_0 = 0x00009650;
// DMA MM2S 3 BD7 1
const unsigned int mem_dma_mm2s_3_bd7_1 = 0x00009654;
// DMA MM2S 3 BD7 2
const unsigned int mem_dma_mm2s_3_bd7_2 = 0x00009658;
// DMA MM2S 3 BD7 3
const unsigned int mem_dma_mm2s_3_bd7_3 = 0x0000965C;
// DMA MM2S 3 BD7 4
const unsigned int mem_dma_mm2s_3_bd7_4 = 0x00009660;
// DMA MM2S 3 BD7 5
const unsigned int mem_dma_mm2s_3_bd7_5 = 0x00009664;
// DMA MM2S 3 BD7 6
const unsigned int mem_dma_mm2s_3_bd7_6 = 0x00009668;
// DMA MM2S 3 BD7 7
const unsigned int mem_dma_mm2s_3_bd7_7 = 0x0000966C;
// DMA MM2S 3 BD7 8
const unsigned int mem_dma_mm2s_3_bd7_8 = 0x00009670;
// DMA MM2S 3 BD7 9
const unsigned int mem_dma_mm2s_3_bd7_9 = 0x00009674;
// DMA MM2S 3 BD7 10
const unsigned int mem_dma_mm2s_3_bd7_10 = 0x00009678;
// DMA MM2S 3 BD8 0
const unsigned int mem_dma_mm2s_3_bd8_0 = 0x00009680;
// DMA MM2S 3 BD8 1
const unsigned int mem_dma_mm2s_3_bd8_1 = 0x00009684;
// DMA MM2S 3 BD8 2
const unsigned int mem_dma_mm2s_3_bd8_2 = 0x00009688;
// DMA MM2S 3 BD8 3
const unsigned int mem_dma_mm2s_3_bd8_3 = 0x0000968C;
// DMA MM2S 3 BD8 4
const unsigned int mem_dma_mm2s_3_bd8_4 = 0x00009690;
// DMA MM2S 3 BD8 5
const unsigned int mem_dma_mm2s_3_bd8_5 = 0x00009694;
// DMA MM2S 3 BD8 6
const unsigned int mem_dma_mm2s_3_bd8_6 = 0x00009698;
// DMA MM2S 3 BD8 7
const unsigned int mem_dma_mm2s_3_bd8_7 = 0x0000969C;
// DMA MM2S 3 BD8 8
const unsigned int mem_dma_mm2s_3_bd8_8 = 0x000096A0;
// DMA MM2S 3 BD8 9
const unsigned int mem_dma_mm2s_3_bd8_9 = 0x000096A4;
// DMA MM2S 3 BD8 10
const unsigned int mem_dma_mm2s_3_bd8_10 = 0x000096A8;
// DMA MM2S 3 BD9 0
const unsigned int mem_dma_mm2s_3_bd9_0 = 0x000096B0;
// DMA MM2S 3 BD9 1
const unsigned int mem_dma_mm2s_3_bd9_1 = 0x000096B4;
// DMA MM2S 3 BD9 2
const unsigned int mem_dma_mm2s_3_bd9_2 = 0x000096B8;
// DMA MM2S 3 BD9 3
const unsigned int mem_dma_mm2s_3_bd9_3 = 0x000096BC;
// DMA MM2S 3 BD9 4
const unsigned int mem_dma_mm2s_3_bd9_4 = 0x000096C0;
// DMA MM2S 3 BD9 5
const unsigned int mem_dma_mm2s_3_bd9_5 = 0x000096C4;
// DMA MM2S 3 BD9 6
const unsigned int mem_dma_mm2s_3_bd9_6 = 0x000096C8;
// DMA MM2S 3 BD9 7
const unsigned int mem_dma_mm2s_3_bd9_7 = 0x000096CC;
// DMA MM2S 3 BD9 8
const unsigned int mem_dma_mm2s_3_bd9_8 = 0x000096D0;
// DMA MM2S 3 BD9 9
const unsigned int mem_dma_mm2s_3_bd9_9 = 0x000096D4;
// DMA MM2S 3 BD9 10
const unsigned int mem_dma_mm2s_3_bd9_10 = 0x000096D8;
// DMA MM2S 3 BD10 0
const unsigned int mem_dma_mm2s_3_bd10_0 = 0x000096E0;
// DMA MM2S 3 BD10 1
const unsigned int mem_dma_mm2s_3_bd10_1 = 0x000096E4;
// DMA MM2S 3 BD10 2
const unsigned int mem_dma_mm2s_3_bd10_2 = 0x000096E8;
// DMA MM2S 3 BD10 3
const unsigned int mem_dma_mm2s_3_bd10_3 = 0x000096EC;
// DMA MM2S 3 BD10 4
const unsigned int mem_dma_mm2s_3_bd10_4 = 0x000096F0;
// DMA MM2S 3 BD10 5
const unsigned int mem_dma_mm2s_3_bd10_5 = 0x000096F4;
// DMA MM2S 3 BD10 6
const unsigned int mem_dma_mm2s_3_bd10_6 = 0x000096F8;
// DMA MM2S 3 BD10 7
const unsigned int mem_dma_mm2s_3_bd10_7 = 0x000096FC;
// DMA MM2S 3 BD10 8
const unsigned int mem_dma_mm2s_3_bd10_8 = 0x00009700;
// DMA MM2S 3 BD10 9
const unsigned int mem_dma_mm2s_3_bd10_9 = 0x00009704;
// DMA MM2S 3 BD10 10
const unsigned int mem_dma_mm2s_3_bd10_10 = 0x00009708;
// DMA MM2S 3 BD11 0
const unsigned int mem_dma_mm2s_3_bd11_0 = 0x00009710;
// DMA MM2S 3 BD11 1
const unsigned int mem_dma_mm2s_3_bd11_1 = 0x00009714;
// DMA MM2S 3 BD11 2
const unsigned int mem_dma_mm2s_3_bd11_2 = 0x00009718;
// DMA MM2S 3 BD11 3
const unsigned int mem_dma_mm2s_3_bd11_3 = 0x0000971C;
// DMA MM2S 3 BD11 4
const unsigned int mem_dma_mm2s_3_bd11_4 = 0x00009720;
// DMA MM2S 3 BD11 5
const unsigned int mem_dma_mm2s_3_bd11_5 = 0x00009724;
// DMA MM2S 3 BD11 6
const unsigned int mem_dma_mm2s_3_bd11_6 = 0x00009728;
// DMA MM2S 3 BD11 7
const unsigned int mem_dma_mm2s_3_bd11_7 = 0x0000972C;
// DMA MM2S 3 BD11 8
const unsigned int mem_dma_mm2s_3_bd11_8 = 0x00009730;
// DMA MM2S 3 BD11 9
const unsigned int mem_dma_mm2s_3_bd11_9 = 0x00009734;
// DMA MM2S 3 BD11 10
const unsigned int mem_dma_mm2s_3_bd11_10 = 0x00009738;
// DMA MM2S 3 BD12 0
const unsigned int mem_dma_mm2s_3_bd12_0 = 0x00009740;
// DMA MM2S 3 BD12 1
const unsigned int mem_dma_mm2s_3_bd12_1 = 0x00009744;
// DMA MM2S 3 BD12 2
const unsigned int mem_dma_mm2s_3_bd12_2 = 0x00009748;
// DMA MM2S 3 BD12 3
const unsigned int mem_dma_mm2s_3_bd12_3 = 0x0000974C;
// DMA MM2S 3 BD12 4
const unsigned int mem_dma_mm2s_3_bd12_4 = 0x00009750;
// DMA MM2S 3 BD12 5
const unsigned int mem_dma_mm2s_3_bd12_5 = 0x00009754;
// DMA MM2S 3 BD12 6
const unsigned int mem_dma_mm2s_3_bd12_6 = 0x00009758;
// DMA MM2S 3 BD12 7
const unsigned int mem_dma_mm2s_3_bd12_7 = 0x0000975C;
// DMA MM2S 3 BD12 8
const unsigned int mem_dma_mm2s_3_bd12_8 = 0x00009760;
// DMA MM2S 3 BD12 9
const unsigned int mem_dma_mm2s_3_bd12_9 = 0x00009764;
// DMA MM2S 3 BD12 10
const unsigned int mem_dma_mm2s_3_bd12_10 = 0x00009768;
// DMA MM2S 3 BD13 0
const unsigned int mem_dma_mm2s_3_bd13_0 = 0x00009770;
// DMA MM2S 3 BD13 1
const unsigned int mem_dma_mm2s_3_bd13_1 = 0x00009774;
// DMA MM2S 3 BD13 2
const unsigned int mem_dma_mm2s_3_bd13_2 = 0x00009778;
// DMA MM2S 3 BD13 3
const unsigned int mem_dma_mm2s_3_bd13_3 = 0x0000977C;
// DMA MM2S 3 BD13 4
const unsigned int mem_dma_mm2s_3_bd13_4 = 0x00009780;
// DMA MM2S 3 BD13 5
const unsigned int mem_dma_mm2s_3_bd13_5 = 0x00009784;
// DMA MM2S 3 BD13 6
const unsigned int mem_dma_mm2s_3_bd13_6 = 0x00009788;
// DMA MM2S 3 BD13 7
const unsigned int mem_dma_mm2s_3_bd13_7 = 0x0000978C;
// DMA MM2S 3 BD13 8
const unsigned int mem_dma_mm2s_3_bd13_8 = 0x00009790;
// DMA MM2S 3 BD13 9
const unsigned int mem_dma_mm2s_3_bd13_9 = 0x00009794;
// DMA MM2S 3 BD13 10
const unsigned int mem_dma_mm2s_3_bd13_10 = 0x00009798;
// DMA MM2S 3 BD14 0
const unsigned int mem_dma_mm2s_3_bd14_0 = 0x000097A0;
// DMA MM2S 3 BD14 1
const unsigned int mem_dma_mm2s_3_bd14_1 = 0x000097A4;
// DMA MM2S 3 BD14 2
const unsigned int mem_dma_mm2s_3_bd14_2 = 0x000097A8;
// DMA MM2S 3 BD14 3
const unsigned int mem_dma_mm2s_3_bd14_3 = 0x000097AC;
// DMA MM2S 3 BD14 4
const unsigned int mem_dma_mm2s_3_bd14_4 = 0x000097B0;
// DMA MM2S 3 BD14 5
const unsigned int mem_dma_mm2s_3_bd14_5 = 0x000097B4;
// DMA MM2S 3 BD14 6
const unsigned int mem_dma_mm2s_3_bd14_6 = 0x000097B8;
// DMA MM2S 3 BD14 7
const unsigned int mem_dma_mm2s_3_bd14_7 = 0x000097BC;
// DMA MM2S 3 BD14 8
const unsigned int mem_dma_mm2s_3_bd14_8 = 0x000097C0;
// DMA MM2S 3 BD14 9
const unsigned int mem_dma_mm2s_3_bd14_9 = 0x000097C4;
// DMA MM2S 3 BD14 10
const unsigned int mem_dma_mm2s_3_bd14_10 = 0x000097C8;
// DMA MM2S 3 BD15 0
const unsigned int mem_dma_mm2s_3_bd15_0 = 0x000097D0;
// DMA MM2S 3 BD15 1
const unsigned int mem_dma_mm2s_3_bd15_1 = 0x000097D4;
// DMA MM2S 3 BD15 2
const unsigned int mem_dma_mm2s_3_bd15_2 = 0x000097D8;
// DMA MM2S 3 BD15 3
const unsigned int mem_dma_mm2s_3_bd15_3 = 0x000097DC;
// DMA MM2S 3 BD15 4
const unsigned int mem_dma_mm2s_3_bd15_4 = 0x000097E0;
// DMA MM2S 3 BD15 5
const unsigned int mem_dma_mm2s_3_bd15_5 = 0x000097E4;
// DMA MM2S 3 BD15 6
const unsigned int mem_dma_mm2s_3_bd15_6 = 0x000097E8;
// DMA MM2S 3 BD15 7
const unsigned int mem_dma_mm2s_3_bd15_7 = 0x000097EC;
// DMA MM2S 3 BD15 8
const unsigned int mem_dma_mm2s_3_bd15_8 = 0x000097F0;
// DMA MM2S 3 BD15 9
const unsigned int mem_dma_mm2s_3_bd15_9 = 0x000097F4;
// DMA MM2S 3 BD15 10
const unsigned int mem_dma_mm2s_3_bd15_10 = 0x000097F8;
// DMA MM2S 4 BD0 0
const unsigned int mem_dma_mm2s_4_bd0_0 = 0x00009800;
// DMA MM2S 4 BD0 1
const unsigned int mem_dma_mm2s_4_bd0_1 = 0x00009804;
// DMA MM2S 4 BD0 2
const unsigned int mem_dma_mm2s_4_bd0_2 = 0x00009808;
// DMA MM2S 4 BD0 3
const unsigned int mem_dma_mm2s_4_bd0_3 = 0x0000980C;
// DMA MM2S 4 BD0 4
const unsigned int mem_dma_mm2s_4_bd0_4 = 0x00009810;
// DMA MM2S 4 BD0 5
const unsigned int mem_dma_mm2s_4_bd0_5 = 0x00009814;
// DMA MM2S 4 BD0 6
const unsigned int mem_dma_mm2s_4_bd0_6 = 0x00009818;
// DMA MM2S 4 BD0 7
const unsigned int mem_dma_mm2s_4_bd0_7 = 0x0000981C;
// DMA MM2S 4 BD0 8
const unsigned int mem_dma_mm2s_4_bd0_8 = 0x00009820;
// DMA MM2S 4 BD0 9
const unsigned int mem_dma_mm2s_4_bd0_9 = 0x00009824;
// DMA MM2S 4 BD0 10
const unsigned int mem_dma_mm2s_4_bd0_10 = 0x00009828;
// DMA MM2S 4 BD1 0
const unsigned int mem_dma_mm2s_4_bd1_0 = 0x00009830;
// DMA MM2S 4 BD1 1
const unsigned int mem_dma_mm2s_4_bd1_1 = 0x00009834;
// DMA MM2S 4 BD1 2
const unsigned int mem_dma_mm2s_4_bd1_2 = 0x00009838;
// DMA MM2S 4 BD1 3
const unsigned int mem_dma_mm2s_4_bd1_3 = 0x0000983C;
// DMA MM2S 4 BD1 4
const unsigned int mem_dma_mm2s_4_bd1_4 = 0x00009840;
// DMA MM2S 4 BD1 5
const unsigned int mem_dma_mm2s_4_bd1_5 = 0x00009844;
// DMA MM2S 4 BD1 6
const unsigned int mem_dma_mm2s_4_bd1_6 = 0x00009848;
// DMA MM2S 4 BD1 7
const unsigned int mem_dma_mm2s_4_bd1_7 = 0x0000984C;
// DMA MM2S 4 BD1 8
const unsigned int mem_dma_mm2s_4_bd1_8 = 0x00009850;
// DMA MM2S 4 BD1 9
const unsigned int mem_dma_mm2s_4_bd1_9 = 0x00009854;
// DMA MM2S 4 BD1 10
const unsigned int mem_dma_mm2s_4_bd1_10 = 0x00009858;
// DMA MM2S 4 BD2 0
const unsigned int mem_dma_mm2s_4_bd2_0 = 0x00009860;
// DMA MM2S 4 BD2 1
const unsigned int mem_dma_mm2s_4_bd2_1 = 0x00009864;
// DMA MM2S 4 BD2 2
const unsigned int mem_dma_mm2s_4_bd2_2 = 0x00009868;
// DMA MM2S 4 BD2 3
const unsigned int mem_dma_mm2s_4_bd2_3 = 0x0000986C;
// DMA MM2S 4 BD2 4
const unsigned int mem_dma_mm2s_4_bd2_4 = 0x00009870;
// DMA MM2S 4 BD2 5
const unsigned int mem_dma_mm2s_4_bd2_5 = 0x00009874;
// DMA MM2S 4 BD2 6
const unsigned int mem_dma_mm2s_4_bd2_6 = 0x00009878;
// DMA MM2S 4 BD2 7
const unsigned int mem_dma_mm2s_4_bd2_7 = 0x0000987C;
// DMA MM2S 4 BD2 8
const unsigned int mem_dma_mm2s_4_bd2_8 = 0x00009880;
// DMA MM2S 4 BD2 9
const unsigned int mem_dma_mm2s_4_bd2_9 = 0x00009884;
// DMA MM2S 4 BD2 10
const unsigned int mem_dma_mm2s_4_bd2_10 = 0x00009888;
// DMA MM2S 4 BD3 0
const unsigned int mem_dma_mm2s_4_bd3_0 = 0x00009890;
// DMA MM2S 4 BD3 1
const unsigned int mem_dma_mm2s_4_bd3_1 = 0x00009894;
// DMA MM2S 4 BD3 2
const unsigned int mem_dma_mm2s_4_bd3_2 = 0x00009898;
// DMA MM2S 4 BD3 3
const unsigned int mem_dma_mm2s_4_bd3_3 = 0x0000989C;
// DMA MM2S 4 BD3 4
const unsigned int mem_dma_mm2s_4_bd3_4 = 0x000098A0;
// DMA MM2S 4 BD3 5
const unsigned int mem_dma_mm2s_4_bd3_5 = 0x000098A4;
// DMA MM2S 4 BD3 6
const unsigned int mem_dma_mm2s_4_bd3_6 = 0x000098A8;
// DMA MM2S 4 BD3 7
const unsigned int mem_dma_mm2s_4_bd3_7 = 0x000098AC;
// DMA MM2S 4 BD3 8
const unsigned int mem_dma_mm2s_4_bd3_8 = 0x000098B0;
// DMA MM2S 4 BD3 9
const unsigned int mem_dma_mm2s_4_bd3_9 = 0x000098B4;
// DMA MM2S 4 BD3 10
const unsigned int mem_dma_mm2s_4_bd3_10 = 0x000098B8;
// DMA MM2S 4 BD4 0
const unsigned int mem_dma_mm2s_4_bd4_0 = 0x000098C0;
// DMA MM2S 4 BD4 1
const unsigned int mem_dma_mm2s_4_bd4_1 = 0x000098C4;
// DMA MM2S 4 BD4 2
const unsigned int mem_dma_mm2s_4_bd4_2 = 0x000098C8;
// DMA MM2S 4 BD4 3
const unsigned int mem_dma_mm2s_4_bd4_3 = 0x000098CC;
// DMA MM2S 4 BD4 4
const unsigned int mem_dma_mm2s_4_bd4_4 = 0x000098D0;
// DMA MM2S 4 BD4 5
const unsigned int mem_dma_mm2s_4_bd4_5 = 0x000098D4;
// DMA MM2S 4 BD4 6
const unsigned int mem_dma_mm2s_4_bd4_6 = 0x000098D8;
// DMA MM2S 4 BD4 7
const unsigned int mem_dma_mm2s_4_bd4_7 = 0x000098DC;
// DMA MM2S 4 BD4 8
const unsigned int mem_dma_mm2s_4_bd4_8 = 0x000098E0;
// DMA MM2S 4 BD4 9
const unsigned int mem_dma_mm2s_4_bd4_9 = 0x000098E4;
// DMA MM2S 4 BD4 10
const unsigned int mem_dma_mm2s_4_bd4_10 = 0x000098E8;
// DMA MM2S 4 BD5 0
const unsigned int mem_dma_mm2s_4_bd5_0 = 0x000098F0;
// DMA MM2S 4 BD5 1
const unsigned int mem_dma_mm2s_4_bd5_1 = 0x000098F4;
// DMA MM2S 4 BD5 2
const unsigned int mem_dma_mm2s_4_bd5_2 = 0x000098F8;
// DMA MM2S 4 BD5 3
const unsigned int mem_dma_mm2s_4_bd5_3 = 0x000098FC;
// DMA MM2S 4 BD5 4
const unsigned int mem_dma_mm2s_4_bd5_4 = 0x00009900;
// DMA MM2S 4 BD5 5
const unsigned int mem_dma_mm2s_4_bd5_5 = 0x00009904;
// DMA MM2S 4 BD5 6
const unsigned int mem_dma_mm2s_4_bd5_6 = 0x00009908;
// DMA MM2S 4 BD5 7
const unsigned int mem_dma_mm2s_4_bd5_7 = 0x0000990C;
// DMA MM2S 4 BD5 8
const unsigned int mem_dma_mm2s_4_bd5_8 = 0x00009910;
// DMA MM2S 4 BD5 9
const unsigned int mem_dma_mm2s_4_bd5_9 = 0x00009914;
// DMA MM2S 4 BD5 10
const unsigned int mem_dma_mm2s_4_bd5_10 = 0x00009918;
// DMA MM2S 4 BD6 0
const unsigned int mem_dma_mm2s_4_bd6_0 = 0x00009920;
// DMA MM2S 4 BD6 1
const unsigned int mem_dma_mm2s_4_bd6_1 = 0x00009924;
// DMA MM2S 4 BD6 2
const unsigned int mem_dma_mm2s_4_bd6_2 = 0x00009928;
// DMA MM2S 4 BD6 3
const unsigned int mem_dma_mm2s_4_bd6_3 = 0x0000992C;
// DMA MM2S 4 BD6 4
const unsigned int mem_dma_mm2s_4_bd6_4 = 0x00009930;
// DMA MM2S 4 BD6 5
const unsigned int mem_dma_mm2s_4_bd6_5 = 0x00009934;
// DMA MM2S 4 BD6 6
const unsigned int mem_dma_mm2s_4_bd6_6 = 0x00009938;
// DMA MM2S 4 BD6 7
const unsigned int mem_dma_mm2s_4_bd6_7 = 0x0000993C;
// DMA MM2S 4 BD6 8
const unsigned int mem_dma_mm2s_4_bd6_8 = 0x00009940;
// DMA MM2S 4 BD6 9
const unsigned int mem_dma_mm2s_4_bd6_9 = 0x00009944;
// DMA MM2S 4 BD6 10
const unsigned int mem_dma_mm2s_4_bd6_10 = 0x00009948;
// DMA MM2S 4 BD7 0
const unsigned int mem_dma_mm2s_4_bd7_0 = 0x00009950;
// DMA MM2S 4 BD7 1
const unsigned int mem_dma_mm2s_4_bd7_1 = 0x00009954;
// DMA MM2S 4 BD7 2
const unsigned int mem_dma_mm2s_4_bd7_2 = 0x00009958;
// DMA MM2S 4 BD7 3
const unsigned int mem_dma_mm2s_4_bd7_3 = 0x0000995C;
// DMA MM2S 4 BD7 4
const unsigned int mem_dma_mm2s_4_bd7_4 = 0x00009960;
// DMA MM2S 4 BD7 5
const unsigned int mem_dma_mm2s_4_bd7_5 = 0x00009964;
// DMA MM2S 4 BD7 6
const unsigned int mem_dma_mm2s_4_bd7_6 = 0x00009968;
// DMA MM2S 4 BD7 7
const unsigned int mem_dma_mm2s_4_bd7_7 = 0x0000996C;
// DMA MM2S 4 BD7 8
const unsigned int mem_dma_mm2s_4_bd7_8 = 0x00009970;
// DMA MM2S 4 BD7 9
const unsigned int mem_dma_mm2s_4_bd7_9 = 0x00009974;
// DMA MM2S 4 BD7 10
const unsigned int mem_dma_mm2s_4_bd7_10 = 0x00009978;
// DMA MM2S 4 BD8 0
const unsigned int mem_dma_mm2s_4_bd8_0 = 0x00009980;
// DMA MM2S 4 BD8 1
const unsigned int mem_dma_mm2s_4_bd8_1 = 0x00009984;
// DMA MM2S 4 BD8 2
const unsigned int mem_dma_mm2s_4_bd8_2 = 0x00009988;
// DMA MM2S 4 BD8 3
const unsigned int mem_dma_mm2s_4_bd8_3 = 0x0000998C;
// DMA MM2S 4 BD8 4
const unsigned int mem_dma_mm2s_4_bd8_4 = 0x00009990;
// DMA MM2S 4 BD8 5
const unsigned int mem_dma_mm2s_4_bd8_5 = 0x00009994;
// DMA MM2S 4 BD8 6
const unsigned int mem_dma_mm2s_4_bd8_6 = 0x00009998;
// DMA MM2S 4 BD8 7
const unsigned int mem_dma_mm2s_4_bd8_7 = 0x0000999C;
// DMA MM2S 4 BD8 8
const unsigned int mem_dma_mm2s_4_bd8_8 = 0x000099A0;
// DMA MM2S 4 BD8 9
const unsigned int mem_dma_mm2s_4_bd8_9 = 0x000099A4;
// DMA MM2S 4 BD8 10
const unsigned int mem_dma_mm2s_4_bd8_10 = 0x000099A8;
// DMA MM2S 4 BD9 0
const unsigned int mem_dma_mm2s_4_bd9_0 = 0x000099B0;
// DMA MM2S 4 BD9 1
const unsigned int mem_dma_mm2s_4_bd9_1 = 0x000099B4;
// DMA MM2S 4 BD9 2
const unsigned int mem_dma_mm2s_4_bd9_2 = 0x000099B8;
// DMA MM2S 4 BD9 3
const unsigned int mem_dma_mm2s_4_bd9_3 = 0x000099BC;
// DMA MM2S 4 BD9 4
const unsigned int mem_dma_mm2s_4_bd9_4 = 0x000099C0;
// DMA MM2S 4 BD9 5
const unsigned int mem_dma_mm2s_4_bd9_5 = 0x000099C4;
// DMA MM2S 4 BD9 6
const unsigned int mem_dma_mm2s_4_bd9_6 = 0x000099C8;
// DMA MM2S 4 BD9 7
const unsigned int mem_dma_mm2s_4_bd9_7 = 0x000099CC;
// DMA MM2S 4 BD9 8
const unsigned int mem_dma_mm2s_4_bd9_8 = 0x000099D0;
// DMA MM2S 4 BD9 9
const unsigned int mem_dma_mm2s_4_bd9_9 = 0x000099D4;
// DMA MM2S 4 BD9 10
const unsigned int mem_dma_mm2s_4_bd9_10 = 0x000099D8;
// DMA MM2S 4 BD10 0
const unsigned int mem_dma_mm2s_4_bd10_0 = 0x000099E0;
// DMA MM2S 4 BD10 1
const unsigned int mem_dma_mm2s_4_bd10_1 = 0x000099E4;
// DMA MM2S 4 BD10 2
const unsigned int mem_dma_mm2s_4_bd10_2 = 0x000099E8;
// DMA MM2S 4 BD10 3
const unsigned int mem_dma_mm2s_4_bd10_3 = 0x000099EC;
// DMA MM2S 4 BD10 4
const unsigned int mem_dma_mm2s_4_bd10_4 = 0x000099F0;
// DMA MM2S 4 BD10 5
const unsigned int mem_dma_mm2s_4_bd10_5 = 0x000099F4;
// DMA MM2S 4 BD10 6
const unsigned int mem_dma_mm2s_4_bd10_6 = 0x000099F8;
// DMA MM2S 4 BD10 7
const unsigned int mem_dma_mm2s_4_bd10_7 = 0x000099FC;
// DMA MM2S 4 BD10 8
const unsigned int mem_dma_mm2s_4_bd10_8 = 0x00009A00;
// DMA MM2S 4 BD10 9
const unsigned int mem_dma_mm2s_4_bd10_9 = 0x00009A04;
// DMA MM2S 4 BD10 10
const unsigned int mem_dma_mm2s_4_bd10_10 = 0x00009A08;
// DMA MM2S 4 BD11 0
const unsigned int mem_dma_mm2s_4_bd11_0 = 0x00009A10;
// DMA MM2S 4 BD11 1
const unsigned int mem_dma_mm2s_4_bd11_1 = 0x00009A14;
// DMA MM2S 4 BD11 2
const unsigned int mem_dma_mm2s_4_bd11_2 = 0x00009A18;
// DMA MM2S 4 BD11 3
const unsigned int mem_dma_mm2s_4_bd11_3 = 0x00009A1C;
// DMA MM2S 4 BD11 4
const unsigned int mem_dma_mm2s_4_bd11_4 = 0x00009A20;
// DMA MM2S 4 BD11 5
const unsigned int mem_dma_mm2s_4_bd11_5 = 0x00009A24;
// DMA MM2S 4 BD11 6
const unsigned int mem_dma_mm2s_4_bd11_6 = 0x00009A28;
// DMA MM2S 4 BD11 7
const unsigned int mem_dma_mm2s_4_bd11_7 = 0x00009A2C;
// DMA MM2S 4 BD11 8
const unsigned int mem_dma_mm2s_4_bd11_8 = 0x00009A30;
// DMA MM2S 4 BD11 9
const unsigned int mem_dma_mm2s_4_bd11_9 = 0x00009A34;
// DMA MM2S 4 BD11 10
const unsigned int mem_dma_mm2s_4_bd11_10 = 0x00009A38;
// DMA MM2S 4 BD12 0
const unsigned int mem_dma_mm2s_4_bd12_0 = 0x00009A40;
// DMA MM2S 4 BD12 1
const unsigned int mem_dma_mm2s_4_bd12_1 = 0x00009A44;
// DMA MM2S 4 BD12 2
const unsigned int mem_dma_mm2s_4_bd12_2 = 0x00009A48;
// DMA MM2S 4 BD12 3
const unsigned int mem_dma_mm2s_4_bd12_3 = 0x00009A4C;
// DMA MM2S 4 BD12 4
const unsigned int mem_dma_mm2s_4_bd12_4 = 0x00009A50;
// DMA MM2S 4 BD12 5
const unsigned int mem_dma_mm2s_4_bd12_5 = 0x00009A54;
// DMA MM2S 4 BD12 6
const unsigned int mem_dma_mm2s_4_bd12_6 = 0x00009A58;
// DMA MM2S 4 BD12 7
const unsigned int mem_dma_mm2s_4_bd12_7 = 0x00009A5C;
// DMA MM2S 4 BD12 8
const unsigned int mem_dma_mm2s_4_bd12_8 = 0x00009A60;
// DMA MM2S 4 BD12 9
const unsigned int mem_dma_mm2s_4_bd12_9 = 0x00009A64;
// DMA MM2S 4 BD12 10
const unsigned int mem_dma_mm2s_4_bd12_10 = 0x00009A68;
// DMA MM2S 4 BD13 0
const unsigned int mem_dma_mm2s_4_bd13_0 = 0x00009A70;
// DMA MM2S 4 BD13 1
const unsigned int mem_dma_mm2s_4_bd13_1 = 0x00009A74;
// DMA MM2S 4 BD13 2
const unsigned int mem_dma_mm2s_4_bd13_2 = 0x00009A78;
// DMA MM2S 4 BD13 3
const unsigned int mem_dma_mm2s_4_bd13_3 = 0x00009A7C;
// DMA MM2S 4 BD13 4
const unsigned int mem_dma_mm2s_4_bd13_4 = 0x00009A80;
// DMA MM2S 4 BD13 5
const unsigned int mem_dma_mm2s_4_bd13_5 = 0x00009A84;
// DMA MM2S 4 BD13 6
const unsigned int mem_dma_mm2s_4_bd13_6 = 0x00009A88;
// DMA MM2S 4 BD13 7
const unsigned int mem_dma_mm2s_4_bd13_7 = 0x00009A8C;
// DMA MM2S 4 BD13 8
const unsigned int mem_dma_mm2s_4_bd13_8 = 0x00009A90;
// DMA MM2S 4 BD13 9
const unsigned int mem_dma_mm2s_4_bd13_9 = 0x00009A94;
// DMA MM2S 4 BD13 10
const unsigned int mem_dma_mm2s_4_bd13_10 = 0x00009A98;
// DMA MM2S 4 BD14 0
const unsigned int mem_dma_mm2s_4_bd14_0 = 0x00009AA0;
// DMA MM2S 4 BD14 1
const unsigned int mem_dma_mm2s_4_bd14_1 = 0x00009AA4;
// DMA MM2S 4 BD14 2
const unsigned int mem_dma_mm2s_4_bd14_2 = 0x00009AA8;
// DMA MM2S 4 BD14 3
const unsigned int mem_dma_mm2s_4_bd14_3 = 0x00009AAC;
// DMA MM2S 4 BD14 4
const unsigned int mem_dma_mm2s_4_bd14_4 = 0x00009AB0;
// DMA MM2S 4 BD14 5
const unsigned int mem_dma_mm2s_4_bd14_5 = 0x00009AB4;
// DMA MM2S 4 BD14 6
const unsigned int mem_dma_mm2s_4_bd14_6 = 0x00009AB8;
// DMA MM2S 4 BD14 7
const unsigned int mem_dma_mm2s_4_bd14_7 = 0x00009ABC;
// DMA MM2S 4 BD14 8
const unsigned int mem_dma_mm2s_4_bd14_8 = 0x00009AC0;
// DMA MM2S 4 BD14 9
const unsigned int mem_dma_mm2s_4_bd14_9 = 0x00009AC4;
// DMA MM2S 4 BD14 10
const unsigned int mem_dma_mm2s_4_bd14_10 = 0x00009AC8;
// DMA MM2S 4 BD15 0
const unsigned int mem_dma_mm2s_4_bd15_0 = 0x00009AD0;
// DMA MM2S 4 BD15 1
const unsigned int mem_dma_mm2s_4_bd15_1 = 0x00009AD4;
// DMA MM2S 4 BD15 2
const unsigned int mem_dma_mm2s_4_bd15_2 = 0x00009AD8;
// DMA MM2S 4 BD15 3
const unsigned int mem_dma_mm2s_4_bd15_3 = 0x00009ADC;
// DMA MM2S 4 BD15 4
const unsigned int mem_dma_mm2s_4_bd15_4 = 0x00009AE0;
// DMA MM2S 4 BD15 5
const unsigned int mem_dma_mm2s_4_bd15_5 = 0x00009AE4;
// DMA MM2S 4 BD15 6
const unsigned int mem_dma_mm2s_4_bd15_6 = 0x00009AE8;
// DMA MM2S 4 BD15 7
const unsigned int mem_dma_mm2s_4_bd15_7 = 0x00009AEC;
// DMA MM2S 4 BD15 8
const unsigned int mem_dma_mm2s_4_bd15_8 = 0x00009AF0;
// DMA MM2S 4 BD15 9
const unsigned int mem_dma_mm2s_4_bd15_9 = 0x00009AF4;
// DMA MM2S 4 BD15 10
const unsigned int mem_dma_mm2s_4_bd15_10 = 0x00009AF8;
// DMA Control Register S2MM Ch0
const unsigned int mem_dma_s2mm_0_ctrl = 0x00009E00;
// DMA Control Register S2MM Ch0 start BD
const unsigned int mem_dma_s2mm_0_start_queue = 0x00009E04;
// DMA Control Register S2MM Ch1
const unsigned int mem_dma_s2mm_1_ctrl = 0x00009E08;
// DMA Control Register S2MM Ch1 start BD
const unsigned int mem_dma_s2mm_1_start_queue = 0x00009E0C;
// DMA Control Register S2MM Ch2
const unsigned int mem_dma_s2mm_2_ctrl = 0x00009E10;
// DMA Control Register S2MM Ch2 start BD
const unsigned int mem_dma_s2mm_2_start_queue = 0x00009E14;
// DMA Control Register S2MM Ch3
const unsigned int mem_dma_s2mm_3_ctrl = 0x00009E18;
// DMA Control Register S2MM Ch3 start BD
const unsigned int mem_dma_s2mm_3_start_queue = 0x00009E1C;
// DMA Control Register MM2S Ch0
const unsigned int mem_dma_mm2s_0_ctrl = 0x00009E60;
// DMA Control Register MM2S Ch0 start BD
const unsigned int mem_dma_mm2s_0_start_queue = 0x00009E64;
// DMA Control Register MM2S Ch1
const unsigned int mem_dma_mm2s_1_ctrl = 0x00009E68;
// DMA Control Register MM2S Ch1 start BD
const unsigned int mem_dma_mm2s_1_start_queue = 0x00009E6C;
// DMA Control Register MM2S Ch2
const unsigned int mem_dma_mm2s_2_ctrl = 0x00009E70;
// DMA Control Register MM2S Ch2 start BD
const unsigned int mem_dma_mm2s_2_start_queue = 0x00009E74;
// DMA Control Register MM2S Ch3
const unsigned int mem_dma_mm2s_3_ctrl = 0x00009E78;
// DMA Control Register MM2S Ch3 start BD
const unsigned int mem_dma_mm2s_3_start_queue = 0x00009E7C;
// DMA Control Register MM2S Ch4
const unsigned int mem_dma_mm2s_4_ctrl = 0x00009E80;
// DMA Control Register MM2S Ch4 start BD
const unsigned int mem_dma_mm2s_4_start_queue = 0x00009E84;
// DMA S2MM Status Register Ch0
const unsigned int mem_dma_s2mm_status_0 = 0x00009ED0;
// DMA S2MM Status Register Ch1
const unsigned int mem_dma_s2mm_status_1 = 0x00009ED4;
// DMA S2MM Status Register Ch2
const unsigned int mem_dma_s2mm_status_2 = 0x00009ED8;
// DMA S2MM Status Register Ch3
const unsigned int mem_dma_s2mm_status_3 = 0x00009EDC;
// DMA MM2S Status Register Ch0
const unsigned int mem_dma_mm2s_status_0 = 0x00009F00;
// DMA MM2S Status Register Ch1
const unsigned int mem_dma_mm2s_status_1 = 0x00009F04;
// DMA MM2S Status Register Ch2
const unsigned int mem_dma_mm2s_status_2 = 0x00009F08;
// DMA MM2S Status Register Ch3
const unsigned int mem_dma_mm2s_status_3 = 0x00009F0C;
// DMA MM2S Status Register Ch4
const unsigned int mem_dma_mm2s_status_4 = 0x00009F10;
// Selection of which DMA channels will generate events in switch A
const unsigned int mem_dma_event_channel_selection_a = 0x00009F40;
// DMA S2MM Current Write Count Ch0
const unsigned int mem_dma_s2mm_current_write_count_0 = 0x00009F50;
// DMA S2MM Current Write Count Ch1
const unsigned int mem_dma_s2mm_current_write_count_1 = 0x00009F54;
// DMA S2MM Current Write Count Ch2
const unsigned int mem_dma_s2mm_current_write_count_2 = 0x00009F58;
// DMA S2MM Current Write Count Ch3
const unsigned int mem_dma_s2mm_current_write_count_3 = 0x00009F5C;
// DMA S2MM FoT Count FIFO Pop Ch0
const unsigned int mem_dma_s2mm_fot_count_fifo_pop_0 = 0x00009F60;
// DMA S2MM FoT Count FIFO Pop Ch1
const unsigned int mem_dma_s2mm_fot_count_fifo_pop_1 = 0x00009F64;
// DMA S2MM FoT Count FIFO Pop Ch2
const unsigned int mem_dma_s2mm_fot_count_fifo_pop_2 = 0x00009F68;
// DMA S2MM FoT Count FIFO Pop Ch3
const unsigned int mem_dma_s2mm_fot_count_fifo_pop_3 = 0x00009F6C;
// DMA MM2S 0 Constant Pad Value
const unsigned int mem_dma_mm2s_0_constant_pad_value = 0x00009F70;
// DMA MM2S 1 Constant Pad Value
const unsigned int mem_dma_mm2s_1_constant_pad_value = 0x00009F74;
// DMA MM2S 2 Constant Pad Value
const unsigned int mem_dma_mm2s_2_constant_pad_value = 0x00009F78;
// DMA MM2S 3 Constant Pad Value
const unsigned int mem_dma_mm2s_3_constant_pad_value = 0x00009F7C;
// DMA MM2S 4 Constant Pad Value
const unsigned int mem_dma_mm2s_4_constant_pad_value = 0x00009F80;
// Value of lock 0
const unsigned int mem_lock0_value = 0x00010000;
// Value of lock 1
const unsigned int mem_lock1_value = 0x00010010;
// Value of lock 2
const unsigned int mem_lock2_value = 0x00010020;
// Value of lock 3
const unsigned int mem_lock3_value = 0x00010030;
// Value of lock 4
const unsigned int mem_lock4_value = 0x00010040;
// Value of lock 5
const unsigned int mem_lock5_value = 0x00010050;
// Value of lock 6
const unsigned int mem_lock6_value = 0x00010060;
// Value of lock 7
const unsigned int mem_lock7_value = 0x00010070;
// Value of lock 8
const unsigned int mem_lock8_value = 0x00010080;
// Value of lock 9
const unsigned int mem_lock9_value = 0x00010090;
// Value of lock 10
const unsigned int mem_lock10_value = 0x000100A0;
// Value of lock 11
const unsigned int mem_lock11_value = 0x000100B0;
// Value of lock 12
const unsigned int mem_lock12_value = 0x000100C0;
// Value of lock 13
const unsigned int mem_lock13_value = 0x000100D0;
// Value of lock 14
const unsigned int mem_lock14_value = 0x000100E0;
// Value of lock 15
const unsigned int mem_lock15_value = 0x000100F0;
// Value of lock 16
const unsigned int mem_lock16_value = 0x00010100;
// Value of lock 17
const unsigned int mem_lock17_value = 0x00010110;
// Value of lock 18
const unsigned int mem_lock18_value = 0x00010120;
// Value of lock 19
const unsigned int mem_lock19_value = 0x00010130;
// Value of lock 20
const unsigned int mem_lock20_value = 0x00010140;
// Value of lock 21
const unsigned int mem_lock21_value = 0x00010150;
// Value of lock 22
const unsigned int mem_lock22_value = 0x00010160;
// Value of lock 23
const unsigned int mem_lock23_value = 0x00010170;
// Value of lock 24
const unsigned int mem_lock24_value = 0x00010180;
// Value of lock 25
const unsigned int mem_lock25_value = 0x00010190;
// Value of lock 26
const unsigned int mem_lock26_value = 0x000101A0;
// Value of lock 27
const unsigned int mem_lock27_value = 0x000101B0;
// Value of lock 28
const unsigned int mem_lock28_value = 0x000101C0;
// Value of lock 29
const unsigned int mem_lock29_value = 0x000101D0;
// Value of lock 30
const unsigned int mem_lock30_value = 0x000101E0;
// Value of lock 31
const unsigned int mem_lock31_value = 0x000101F0;
// Select lock for lock event generation 0 in switch A
const unsigned int mem_locks_event_selection_a_0 = 0x00010200;
// Select lock for lock event generation 1 in switch A
const unsigned int mem_locks_event_selection_a_1 = 0x00010204;
// Select lock for lock event generation 2 in switch A
const unsigned int mem_locks_event_selection_a_2 = 0x00010208;
// Select lock for lock event generation 3 in switch A
const unsigned int mem_locks_event_selection_a_3 = 0x0001020C;
// Select lock for lock event generation 4 in switch A
const unsigned int mem_locks_event_selection_a_4 = 0x00010210;
// Select lock for lock event generation 5 in switch A
const unsigned int mem_locks_event_selection_a_5 = 0x00010214;
// Select lock for lock event generation 6 in switch A
const unsigned int mem_locks_event_selection_a_6 = 0x00010218;
// Select lock for lock event generation 7 in switch A
const unsigned int mem_locks_event_selection_a_7 = 0x0001021C;
// Status bits for lock overflow, write to clear
const unsigned int mem_locks_overflow_0 = 0x00010220;
// Status bits for lock underflow, write to clear
const unsigned int mem_locks_underflow_0 = 0x00010230;
// Lock Request for locks 0-31, encoded via address bits: bits 4:0 of Lock_Id [14:10], Acq/nRel (Acq=1, Rel=0) (9), Change_Value [8:2] (32 kB address space)
const unsigned int mem_lock_request_a = 0x00018000;
// Stream Switch Manager Configuration DMA 0
const unsigned int mem_stream_switch_manager_config_dma_0 = 0x00020000;
// Stream Switch Manager Configuration DMA 1
const unsigned int mem_stream_switch_manager_config_dma_1 = 0x00020004;
// Stream Switch Manager Configuration DMA 2
const unsigned int mem_stream_switch_manager_config_dma_2 = 0x00020008;
// Stream Switch Manager Configuration DMA 3
const unsigned int mem_stream_switch_manager_config_dma_3 = 0x0002000C;
// Stream Switch Manager Configuration FIFO 0
const unsigned int mem_stream_switch_manager_config_fifo_0 = 0x00020010;
// Stream Switch Manager Configuration South 0
const unsigned int mem_stream_switch_manager_config_south_0 = 0x00020014;
// Stream Switch Manager Configuration South 1
const unsigned int mem_stream_switch_manager_config_south_1 = 0x00020018;
// Stream Switch Manager Configuration South X
const unsigned int mem_stream_switch_manager_config_south_x = 0x0002001C;
// Stream Switch Manager Configuration North 0
const unsigned int mem_stream_switch_manager_config_north_0 = 0x00020020;
// Stream Switch Manager Configuration North 1
const unsigned int mem_stream_switch_manager_config_north_1 = 0x00020024;
// Stream Switch Manager Configuration North 2
const unsigned int mem_stream_switch_manager_config_north_2 = 0x00020028;
// Stream Switch Manager Configuration North 3
const unsigned int mem_stream_switch_manager_config_north_3 = 0x0002002C;
// Stream Switch Manager Configuration North_Control 0
const unsigned int mem_stream_switch_manager_config_north_control_0 = 0x00020030;
// Stream Switch Manager Configuration Tile Ctrl 0
const unsigned int mem_stream_switch_manager_config_tile_ctrl_0 = 0x00020034;
// Stream Switch Manager Configuration 32-bit Switch 0
const unsigned int mem_stream_switch_manager_config_32b_switch_0 = 0x00020038;
// Stream Switch Subordinate Configuration DMA 0
const unsigned int mem_stream_switch_subordinate_config_dma_0 = 0x00020040;
// Stream Switch Subordinate Configuration DMA 1
const unsigned int mem_stream_switch_subordinate_config_dma_1 = 0x00020044;
// Stream Switch Subordinate Configuration DMA 2
const unsigned int mem_stream_switch_subordinate_config_dma_2 = 0x00020048;
// Stream Switch Subordinate Configuration DMA 3
const unsigned int mem_stream_switch_subordinate_config_dma_3 = 0x0002004C;
// Stream Switch Subordinate Configuration DMA 4
const unsigned int mem_stream_switch_subordinate_config_dma_4 = 0x00020050;
// Stream Switch Subordinate Configuration DMA 5
const unsigned int mem_stream_switch_subordinate_config_dma_5 = 0x00020054;
// Stream Switch Subordinate Configuration FIFO 0
const unsigned int mem_stream_switch_subordinate_config_fifo_0 = 0x00020058;
// Stream Switch Subordinate Configuration South 0
const unsigned int mem_stream_switch_subordinate_config_south_0 = 0x0002005C;
// Stream Switch Subordinate Configuration South 1
const unsigned int mem_stream_switch_subordinate_config_south_1 = 0x00020060;
// Stream Switch Subordinate Configuration South X
const unsigned int mem_stream_switch_subordinate_config_south_x = 0x00020064;
// Stream Switch Subordinate Configuration South Y
const unsigned int mem_stream_switch_subordinate_config_south_y = 0x00020068;
// Stream Switch Subordinate Configuration North 0
const unsigned int mem_stream_switch_subordinate_config_north_0 = 0x0002006C;
// Stream Switch Subordinate Configuration North 1
const unsigned int mem_stream_switch_subordinate_config_north_1 = 0x00020070;
// Stream Switch Subordinate Configuration North X
const unsigned int mem_stream_switch_subordinate_config_north_x = 0x00020074;
// Stream Switch Subordinate Configuration South_Control 0
const unsigned int mem_stream_switch_subordinate_config_south_control_0 = 0x00020078;
// Stream Switch Subordinate Configuration 32-bit Switch 0
const unsigned int mem_stream_switch_subordinate_config_32b_switch_0 = 0x0002007C;
// Stream Switch Subordinate Configuration DMA 0
const unsigned int mem_stream_switch_subordinate_dma_0_slot0 = 0x00020080;
// Stream Switch Subordinate Configuration DMA 0
const unsigned int mem_stream_switch_subordinate_dma_0_slot1 = 0x00020084;
// Stream Switch Subordinate Configuration DMA 0
const unsigned int mem_stream_switch_subordinate_dma_0_slot2 = 0x00020088;
// Stream Switch Subordinate Configuration DMA 0
const unsigned int mem_stream_switch_subordinate_dma_0_slot3 = 0x0002008C;
// Stream Switch Subordinate Configuration DMA 1
const unsigned int mem_stream_switch_subordinate_dma_1_slot0 = 0x00020090;
// Stream Switch Subordinate Configuration DMA 1
const unsigned int mem_stream_switch_subordinate_dma_1_slot1 = 0x00020094;
// Stream Switch Subordinate Configuration DMA 1
const unsigned int mem_stream_switch_subordinate_dma_1_slot2 = 0x00020098;
// Stream Switch Subordinate Configuration DMA 1
const unsigned int mem_stream_switch_subordinate_dma_1_slot3 = 0x0002009C;
// Stream Switch Subordinate Configuration DMA 2
const unsigned int mem_stream_switch_subordinate_dma_2_slot0 = 0x000200A0;
// Stream Switch Subordinate Configuration DMA 2
const unsigned int mem_stream_switch_subordinate_dma_2_slot1 = 0x000200A4;
// Stream Switch Subordinate Configuration DMA 2
const unsigned int mem_stream_switch_subordinate_dma_2_slot2 = 0x000200A8;
// Stream Switch Subordinate Configuration DMA 2
const unsigned int mem_stream_switch_subordinate_dma_2_slot3 = 0x000200AC;
// Stream Switch Subordinate Configuration DMA 3
const unsigned int mem_stream_switch_subordinate_dma_3_slot0 = 0x000200B0;
// Stream Switch Subordinate Configuration DMA 3
const unsigned int mem_stream_switch_subordinate_dma_3_slot1 = 0x000200B4;
// Stream Switch Subordinate Configuration DMA 3
const unsigned int mem_stream_switch_subordinate_dma_3_slot2 = 0x000200B8;
// Stream Switch Subordinate Configuration DMA 3
const unsigned int mem_stream_switch_subordinate_dma_3_slot3 = 0x000200BC;
// Stream Switch Subordinate Configuration DMA 4
const unsigned int mem_stream_switch_subordinate_dma_4_slot0 = 0x000200C0;
// Stream Switch Subordinate Configuration DMA 4
const unsigned int mem_stream_switch_subordinate_dma_4_slot1 = 0x000200C4;
// Stream Switch Subordinate Configuration DMA 4
const unsigned int mem_stream_switch_subordinate_dma_4_slot2 = 0x000200C8;
// Stream Switch Subordinate Configuration DMA 4
const unsigned int mem_stream_switch_subordinate_dma_4_slot3 = 0x000200CC;
// Stream Switch Subordinate Configuration DMA 5
const unsigned int mem_stream_switch_subordinate_dma_5_slot0 = 0x000200D0;
// Stream Switch Subordinate Configuration DMA 5
const unsigned int mem_stream_switch_subordinate_dma_5_slot1 = 0x000200D4;
// Stream Switch Subordinate Configuration DMA 5
const unsigned int mem_stream_switch_subordinate_dma_5_slot2 = 0x000200D8;
// Stream Switch Subordinate Configuration DMA 5
const unsigned int mem_stream_switch_subordinate_dma_5_slot3 = 0x000200DC;
// Stream Switch Subordinate Configuration FIFO 0
const unsigned int mem_stream_switch_subordinate_fifo_0_slot0 = 0x000200E0;
// Stream Switch Subordinate Configuration FIFO 0
const unsigned int mem_stream_switch_subordinate_fifo_0_slot1 = 0x000200E4;
// Stream Switch Subordinate Configuration FIFO 0
const unsigned int mem_stream_switch_subordinate_fifo_0_slot2 = 0x000200E8;
// Stream Switch Subordinate Configuration FIFO 0
const unsigned int mem_stream_switch_subordinate_fifo_0_slot3 = 0x000200EC;
// Stream Switch Subordinate Configuration South 0
const unsigned int mem_stream_switch_subordinate_south_0_slot0 = 0x000200F0;
// Stream Switch Subordinate Configuration South 0
const unsigned int mem_stream_switch_subordinate_south_0_slot1 = 0x000200F4;
// Stream Switch Subordinate Configuration South 0
const unsigned int mem_stream_switch_subordinate_south_0_slot2 = 0x000200F8;
// Stream Switch Subordinate Configuration South 0
const unsigned int mem_stream_switch_subordinate_south_0_slot3 = 0x000200FC;
// Stream Switch Subordinate Configuration South 1
const unsigned int mem_stream_switch_subordinate_south_1_slot0 = 0x00020100;
// Stream Switch Subordinate Configuration South 1
const unsigned int mem_stream_switch_subordinate_south_1_slot1 = 0x00020104;
// Stream Switch Subordinate Configuration South 1
const unsigned int mem_stream_switch_subordinate_south_1_slot2 = 0x00020108;
// Stream Switch Subordinate Configuration South 1
const unsigned int mem_stream_switch_subordinate_south_1_slot3 = 0x0002010C;
// Stream Switch Subordinate Configuration South X
const unsigned int mem_stream_switch_subordinate_south_x_slot0 = 0x00020110;
// Stream Switch Subordinate Configuration South X
const unsigned int mem_stream_switch_subordinate_south_x_slot1 = 0x00020114;
// Stream Switch Subordinate Configuration South X
const unsigned int mem_stream_switch_subordinate_south_x_slot2 = 0x00020118;
// Stream Switch Subordinate Configuration South X
const unsigned int mem_stream_switch_subordinate_south_x_slot3 = 0x0002011C;
// Stream Switch Subordinate Configuration South Y
const unsigned int mem_stream_switch_subordinate_south_y_slot0 = 0x00020120;
// Stream Switch Subordinate Configuration South Y
const unsigned int mem_stream_switch_subordinate_south_y_slot1 = 0x00020124;
// Stream Switch Subordinate Configuration South Y
const unsigned int mem_stream_switch_subordinate_south_y_slot2 = 0x00020128;
// Stream Switch Subordinate Configuration South Y
const unsigned int mem_stream_switch_subordinate_south_y_slot3 = 0x0002012C;
// Stream Switch Subordinate Configuration North 0
const unsigned int mem_stream_switch_subordinate_north_0_slot0 = 0x00020130;
// Stream Switch Subordinate Configuration North 0
const unsigned int mem_stream_switch_subordinate_north_0_slot1 = 0x00020134;
// Stream Switch Subordinate Configuration North 0
const unsigned int mem_stream_switch_subordinate_north_0_slot2 = 0x00020138;
// Stream Switch Subordinate Configuration North 0
const unsigned int mem_stream_switch_subordinate_north_0_slot3 = 0x0002013C;
// Stream Switch Subordinate Configuration North 1
const unsigned int mem_stream_switch_subordinate_north_1_slot0 = 0x00020140;
// Stream Switch Subordinate Configuration North 1
const unsigned int mem_stream_switch_subordinate_north_1_slot1 = 0x00020144;
// Stream Switch Subordinate Configuration North 1
const unsigned int mem_stream_switch_subordinate_north_1_slot2 = 0x00020148;
// Stream Switch Subordinate Configuration North 1
const unsigned int mem_stream_switch_subordinate_north_1_slot3 = 0x0002014C;
// Stream Switch Subordinate Configuration North X
const unsigned int mem_stream_switch_subordinate_north_x_slot0 = 0x00020150;
// Stream Switch Subordinate Configuration North X
const unsigned int mem_stream_switch_subordinate_north_x_slot1 = 0x00020154;
// Stream Switch Subordinate Configuration North X
const unsigned int mem_stream_switch_subordinate_north_x_slot2 = 0x00020158;
// Stream Switch Subordinate Configuration North X
const unsigned int mem_stream_switch_subordinate_north_x_slot3 = 0x0002015C;
// Stream Switch Subordinate Configuration South_Control 0
const unsigned int mem_stream_switch_subordinate_south_control_0_slot0 = 0x00020160;
// Stream Switch Subordinate Configuration South_Control 0
const unsigned int mem_stream_switch_subordinate_south_control_0_slot1 = 0x00020164;
// Stream Switch Subordinate Configuration South_Control 0
const unsigned int mem_stream_switch_subordinate_south_control_0_slot2 = 0x00020168;
// Stream Switch Subordinate Configuration South_Control 0
const unsigned int mem_stream_switch_subordinate_south_control_0_slot3 = 0x0002016C;
// Stream Switch Subordinate Configuration 32-bit Switch 0
const unsigned int mem_stream_switch_subordinate_32b_switch_0_slot0 = 0x00020170;
// Stream Switch Subordinate Configuration 32-bit Switch 0
const unsigned int mem_stream_switch_subordinate_32b_switch_0_slot1 = 0x00020174;
// Stream Switch Subordinate Configuration 32-bit Switch 0
const unsigned int mem_stream_switch_subordinate_32b_switch_0_slot2 = 0x00020178;
// Stream Switch Subordinate Configuration 32-bit Switch 0
const unsigned int mem_stream_switch_subordinate_32b_switch_0_slot3 = 0x0002017C;
// Stream Switch Deterministic Merge Arbiter:0 Subordinate:0,1
const unsigned int mem_stream_switch_deterministic_merge_arb0_subordinate0_1 = 0x00020180;
// Stream Switch Deterministic Merge Arbiter:0 Subordinate:2,3
const unsigned int mem_stream_switch_deterministic_merge_arb0_subordinate2_3 = 0x00020184;
// Stream Switch Deterministic Merge Arbiter:0 Control
const unsigned int mem_stream_switch_deterministic_merge_arb0_ctrl = 0x00020188;
// Stream Switch Deterministic Merge Arbiter:1 Subordinate:0,1
const unsigned int mem_stream_switch_deterministic_merge_arb1_subordinate0_1 = 0x0002018C;
// Stream Switch Deterministic Merge Arbiter:1 Subordinate:2,3
const unsigned int mem_stream_switch_deterministic_merge_arb1_subordinate2_3 = 0x00020190;
// Stream Switch Deterministic Merge Arbiter:1 Control
const unsigned int mem_stream_switch_deterministic_merge_arb1_ctrl = 0x00020194;
// 32-bit Stream Switch Manager Configuration South 0
const unsigned int mem_stream_switch_32b_manager_config_south_0 = 0x000201A0;
// 32-bit Stream Switch Manager Configuration West 0
const unsigned int mem_stream_switch_32b_manager_config_west_0 = 0x000201A4;
// 32-bit Stream Switch Manager Configuration North 0
const unsigned int mem_stream_switch_32b_manager_config_north_0 = 0x000201A8;
// 32-bit Stream Switch Manager Configuration East 0
const unsigned int mem_stream_switch_32b_manager_config_east_0 = 0x000201AC;
// 32-bit Stream Switch Manager Configuration 512-bit Switch 0
const unsigned int mem_stream_switch_32b_manager_config_512b_switch_0 = 0x000201B0;
// 32-bit Stream Switch Manager Configuration Tile Ctrl 0 (to be removed)
const unsigned int mem_stream_switch_32b_manager_config_tile_ctrl_0 = 0x000201B4;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 0
const unsigned int mem_stream_switch_32b_subordinate_config_tile_ctrl_0 = 0x000201C0;
// 32-bit Stream Switch Subordinate Configuration Trace 0
const unsigned int mem_stream_switch_32b_subordinate_config_trace_0 = 0x000201C4;
// 32-bit Stream Switch Subordinate Configuration South 0
const unsigned int mem_stream_switch_32b_subordinate_config_south_0 = 0x000201C8;
// 32-bit Stream Switch Subordinate Configuration West 0
const unsigned int mem_stream_switch_32b_subordinate_config_west_0 = 0x000201CC;
// 32-bit Stream Switch Subordinate Configuration North 0
const unsigned int mem_stream_switch_32b_subordinate_config_north_0 = 0x000201D0;
// 32-bit Stream Switch Subordinate Configuration East 0
const unsigned int mem_stream_switch_32b_subordinate_config_east_0 = 0x000201D4;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 0
const unsigned int mem_stream_switch_32b_subordinate_config_512b_switch_0 = 0x000201D8;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 0
const unsigned int mem_stream_switch_32b_subordinate_tile_ctrl_0_slot0 = 0x000201E0;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 0
const unsigned int mem_stream_switch_32b_subordinate_tile_ctrl_0_slot1 = 0x000201E4;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 0
const unsigned int mem_stream_switch_32b_subordinate_tile_ctrl_0_slot2 = 0x000201E8;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 0
const unsigned int mem_stream_switch_32b_subordinate_tile_ctrl_0_slot3 = 0x000201EC;
// 32-bit Stream Switch Subordinate Configuration Trace 0
const unsigned int mem_stream_switch_32b_subordinate_trace_0_slot0 = 0x000201F0;
// 32-bit Stream Switch Subordinate Configuration Trace 0
const unsigned int mem_stream_switch_32b_subordinate_trace_0_slot1 = 0x000201F4;
// 32-bit Stream Switch Subordinate Configuration Trace 0
const unsigned int mem_stream_switch_32b_subordinate_trace_0_slot2 = 0x000201F8;
// 32-bit Stream Switch Subordinate Configuration Trace 0
const unsigned int mem_stream_switch_32b_subordinate_trace_0_slot3 = 0x000201FC;
// 32-bit Stream Switch Subordinate Configuration South 0
const unsigned int mem_stream_switch_32b_subordinate_south_0_slot0 = 0x00020200;
// 32-bit Stream Switch Subordinate Configuration South 0
const unsigned int mem_stream_switch_32b_subordinate_south_0_slot1 = 0x00020204;
// 32-bit Stream Switch Subordinate Configuration South 0
const unsigned int mem_stream_switch_32b_subordinate_south_0_slot2 = 0x00020208;
// 32-bit Stream Switch Subordinate Configuration South 0
const unsigned int mem_stream_switch_32b_subordinate_south_0_slot3 = 0x0002020C;
// 32-bit Stream Switch Subordinate Configuration West 0
const unsigned int mem_stream_switch_32b_subordinate_west_0_slot0 = 0x00020210;
// 32-bit Stream Switch Subordinate Configuration West 0
const unsigned int mem_stream_switch_32b_subordinate_west_0_slot1 = 0x00020214;
// 32-bit Stream Switch Subordinate Configuration West 0
const unsigned int mem_stream_switch_32b_subordinate_west_0_slot2 = 0x00020218;
// 32-bit Stream Switch Subordinate Configuration West 0
const unsigned int mem_stream_switch_32b_subordinate_west_0_slot3 = 0x0002021C;
// 32-bit Stream Switch Subordinate Configuration North 0
const unsigned int mem_stream_switch_32b_subordinate_north_0_slot0 = 0x00020220;
// 32-bit Stream Switch Subordinate Configuration North 0
const unsigned int mem_stream_switch_32b_subordinate_north_0_slot1 = 0x00020224;
// 32-bit Stream Switch Subordinate Configuration North 0
const unsigned int mem_stream_switch_32b_subordinate_north_0_slot2 = 0x00020228;
// 32-bit Stream Switch Subordinate Configuration North 0
const unsigned int mem_stream_switch_32b_subordinate_north_0_slot3 = 0x0002022C;
// 32-bit Stream Switch Subordinate Configuration East 0
const unsigned int mem_stream_switch_32b_subordinate_east_0_slot0 = 0x00020230;
// 32-bit Stream Switch Subordinate Configuration East 0
const unsigned int mem_stream_switch_32b_subordinate_east_0_slot1 = 0x00020234;
// 32-bit Stream Switch Subordinate Configuration East 0
const unsigned int mem_stream_switch_32b_subordinate_east_0_slot2 = 0x00020238;
// 32-bit Stream Switch Subordinate Configuration East 0
const unsigned int mem_stream_switch_32b_subordinate_east_0_slot3 = 0x0002023C;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 0
const unsigned int mem_stream_switch_32b_subordinate_512b_switch_0_slot0 = 0x00020240;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 0
const unsigned int mem_stream_switch_32b_subordinate_512b_switch_0_slot1 = 0x00020244;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 0
const unsigned int mem_stream_switch_32b_subordinate_512b_switch_0_slot2 = 0x00020248;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 0
const unsigned int mem_stream_switch_32b_subordinate_512b_switch_0_slot3 = 0x0002024C;
// Select Stream Switch Ports for event generation in switch A
const unsigned int mem_stream_switch_event_port_selection_a_0 = 0x00020250;
// Select Stream Switch Ports for event generation in switch A
const unsigned int mem_stream_switch_event_port_selection_a_1 = 0x00020254;
// Status of control packet handling for application A
const unsigned int mem_tile_control_packet_handler_status_a = 0x00020260;
// Performance Counters 7-6 Start and Stop Event
const unsigned int mem_performance_start_stop_6_7 = 0x00040000;
// Performance Counters 9-8 Start and Stop Event
const unsigned int mem_performance_start_stop_8_9 = 0x00040004;
// Performance Counters 11-10 Start and Stop Event
const unsigned int mem_performance_start_stop_10_11 = 0x00040008;
// Performance Counters 9-6 Reset Events
const unsigned int mem_performance_reset_6_9 = 0x0004000C;
// Performance Counters 11-10 Reset Events
const unsigned int mem_performance_reset_10_11 = 0x00040010;
// Performance Counter6
const unsigned int mem_performance_counter6 = 0x00040020;
// Performance Counter7
const unsigned int mem_performance_counter7 = 0x00040024;
// Performance Counter8
const unsigned int mem_performance_counter8 = 0x00040028;
// Performance Counter9
const unsigned int mem_performance_counter9 = 0x0004002C;
// Performance Counter10
const unsigned int mem_performance_counter10 = 0x00040030;
// Performance Counter11
const unsigned int mem_performance_counter11 = 0x00040034;
// Performance Counter6 Snapshot
const unsigned int mem_performance_counter6_snapshot = 0x00040040;
// Performance Counter7 Snapshot
const unsigned int mem_performance_counter7_snapshot = 0x00040044;
// Performance Counter8 Snapshot
const unsigned int mem_performance_counter8_snapshot = 0x00040048;
// Performance Counter9 Snapshot
const unsigned int mem_performance_counter9_snapshot = 0x0004004C;
// Performance Counter10 Snapshot
const unsigned int mem_performance_counter10_snapshot = 0x00040050;
// Performance Counter11 Snapshot
const unsigned int mem_performance_counter11_snapshot = 0x00040054;
// Performance Counter6 Event Value.
const unsigned int mem_performance_counter6_event_value = 0x00040060;
// Performance Counter7 Event Value.
const unsigned int mem_performance_counter7_event_value = 0x00040064;
// Performance Counter8 Event Value.
const unsigned int mem_performance_counter8_event_value = 0x00040068;
// Performance Counter9 Event Value.
const unsigned int mem_performance_counter9_event_value = 0x0004006C;
// Performance Counter10 Event Value.
const unsigned int mem_performance_counter10_event_value = 0x00040070;
// Performance Counter11 Event Value.
const unsigned int mem_performance_counter11_event_value = 0x00040074;
// Set performance counter snapshot load event for application B
const unsigned int mem_performance_counter_snapshots_load_event_b = 0x00040080;
// Generate an internal event in switch B
const unsigned int mem_event_generate_b = 0x00040090;
// Control of which Internal Event to Broadcast0 in switch B
const unsigned int mem_event_broadcast_b_0 = 0x000400A0;
// Control of which Internal Event to Broadcast1 in switch B
const unsigned int mem_event_broadcast_b_1 = 0x000400A4;
// Control of which Internal Event to Broadcast2 in switch B
const unsigned int mem_event_broadcast_b_2 = 0x000400A8;
// Control of which Internal Event to Broadcast3 in switch B
const unsigned int mem_event_broadcast_b_3 = 0x000400AC;
// Control of which Internal Event to Broadcast4 in switch B
const unsigned int mem_event_broadcast_b_4 = 0x000400B0;
// Control of which Internal Event to Broadcast5 in switch B
const unsigned int mem_event_broadcast_b_5 = 0x000400B4;
// Control of which Internal Event to Broadcast6 in switch B
const unsigned int mem_event_broadcast_b_6 = 0x000400B8;
// Control of which Internal Event to Broadcast7 in switch B
const unsigned int mem_event_broadcast_b_7 = 0x000400BC;
// Control of which Internal Event to Broadcast8 in switch B
const unsigned int mem_event_broadcast_b_8 = 0x000400C0;
// Control of which Internal Event to Broadcast9 in switch B
const unsigned int mem_event_broadcast_b_9 = 0x000400C4;
// Control of which Internal Event to Broadcast10 in switch B
const unsigned int mem_event_broadcast_b_10 = 0x000400C8;
// Control of which Internal Event to Broadcast11 in switch B
const unsigned int mem_event_broadcast_b_11 = 0x000400CC;
// Control of which Internal Event to Broadcast12 in switch B
const unsigned int mem_event_broadcast_b_12 = 0x000400D0;
// Control of which Internal Event to Broadcast13 in switch B
const unsigned int mem_event_broadcast_b_13 = 0x000400D4;
// Control of which Internal Event to Broadcast14 in switch B
const unsigned int mem_event_broadcast_b_14 = 0x000400D8;
// Control of which Internal Event to Broadcast15 in switch B
const unsigned int mem_event_broadcast_b_15 = 0x000400DC;
// Set block of broadcast signals to South in switch B
const unsigned int mem_event_broadcast_b_block_south_set = 0x000400E0;
// Clear block of broadcast signals to South in switch B
const unsigned int mem_event_broadcast_b_block_south_clr = 0x000400E4;
// Current value of block for broadcast signals to South in switch B
const unsigned int mem_event_broadcast_b_block_south_value = 0x000400E8;
// Set block of broadcast switch A signals to North in switch B
const unsigned int mem_event_broadcast_b_block_north_set = 0x000400F8;
// Clear block of broadcast switch A signals to North in switch B
const unsigned int mem_event_broadcast_b_block_north_clr = 0x000400FC;
// Current value of block for broadcast switch A signals to North in switch B
const unsigned int mem_event_broadcast_b_block_north_value = 0x00040100;
// Control of Trace B
const unsigned int mem_trace_b_control0 = 0x00040110;
// Control of Trace B: packet configuration
const unsigned int mem_trace_b_control1 = 0x00040114;
// Status of trace engine B
const unsigned int mem_trace_b_status = 0x00040118;
// Control of which Internal Event to Trace B
const unsigned int mem_trace_b_event0 = 0x00040120;
// Control of which Internal Event to Trace B
const unsigned int mem_trace_b_event1 = 0x00040124;
// Control of Internal Timer B
const unsigned int mem_timer_b_control = 0x00040130;
// Internal Timer B Event Value.
const unsigned int mem_timer_b_trig_event_low_value = 0x00040134;
// Internal Timer B Event Value.
const unsigned int mem_timer_b_trig_event_high_value = 0x00040138;
// Internal Timer B Low part Value.
const unsigned int mem_timer_b_low = 0x00040140;
// Internal Timer B High part Value.
const unsigned int mem_timer_b_high = 0x00040144;
// Define Watchpoint4 address and write strobe mask
const unsigned int mem_watchpoint4_address = 0x00040150;
// Define Watchpoint4 access flags
const unsigned int mem_watchpoint4_access_flags = 0x00040154;
// Define Watchpoint5 address and write strobe mask
const unsigned int mem_watchpoint5_address = 0x00040158;
// Define Watchpoint5 access flags
const unsigned int mem_watchpoint5_access_flags = 0x0004015C;
// Define Watchpoint6 address and write strobe mask
const unsigned int mem_watchpoint6_address = 0x00040160;
// Define Watchpoint6 access flags
const unsigned int mem_watchpoint6_access_flags = 0x00040164;
// Define Watchpoint7 address and write strobe mask
const unsigned int mem_watchpoint7_address = 0x00040168;
// Define Watchpoint7 access flags
const unsigned int mem_watchpoint7_access_flags = 0x0004016C;
// Internal event status register0 application B
const unsigned int mem_event_status_b_0 = 0x00040170;
// Internal event status register1 application B
const unsigned int mem_event_status_b_1 = 0x00040174;
// Internal event status register2 application B
const unsigned int mem_event_status_b_2 = 0x00040178;
// Internal event status register3 application B
const unsigned int mem_event_status_b_3 = 0x0004017C;
// Internal event status register4 application B
const unsigned int mem_event_status_b_4 = 0x00040180;
// Internal event status register5 application B
const unsigned int mem_event_status_b_5 = 0x00040184;
// Internal event status register6 application B
const unsigned int mem_event_status_b_6 = 0x00040188;
// Combo events input events A-D application B
const unsigned int mem_combo_event_inputs0_b = 0x00040190;
// Combo events input events E-H application B
const unsigned int mem_combo_event_inputs1_b = 0x00040194;
// Combo events control bits for combo 0-2 application B
const unsigned int mem_combo_event_control2_b = 0x00040198;
// Combo events control bits for combo 4-6 application B
const unsigned int mem_combo_event_control3_b = 0x0004019C;
// Configuration for edge detection events 0-1 application B
const unsigned int mem_edge_detection_event_control0_b = 0x000401A0;
// Configuration for edge detection events 2-3 application B
const unsigned int mem_edge_detection_event_control1_b = 0x000401A4;
// Configuration for edge detection events 4-5 application B
const unsigned int mem_edge_detection_event_control2_b = 0x000401A8;
// Configuration for edge detection events 6-7 application B
const unsigned int mem_edge_detection_event_control3_b = 0x000401AC;
// Event enable for Group 0 application B
const unsigned int mem_event_group_0_enable_b = 0x000401B0;
// Event enable for Watchpoint Group application B
const unsigned int mem_event_group_watchpoint_enable_b = 0x000401B4;
// Event enable for DMA Group application B
const unsigned int mem_event_group_dma_enable_b = 0x000401B8;
// Event enable for Lock Group application B
const unsigned int mem_event_group_lock_enable_b = 0x000401BC;
// Event enable for Stream Switch Group application B
const unsigned int mem_event_group_stream_switch_enable_b = 0x000401C0;
// Event enable for Memory Conflict Group application B
const unsigned int mem_event_group_memory_conflict_enable_b = 0x000401C4;
// Event enable for Error Group application B
const unsigned int mem_event_group_error_enable_b = 0x000401C8;
// Event enable for Broadcast Group application B
const unsigned int mem_event_group_broadcast_enable_b = 0x000401CC;
// Event enable for User Group application B
const unsigned int mem_event_group_user_event_enable_b = 0x000401D0;
// Spare register for application B
const unsigned int mem_spare_reg_b = 0x000401E0;
// DMA S2MM 4 BD0 0
const unsigned int mem_dma_s2mm_4_bd0_0 = 0x00048000;
// DMA S2MM 4 BD0 1
const unsigned int mem_dma_s2mm_4_bd0_1 = 0x00048004;
// DMA S2MM 4 BD0 2
const unsigned int mem_dma_s2mm_4_bd0_2 = 0x00048008;
// DMA S2MM 4 BD0 3
const unsigned int mem_dma_s2mm_4_bd0_3 = 0x0004800C;
// DMA S2MM 4 BD0 4
const unsigned int mem_dma_s2mm_4_bd0_4 = 0x00048010;
// DMA S2MM 4 BD0 5
const unsigned int mem_dma_s2mm_4_bd0_5 = 0x00048014;
// DMA S2MM 4 BD0 6
const unsigned int mem_dma_s2mm_4_bd0_6 = 0x00048018;
// DMA S2MM 4 BD0 7
const unsigned int mem_dma_s2mm_4_bd0_7 = 0x0004801C;
// DMA S2MM 4 BD0 8
const unsigned int mem_dma_s2mm_4_bd0_8 = 0x00048020;
// DMA S2MM 4 BD0 9
const unsigned int mem_dma_s2mm_4_bd0_9 = 0x00048024;
// DMA S2MM 4 BD0 10
const unsigned int mem_dma_s2mm_4_bd0_10 = 0x00048028;
// DMA S2MM 4 BD1 0
const unsigned int mem_dma_s2mm_4_bd1_0 = 0x00048030;
// DMA S2MM 4 BD1 1
const unsigned int mem_dma_s2mm_4_bd1_1 = 0x00048034;
// DMA S2MM 4 BD1 2
const unsigned int mem_dma_s2mm_4_bd1_2 = 0x00048038;
// DMA S2MM 4 BD1 3
const unsigned int mem_dma_s2mm_4_bd1_3 = 0x0004803C;
// DMA S2MM 4 BD1 4
const unsigned int mem_dma_s2mm_4_bd1_4 = 0x00048040;
// DMA S2MM 4 BD1 5
const unsigned int mem_dma_s2mm_4_bd1_5 = 0x00048044;
// DMA S2MM 4 BD1 6
const unsigned int mem_dma_s2mm_4_bd1_6 = 0x00048048;
// DMA S2MM 4 BD1 7
const unsigned int mem_dma_s2mm_4_bd1_7 = 0x0004804C;
// DMA S2MM 4 BD1 8
const unsigned int mem_dma_s2mm_4_bd1_8 = 0x00048050;
// DMA S2MM 4 BD1 9
const unsigned int mem_dma_s2mm_4_bd1_9 = 0x00048054;
// DMA S2MM 4 BD1 10
const unsigned int mem_dma_s2mm_4_bd1_10 = 0x00048058;
// DMA S2MM 4 BD2 0
const unsigned int mem_dma_s2mm_4_bd2_0 = 0x00048060;
// DMA S2MM 4 BD2 1
const unsigned int mem_dma_s2mm_4_bd2_1 = 0x00048064;
// DMA S2MM 4 BD2 2
const unsigned int mem_dma_s2mm_4_bd2_2 = 0x00048068;
// DMA S2MM 4 BD2 3
const unsigned int mem_dma_s2mm_4_bd2_3 = 0x0004806C;
// DMA S2MM 4 BD2 4
const unsigned int mem_dma_s2mm_4_bd2_4 = 0x00048070;
// DMA S2MM 4 BD2 5
const unsigned int mem_dma_s2mm_4_bd2_5 = 0x00048074;
// DMA S2MM 4 BD2 6
const unsigned int mem_dma_s2mm_4_bd2_6 = 0x00048078;
// DMA S2MM 4 BD2 7
const unsigned int mem_dma_s2mm_4_bd2_7 = 0x0004807C;
// DMA S2MM 4 BD2 8
const unsigned int mem_dma_s2mm_4_bd2_8 = 0x00048080;
// DMA S2MM 4 BD2 9
const unsigned int mem_dma_s2mm_4_bd2_9 = 0x00048084;
// DMA S2MM 4 BD2 10
const unsigned int mem_dma_s2mm_4_bd2_10 = 0x00048088;
// DMA S2MM 4 BD3 0
const unsigned int mem_dma_s2mm_4_bd3_0 = 0x00048090;
// DMA S2MM 4 BD3 1
const unsigned int mem_dma_s2mm_4_bd3_1 = 0x00048094;
// DMA S2MM 4 BD3 2
const unsigned int mem_dma_s2mm_4_bd3_2 = 0x00048098;
// DMA S2MM 4 BD3 3
const unsigned int mem_dma_s2mm_4_bd3_3 = 0x0004809C;
// DMA S2MM 4 BD3 4
const unsigned int mem_dma_s2mm_4_bd3_4 = 0x000480A0;
// DMA S2MM 4 BD3 5
const unsigned int mem_dma_s2mm_4_bd3_5 = 0x000480A4;
// DMA S2MM 4 BD3 6
const unsigned int mem_dma_s2mm_4_bd3_6 = 0x000480A8;
// DMA S2MM 4 BD3 7
const unsigned int mem_dma_s2mm_4_bd3_7 = 0x000480AC;
// DMA S2MM 4 BD3 8
const unsigned int mem_dma_s2mm_4_bd3_8 = 0x000480B0;
// DMA S2MM 4 BD3 9
const unsigned int mem_dma_s2mm_4_bd3_9 = 0x000480B4;
// DMA S2MM 4 BD3 10
const unsigned int mem_dma_s2mm_4_bd3_10 = 0x000480B8;
// DMA S2MM 4 BD4 0
const unsigned int mem_dma_s2mm_4_bd4_0 = 0x000480C0;
// DMA S2MM 4 BD4 1
const unsigned int mem_dma_s2mm_4_bd4_1 = 0x000480C4;
// DMA S2MM 4 BD4 2
const unsigned int mem_dma_s2mm_4_bd4_2 = 0x000480C8;
// DMA S2MM 4 BD4 3
const unsigned int mem_dma_s2mm_4_bd4_3 = 0x000480CC;
// DMA S2MM 4 BD4 4
const unsigned int mem_dma_s2mm_4_bd4_4 = 0x000480D0;
// DMA S2MM 4 BD4 5
const unsigned int mem_dma_s2mm_4_bd4_5 = 0x000480D4;
// DMA S2MM 4 BD4 6
const unsigned int mem_dma_s2mm_4_bd4_6 = 0x000480D8;
// DMA S2MM 4 BD4 7
const unsigned int mem_dma_s2mm_4_bd4_7 = 0x000480DC;
// DMA S2MM 4 BD4 8
const unsigned int mem_dma_s2mm_4_bd4_8 = 0x000480E0;
// DMA S2MM 4 BD4 9
const unsigned int mem_dma_s2mm_4_bd4_9 = 0x000480E4;
// DMA S2MM 4 BD4 10
const unsigned int mem_dma_s2mm_4_bd4_10 = 0x000480E8;
// DMA S2MM 4 BD5 0
const unsigned int mem_dma_s2mm_4_bd5_0 = 0x000480F0;
// DMA S2MM 4 BD5 1
const unsigned int mem_dma_s2mm_4_bd5_1 = 0x000480F4;
// DMA S2MM 4 BD5 2
const unsigned int mem_dma_s2mm_4_bd5_2 = 0x000480F8;
// DMA S2MM 4 BD5 3
const unsigned int mem_dma_s2mm_4_bd5_3 = 0x000480FC;
// DMA S2MM 4 BD5 4
const unsigned int mem_dma_s2mm_4_bd5_4 = 0x00048100;
// DMA S2MM 4 BD5 5
const unsigned int mem_dma_s2mm_4_bd5_5 = 0x00048104;
// DMA S2MM 4 BD5 6
const unsigned int mem_dma_s2mm_4_bd5_6 = 0x00048108;
// DMA S2MM 4 BD5 7
const unsigned int mem_dma_s2mm_4_bd5_7 = 0x0004810C;
// DMA S2MM 4 BD5 8
const unsigned int mem_dma_s2mm_4_bd5_8 = 0x00048110;
// DMA S2MM 4 BD5 9
const unsigned int mem_dma_s2mm_4_bd5_9 = 0x00048114;
// DMA S2MM 4 BD5 10
const unsigned int mem_dma_s2mm_4_bd5_10 = 0x00048118;
// DMA S2MM 4 BD6 0
const unsigned int mem_dma_s2mm_4_bd6_0 = 0x00048120;
// DMA S2MM 4 BD6 1
const unsigned int mem_dma_s2mm_4_bd6_1 = 0x00048124;
// DMA S2MM 4 BD6 2
const unsigned int mem_dma_s2mm_4_bd6_2 = 0x00048128;
// DMA S2MM 4 BD6 3
const unsigned int mem_dma_s2mm_4_bd6_3 = 0x0004812C;
// DMA S2MM 4 BD6 4
const unsigned int mem_dma_s2mm_4_bd6_4 = 0x00048130;
// DMA S2MM 4 BD6 5
const unsigned int mem_dma_s2mm_4_bd6_5 = 0x00048134;
// DMA S2MM 4 BD6 6
const unsigned int mem_dma_s2mm_4_bd6_6 = 0x00048138;
// DMA S2MM 4 BD6 7
const unsigned int mem_dma_s2mm_4_bd6_7 = 0x0004813C;
// DMA S2MM 4 BD6 8
const unsigned int mem_dma_s2mm_4_bd6_8 = 0x00048140;
// DMA S2MM 4 BD6 9
const unsigned int mem_dma_s2mm_4_bd6_9 = 0x00048144;
// DMA S2MM 4 BD6 10
const unsigned int mem_dma_s2mm_4_bd6_10 = 0x00048148;
// DMA S2MM 4 BD7 0
const unsigned int mem_dma_s2mm_4_bd7_0 = 0x00048150;
// DMA S2MM 4 BD7 1
const unsigned int mem_dma_s2mm_4_bd7_1 = 0x00048154;
// DMA S2MM 4 BD7 2
const unsigned int mem_dma_s2mm_4_bd7_2 = 0x00048158;
// DMA S2MM 4 BD7 3
const unsigned int mem_dma_s2mm_4_bd7_3 = 0x0004815C;
// DMA S2MM 4 BD7 4
const unsigned int mem_dma_s2mm_4_bd7_4 = 0x00048160;
// DMA S2MM 4 BD7 5
const unsigned int mem_dma_s2mm_4_bd7_5 = 0x00048164;
// DMA S2MM 4 BD7 6
const unsigned int mem_dma_s2mm_4_bd7_6 = 0x00048168;
// DMA S2MM 4 BD7 7
const unsigned int mem_dma_s2mm_4_bd7_7 = 0x0004816C;
// DMA S2MM 4 BD7 8
const unsigned int mem_dma_s2mm_4_bd7_8 = 0x00048170;
// DMA S2MM 4 BD7 9
const unsigned int mem_dma_s2mm_4_bd7_9 = 0x00048174;
// DMA S2MM 4 BD7 10
const unsigned int mem_dma_s2mm_4_bd7_10 = 0x00048178;
// DMA S2MM 4 BD8 0
const unsigned int mem_dma_s2mm_4_bd8_0 = 0x00048180;
// DMA S2MM 4 BD8 1
const unsigned int mem_dma_s2mm_4_bd8_1 = 0x00048184;
// DMA S2MM 4 BD8 2
const unsigned int mem_dma_s2mm_4_bd8_2 = 0x00048188;
// DMA S2MM 4 BD8 3
const unsigned int mem_dma_s2mm_4_bd8_3 = 0x0004818C;
// DMA S2MM 4 BD8 4
const unsigned int mem_dma_s2mm_4_bd8_4 = 0x00048190;
// DMA S2MM 4 BD8 5
const unsigned int mem_dma_s2mm_4_bd8_5 = 0x00048194;
// DMA S2MM 4 BD8 6
const unsigned int mem_dma_s2mm_4_bd8_6 = 0x00048198;
// DMA S2MM 4 BD8 7
const unsigned int mem_dma_s2mm_4_bd8_7 = 0x0004819C;
// DMA S2MM 4 BD8 8
const unsigned int mem_dma_s2mm_4_bd8_8 = 0x000481A0;
// DMA S2MM 4 BD8 9
const unsigned int mem_dma_s2mm_4_bd8_9 = 0x000481A4;
// DMA S2MM 4 BD8 10
const unsigned int mem_dma_s2mm_4_bd8_10 = 0x000481A8;
// DMA S2MM 4 BD9 0
const unsigned int mem_dma_s2mm_4_bd9_0 = 0x000481B0;
// DMA S2MM 4 BD9 1
const unsigned int mem_dma_s2mm_4_bd9_1 = 0x000481B4;
// DMA S2MM 4 BD9 2
const unsigned int mem_dma_s2mm_4_bd9_2 = 0x000481B8;
// DMA S2MM 4 BD9 3
const unsigned int mem_dma_s2mm_4_bd9_3 = 0x000481BC;
// DMA S2MM 4 BD9 4
const unsigned int mem_dma_s2mm_4_bd9_4 = 0x000481C0;
// DMA S2MM 4 BD9 5
const unsigned int mem_dma_s2mm_4_bd9_5 = 0x000481C4;
// DMA S2MM 4 BD9 6
const unsigned int mem_dma_s2mm_4_bd9_6 = 0x000481C8;
// DMA S2MM 4 BD9 7
const unsigned int mem_dma_s2mm_4_bd9_7 = 0x000481CC;
// DMA S2MM 4 BD9 8
const unsigned int mem_dma_s2mm_4_bd9_8 = 0x000481D0;
// DMA S2MM 4 BD9 9
const unsigned int mem_dma_s2mm_4_bd9_9 = 0x000481D4;
// DMA S2MM 4 BD9 10
const unsigned int mem_dma_s2mm_4_bd9_10 = 0x000481D8;
// DMA S2MM 4 BD10 0
const unsigned int mem_dma_s2mm_4_bd10_0 = 0x000481E0;
// DMA S2MM 4 BD10 1
const unsigned int mem_dma_s2mm_4_bd10_1 = 0x000481E4;
// DMA S2MM 4 BD10 2
const unsigned int mem_dma_s2mm_4_bd10_2 = 0x000481E8;
// DMA S2MM 4 BD10 3
const unsigned int mem_dma_s2mm_4_bd10_3 = 0x000481EC;
// DMA S2MM 4 BD10 4
const unsigned int mem_dma_s2mm_4_bd10_4 = 0x000481F0;
// DMA S2MM 4 BD10 5
const unsigned int mem_dma_s2mm_4_bd10_5 = 0x000481F4;
// DMA S2MM 4 BD10 6
const unsigned int mem_dma_s2mm_4_bd10_6 = 0x000481F8;
// DMA S2MM 4 BD10 7
const unsigned int mem_dma_s2mm_4_bd10_7 = 0x000481FC;
// DMA S2MM 4 BD10 8
const unsigned int mem_dma_s2mm_4_bd10_8 = 0x00048200;
// DMA S2MM 4 BD10 9
const unsigned int mem_dma_s2mm_4_bd10_9 = 0x00048204;
// DMA S2MM 4 BD10 10
const unsigned int mem_dma_s2mm_4_bd10_10 = 0x00048208;
// DMA S2MM 4 BD11 0
const unsigned int mem_dma_s2mm_4_bd11_0 = 0x00048210;
// DMA S2MM 4 BD11 1
const unsigned int mem_dma_s2mm_4_bd11_1 = 0x00048214;
// DMA S2MM 4 BD11 2
const unsigned int mem_dma_s2mm_4_bd11_2 = 0x00048218;
// DMA S2MM 4 BD11 3
const unsigned int mem_dma_s2mm_4_bd11_3 = 0x0004821C;
// DMA S2MM 4 BD11 4
const unsigned int mem_dma_s2mm_4_bd11_4 = 0x00048220;
// DMA S2MM 4 BD11 5
const unsigned int mem_dma_s2mm_4_bd11_5 = 0x00048224;
// DMA S2MM 4 BD11 6
const unsigned int mem_dma_s2mm_4_bd11_6 = 0x00048228;
// DMA S2MM 4 BD11 7
const unsigned int mem_dma_s2mm_4_bd11_7 = 0x0004822C;
// DMA S2MM 4 BD11 8
const unsigned int mem_dma_s2mm_4_bd11_8 = 0x00048230;
// DMA S2MM 4 BD11 9
const unsigned int mem_dma_s2mm_4_bd11_9 = 0x00048234;
// DMA S2MM 4 BD11 10
const unsigned int mem_dma_s2mm_4_bd11_10 = 0x00048238;
// DMA S2MM 4 BD12 0
const unsigned int mem_dma_s2mm_4_bd12_0 = 0x00048240;
// DMA S2MM 4 BD12 1
const unsigned int mem_dma_s2mm_4_bd12_1 = 0x00048244;
// DMA S2MM 4 BD12 2
const unsigned int mem_dma_s2mm_4_bd12_2 = 0x00048248;
// DMA S2MM 4 BD12 3
const unsigned int mem_dma_s2mm_4_bd12_3 = 0x0004824C;
// DMA S2MM 4 BD12 4
const unsigned int mem_dma_s2mm_4_bd12_4 = 0x00048250;
// DMA S2MM 4 BD12 5
const unsigned int mem_dma_s2mm_4_bd12_5 = 0x00048254;
// DMA S2MM 4 BD12 6
const unsigned int mem_dma_s2mm_4_bd12_6 = 0x00048258;
// DMA S2MM 4 BD12 7
const unsigned int mem_dma_s2mm_4_bd12_7 = 0x0004825C;
// DMA S2MM 4 BD12 8
const unsigned int mem_dma_s2mm_4_bd12_8 = 0x00048260;
// DMA S2MM 4 BD12 9
const unsigned int mem_dma_s2mm_4_bd12_9 = 0x00048264;
// DMA S2MM 4 BD12 10
const unsigned int mem_dma_s2mm_4_bd12_10 = 0x00048268;
// DMA S2MM 4 BD13 0
const unsigned int mem_dma_s2mm_4_bd13_0 = 0x00048270;
// DMA S2MM 4 BD13 1
const unsigned int mem_dma_s2mm_4_bd13_1 = 0x00048274;
// DMA S2MM 4 BD13 2
const unsigned int mem_dma_s2mm_4_bd13_2 = 0x00048278;
// DMA S2MM 4 BD13 3
const unsigned int mem_dma_s2mm_4_bd13_3 = 0x0004827C;
// DMA S2MM 4 BD13 4
const unsigned int mem_dma_s2mm_4_bd13_4 = 0x00048280;
// DMA S2MM 4 BD13 5
const unsigned int mem_dma_s2mm_4_bd13_5 = 0x00048284;
// DMA S2MM 4 BD13 6
const unsigned int mem_dma_s2mm_4_bd13_6 = 0x00048288;
// DMA S2MM 4 BD13 7
const unsigned int mem_dma_s2mm_4_bd13_7 = 0x0004828C;
// DMA S2MM 4 BD13 8
const unsigned int mem_dma_s2mm_4_bd13_8 = 0x00048290;
// DMA S2MM 4 BD13 9
const unsigned int mem_dma_s2mm_4_bd13_9 = 0x00048294;
// DMA S2MM 4 BD13 10
const unsigned int mem_dma_s2mm_4_bd13_10 = 0x00048298;
// DMA S2MM 4 BD14 0
const unsigned int mem_dma_s2mm_4_bd14_0 = 0x000482A0;
// DMA S2MM 4 BD14 1
const unsigned int mem_dma_s2mm_4_bd14_1 = 0x000482A4;
// DMA S2MM 4 BD14 2
const unsigned int mem_dma_s2mm_4_bd14_2 = 0x000482A8;
// DMA S2MM 4 BD14 3
const unsigned int mem_dma_s2mm_4_bd14_3 = 0x000482AC;
// DMA S2MM 4 BD14 4
const unsigned int mem_dma_s2mm_4_bd14_4 = 0x000482B0;
// DMA S2MM 4 BD14 5
const unsigned int mem_dma_s2mm_4_bd14_5 = 0x000482B4;
// DMA S2MM 4 BD14 6
const unsigned int mem_dma_s2mm_4_bd14_6 = 0x000482B8;
// DMA S2MM 4 BD14 7
const unsigned int mem_dma_s2mm_4_bd14_7 = 0x000482BC;
// DMA S2MM 4 BD14 8
const unsigned int mem_dma_s2mm_4_bd14_8 = 0x000482C0;
// DMA S2MM 4 BD14 9
const unsigned int mem_dma_s2mm_4_bd14_9 = 0x000482C4;
// DMA S2MM 4 BD14 10
const unsigned int mem_dma_s2mm_4_bd14_10 = 0x000482C8;
// DMA S2MM 4 BD15 0
const unsigned int mem_dma_s2mm_4_bd15_0 = 0x000482D0;
// DMA S2MM 4 BD15 1
const unsigned int mem_dma_s2mm_4_bd15_1 = 0x000482D4;
// DMA S2MM 4 BD15 2
const unsigned int mem_dma_s2mm_4_bd15_2 = 0x000482D8;
// DMA S2MM 4 BD15 3
const unsigned int mem_dma_s2mm_4_bd15_3 = 0x000482DC;
// DMA S2MM 4 BD15 4
const unsigned int mem_dma_s2mm_4_bd15_4 = 0x000482E0;
// DMA S2MM 4 BD15 5
const unsigned int mem_dma_s2mm_4_bd15_5 = 0x000482E4;
// DMA S2MM 4 BD15 6
const unsigned int mem_dma_s2mm_4_bd15_6 = 0x000482E8;
// DMA S2MM 4 BD15 7
const unsigned int mem_dma_s2mm_4_bd15_7 = 0x000482EC;
// DMA S2MM 4 BD15 8
const unsigned int mem_dma_s2mm_4_bd15_8 = 0x000482F0;
// DMA S2MM 4 BD15 9
const unsigned int mem_dma_s2mm_4_bd15_9 = 0x000482F4;
// DMA S2MM 4 BD15 10
const unsigned int mem_dma_s2mm_4_bd15_10 = 0x000482F8;
// DMA S2MM 5 BD0 0
const unsigned int mem_dma_s2mm_5_bd0_0 = 0x00048300;
// DMA S2MM 5 BD0 1
const unsigned int mem_dma_s2mm_5_bd0_1 = 0x00048304;
// DMA S2MM 5 BD0 2
const unsigned int mem_dma_s2mm_5_bd0_2 = 0x00048308;
// DMA S2MM 5 BD0 3
const unsigned int mem_dma_s2mm_5_bd0_3 = 0x0004830C;
// DMA S2MM 5 BD0 4
const unsigned int mem_dma_s2mm_5_bd0_4 = 0x00048310;
// DMA S2MM 5 BD0 5
const unsigned int mem_dma_s2mm_5_bd0_5 = 0x00048314;
// DMA S2MM 5 BD0 6
const unsigned int mem_dma_s2mm_5_bd0_6 = 0x00048318;
// DMA S2MM 5 BD0 7
const unsigned int mem_dma_s2mm_5_bd0_7 = 0x0004831C;
// DMA S2MM 5 BD0 8
const unsigned int mem_dma_s2mm_5_bd0_8 = 0x00048320;
// DMA S2MM 5 BD0 9
const unsigned int mem_dma_s2mm_5_bd0_9 = 0x00048324;
// DMA S2MM 5 BD0 10
const unsigned int mem_dma_s2mm_5_bd0_10 = 0x00048328;
// DMA S2MM 5 BD1 0
const unsigned int mem_dma_s2mm_5_bd1_0 = 0x00048330;
// DMA S2MM 5 BD1 1
const unsigned int mem_dma_s2mm_5_bd1_1 = 0x00048334;
// DMA S2MM 5 BD1 2
const unsigned int mem_dma_s2mm_5_bd1_2 = 0x00048338;
// DMA S2MM 5 BD1 3
const unsigned int mem_dma_s2mm_5_bd1_3 = 0x0004833C;
// DMA S2MM 5 BD1 4
const unsigned int mem_dma_s2mm_5_bd1_4 = 0x00048340;
// DMA S2MM 5 BD1 5
const unsigned int mem_dma_s2mm_5_bd1_5 = 0x00048344;
// DMA S2MM 5 BD1 6
const unsigned int mem_dma_s2mm_5_bd1_6 = 0x00048348;
// DMA S2MM 5 BD1 7
const unsigned int mem_dma_s2mm_5_bd1_7 = 0x0004834C;
// DMA S2MM 5 BD1 8
const unsigned int mem_dma_s2mm_5_bd1_8 = 0x00048350;
// DMA S2MM 5 BD1 9
const unsigned int mem_dma_s2mm_5_bd1_9 = 0x00048354;
// DMA S2MM 5 BD1 10
const unsigned int mem_dma_s2mm_5_bd1_10 = 0x00048358;
// DMA S2MM 5 BD2 0
const unsigned int mem_dma_s2mm_5_bd2_0 = 0x00048360;
// DMA S2MM 5 BD2 1
const unsigned int mem_dma_s2mm_5_bd2_1 = 0x00048364;
// DMA S2MM 5 BD2 2
const unsigned int mem_dma_s2mm_5_bd2_2 = 0x00048368;
// DMA S2MM 5 BD2 3
const unsigned int mem_dma_s2mm_5_bd2_3 = 0x0004836C;
// DMA S2MM 5 BD2 4
const unsigned int mem_dma_s2mm_5_bd2_4 = 0x00048370;
// DMA S2MM 5 BD2 5
const unsigned int mem_dma_s2mm_5_bd2_5 = 0x00048374;
// DMA S2MM 5 BD2 6
const unsigned int mem_dma_s2mm_5_bd2_6 = 0x00048378;
// DMA S2MM 5 BD2 7
const unsigned int mem_dma_s2mm_5_bd2_7 = 0x0004837C;
// DMA S2MM 5 BD2 8
const unsigned int mem_dma_s2mm_5_bd2_8 = 0x00048380;
// DMA S2MM 5 BD2 9
const unsigned int mem_dma_s2mm_5_bd2_9 = 0x00048384;
// DMA S2MM 5 BD2 10
const unsigned int mem_dma_s2mm_5_bd2_10 = 0x00048388;
// DMA S2MM 5 BD3 0
const unsigned int mem_dma_s2mm_5_bd3_0 = 0x00048390;
// DMA S2MM 5 BD3 1
const unsigned int mem_dma_s2mm_5_bd3_1 = 0x00048394;
// DMA S2MM 5 BD3 2
const unsigned int mem_dma_s2mm_5_bd3_2 = 0x00048398;
// DMA S2MM 5 BD3 3
const unsigned int mem_dma_s2mm_5_bd3_3 = 0x0004839C;
// DMA S2MM 5 BD3 4
const unsigned int mem_dma_s2mm_5_bd3_4 = 0x000483A0;
// DMA S2MM 5 BD3 5
const unsigned int mem_dma_s2mm_5_bd3_5 = 0x000483A4;
// DMA S2MM 5 BD3 6
const unsigned int mem_dma_s2mm_5_bd3_6 = 0x000483A8;
// DMA S2MM 5 BD3 7
const unsigned int mem_dma_s2mm_5_bd3_7 = 0x000483AC;
// DMA S2MM 5 BD3 8
const unsigned int mem_dma_s2mm_5_bd3_8 = 0x000483B0;
// DMA S2MM 5 BD3 9
const unsigned int mem_dma_s2mm_5_bd3_9 = 0x000483B4;
// DMA S2MM 5 BD3 10
const unsigned int mem_dma_s2mm_5_bd3_10 = 0x000483B8;
// DMA S2MM 5 BD4 0
const unsigned int mem_dma_s2mm_5_bd4_0 = 0x000483C0;
// DMA S2MM 5 BD4 1
const unsigned int mem_dma_s2mm_5_bd4_1 = 0x000483C4;
// DMA S2MM 5 BD4 2
const unsigned int mem_dma_s2mm_5_bd4_2 = 0x000483C8;
// DMA S2MM 5 BD4 3
const unsigned int mem_dma_s2mm_5_bd4_3 = 0x000483CC;
// DMA S2MM 5 BD4 4
const unsigned int mem_dma_s2mm_5_bd4_4 = 0x000483D0;
// DMA S2MM 5 BD4 5
const unsigned int mem_dma_s2mm_5_bd4_5 = 0x000483D4;
// DMA S2MM 5 BD4 6
const unsigned int mem_dma_s2mm_5_bd4_6 = 0x000483D8;
// DMA S2MM 5 BD4 7
const unsigned int mem_dma_s2mm_5_bd4_7 = 0x000483DC;
// DMA S2MM 5 BD4 8
const unsigned int mem_dma_s2mm_5_bd4_8 = 0x000483E0;
// DMA S2MM 5 BD4 9
const unsigned int mem_dma_s2mm_5_bd4_9 = 0x000483E4;
// DMA S2MM 5 BD4 10
const unsigned int mem_dma_s2mm_5_bd4_10 = 0x000483E8;
// DMA S2MM 5 BD5 0
const unsigned int mem_dma_s2mm_5_bd5_0 = 0x000483F0;
// DMA S2MM 5 BD5 1
const unsigned int mem_dma_s2mm_5_bd5_1 = 0x000483F4;
// DMA S2MM 5 BD5 2
const unsigned int mem_dma_s2mm_5_bd5_2 = 0x000483F8;
// DMA S2MM 5 BD5 3
const unsigned int mem_dma_s2mm_5_bd5_3 = 0x000483FC;
// DMA S2MM 5 BD5 4
const unsigned int mem_dma_s2mm_5_bd5_4 = 0x00048400;
// DMA S2MM 5 BD5 5
const unsigned int mem_dma_s2mm_5_bd5_5 = 0x00048404;
// DMA S2MM 5 BD5 6
const unsigned int mem_dma_s2mm_5_bd5_6 = 0x00048408;
// DMA S2MM 5 BD5 7
const unsigned int mem_dma_s2mm_5_bd5_7 = 0x0004840C;
// DMA S2MM 5 BD5 8
const unsigned int mem_dma_s2mm_5_bd5_8 = 0x00048410;
// DMA S2MM 5 BD5 9
const unsigned int mem_dma_s2mm_5_bd5_9 = 0x00048414;
// DMA S2MM 5 BD5 10
const unsigned int mem_dma_s2mm_5_bd5_10 = 0x00048418;
// DMA S2MM 5 BD6 0
const unsigned int mem_dma_s2mm_5_bd6_0 = 0x00048420;
// DMA S2MM 5 BD6 1
const unsigned int mem_dma_s2mm_5_bd6_1 = 0x00048424;
// DMA S2MM 5 BD6 2
const unsigned int mem_dma_s2mm_5_bd6_2 = 0x00048428;
// DMA S2MM 5 BD6 3
const unsigned int mem_dma_s2mm_5_bd6_3 = 0x0004842C;
// DMA S2MM 5 BD6 4
const unsigned int mem_dma_s2mm_5_bd6_4 = 0x00048430;
// DMA S2MM 5 BD6 5
const unsigned int mem_dma_s2mm_5_bd6_5 = 0x00048434;
// DMA S2MM 5 BD6 6
const unsigned int mem_dma_s2mm_5_bd6_6 = 0x00048438;
// DMA S2MM 5 BD6 7
const unsigned int mem_dma_s2mm_5_bd6_7 = 0x0004843C;
// DMA S2MM 5 BD6 8
const unsigned int mem_dma_s2mm_5_bd6_8 = 0x00048440;
// DMA S2MM 5 BD6 9
const unsigned int mem_dma_s2mm_5_bd6_9 = 0x00048444;
// DMA S2MM 5 BD6 10
const unsigned int mem_dma_s2mm_5_bd6_10 = 0x00048448;
// DMA S2MM 5 BD7 0
const unsigned int mem_dma_s2mm_5_bd7_0 = 0x00048450;
// DMA S2MM 5 BD7 1
const unsigned int mem_dma_s2mm_5_bd7_1 = 0x00048454;
// DMA S2MM 5 BD7 2
const unsigned int mem_dma_s2mm_5_bd7_2 = 0x00048458;
// DMA S2MM 5 BD7 3
const unsigned int mem_dma_s2mm_5_bd7_3 = 0x0004845C;
// DMA S2MM 5 BD7 4
const unsigned int mem_dma_s2mm_5_bd7_4 = 0x00048460;
// DMA S2MM 5 BD7 5
const unsigned int mem_dma_s2mm_5_bd7_5 = 0x00048464;
// DMA S2MM 5 BD7 6
const unsigned int mem_dma_s2mm_5_bd7_6 = 0x00048468;
// DMA S2MM 5 BD7 7
const unsigned int mem_dma_s2mm_5_bd7_7 = 0x0004846C;
// DMA S2MM 5 BD7 8
const unsigned int mem_dma_s2mm_5_bd7_8 = 0x00048470;
// DMA S2MM 5 BD7 9
const unsigned int mem_dma_s2mm_5_bd7_9 = 0x00048474;
// DMA S2MM 5 BD7 10
const unsigned int mem_dma_s2mm_5_bd7_10 = 0x00048478;
// DMA S2MM 5 BD8 0
const unsigned int mem_dma_s2mm_5_bd8_0 = 0x00048480;
// DMA S2MM 5 BD8 1
const unsigned int mem_dma_s2mm_5_bd8_1 = 0x00048484;
// DMA S2MM 5 BD8 2
const unsigned int mem_dma_s2mm_5_bd8_2 = 0x00048488;
// DMA S2MM 5 BD8 3
const unsigned int mem_dma_s2mm_5_bd8_3 = 0x0004848C;
// DMA S2MM 5 BD8 4
const unsigned int mem_dma_s2mm_5_bd8_4 = 0x00048490;
// DMA S2MM 5 BD8 5
const unsigned int mem_dma_s2mm_5_bd8_5 = 0x00048494;
// DMA S2MM 5 BD8 6
const unsigned int mem_dma_s2mm_5_bd8_6 = 0x00048498;
// DMA S2MM 5 BD8 7
const unsigned int mem_dma_s2mm_5_bd8_7 = 0x0004849C;
// DMA S2MM 5 BD8 8
const unsigned int mem_dma_s2mm_5_bd8_8 = 0x000484A0;
// DMA S2MM 5 BD8 9
const unsigned int mem_dma_s2mm_5_bd8_9 = 0x000484A4;
// DMA S2MM 5 BD8 10
const unsigned int mem_dma_s2mm_5_bd8_10 = 0x000484A8;
// DMA S2MM 5 BD9 0
const unsigned int mem_dma_s2mm_5_bd9_0 = 0x000484B0;
// DMA S2MM 5 BD9 1
const unsigned int mem_dma_s2mm_5_bd9_1 = 0x000484B4;
// DMA S2MM 5 BD9 2
const unsigned int mem_dma_s2mm_5_bd9_2 = 0x000484B8;
// DMA S2MM 5 BD9 3
const unsigned int mem_dma_s2mm_5_bd9_3 = 0x000484BC;
// DMA S2MM 5 BD9 4
const unsigned int mem_dma_s2mm_5_bd9_4 = 0x000484C0;
// DMA S2MM 5 BD9 5
const unsigned int mem_dma_s2mm_5_bd9_5 = 0x000484C4;
// DMA S2MM 5 BD9 6
const unsigned int mem_dma_s2mm_5_bd9_6 = 0x000484C8;
// DMA S2MM 5 BD9 7
const unsigned int mem_dma_s2mm_5_bd9_7 = 0x000484CC;
// DMA S2MM 5 BD9 8
const unsigned int mem_dma_s2mm_5_bd9_8 = 0x000484D0;
// DMA S2MM 5 BD9 9
const unsigned int mem_dma_s2mm_5_bd9_9 = 0x000484D4;
// DMA S2MM 5 BD9 10
const unsigned int mem_dma_s2mm_5_bd9_10 = 0x000484D8;
// DMA S2MM 5 BD10 0
const unsigned int mem_dma_s2mm_5_bd10_0 = 0x000484E0;
// DMA S2MM 5 BD10 1
const unsigned int mem_dma_s2mm_5_bd10_1 = 0x000484E4;
// DMA S2MM 5 BD10 2
const unsigned int mem_dma_s2mm_5_bd10_2 = 0x000484E8;
// DMA S2MM 5 BD10 3
const unsigned int mem_dma_s2mm_5_bd10_3 = 0x000484EC;
// DMA S2MM 5 BD10 4
const unsigned int mem_dma_s2mm_5_bd10_4 = 0x000484F0;
// DMA S2MM 5 BD10 5
const unsigned int mem_dma_s2mm_5_bd10_5 = 0x000484F4;
// DMA S2MM 5 BD10 6
const unsigned int mem_dma_s2mm_5_bd10_6 = 0x000484F8;
// DMA S2MM 5 BD10 7
const unsigned int mem_dma_s2mm_5_bd10_7 = 0x000484FC;
// DMA S2MM 5 BD10 8
const unsigned int mem_dma_s2mm_5_bd10_8 = 0x00048500;
// DMA S2MM 5 BD10 9
const unsigned int mem_dma_s2mm_5_bd10_9 = 0x00048504;
// DMA S2MM 5 BD10 10
const unsigned int mem_dma_s2mm_5_bd10_10 = 0x00048508;
// DMA S2MM 5 BD11 0
const unsigned int mem_dma_s2mm_5_bd11_0 = 0x00048510;
// DMA S2MM 5 BD11 1
const unsigned int mem_dma_s2mm_5_bd11_1 = 0x00048514;
// DMA S2MM 5 BD11 2
const unsigned int mem_dma_s2mm_5_bd11_2 = 0x00048518;
// DMA S2MM 5 BD11 3
const unsigned int mem_dma_s2mm_5_bd11_3 = 0x0004851C;
// DMA S2MM 5 BD11 4
const unsigned int mem_dma_s2mm_5_bd11_4 = 0x00048520;
// DMA S2MM 5 BD11 5
const unsigned int mem_dma_s2mm_5_bd11_5 = 0x00048524;
// DMA S2MM 5 BD11 6
const unsigned int mem_dma_s2mm_5_bd11_6 = 0x00048528;
// DMA S2MM 5 BD11 7
const unsigned int mem_dma_s2mm_5_bd11_7 = 0x0004852C;
// DMA S2MM 5 BD11 8
const unsigned int mem_dma_s2mm_5_bd11_8 = 0x00048530;
// DMA S2MM 5 BD11 9
const unsigned int mem_dma_s2mm_5_bd11_9 = 0x00048534;
// DMA S2MM 5 BD11 10
const unsigned int mem_dma_s2mm_5_bd11_10 = 0x00048538;
// DMA S2MM 5 BD12 0
const unsigned int mem_dma_s2mm_5_bd12_0 = 0x00048540;
// DMA S2MM 5 BD12 1
const unsigned int mem_dma_s2mm_5_bd12_1 = 0x00048544;
// DMA S2MM 5 BD12 2
const unsigned int mem_dma_s2mm_5_bd12_2 = 0x00048548;
// DMA S2MM 5 BD12 3
const unsigned int mem_dma_s2mm_5_bd12_3 = 0x0004854C;
// DMA S2MM 5 BD12 4
const unsigned int mem_dma_s2mm_5_bd12_4 = 0x00048550;
// DMA S2MM 5 BD12 5
const unsigned int mem_dma_s2mm_5_bd12_5 = 0x00048554;
// DMA S2MM 5 BD12 6
const unsigned int mem_dma_s2mm_5_bd12_6 = 0x00048558;
// DMA S2MM 5 BD12 7
const unsigned int mem_dma_s2mm_5_bd12_7 = 0x0004855C;
// DMA S2MM 5 BD12 8
const unsigned int mem_dma_s2mm_5_bd12_8 = 0x00048560;
// DMA S2MM 5 BD12 9
const unsigned int mem_dma_s2mm_5_bd12_9 = 0x00048564;
// DMA S2MM 5 BD12 10
const unsigned int mem_dma_s2mm_5_bd12_10 = 0x00048568;
// DMA S2MM 5 BD13 0
const unsigned int mem_dma_s2mm_5_bd13_0 = 0x00048570;
// DMA S2MM 5 BD13 1
const unsigned int mem_dma_s2mm_5_bd13_1 = 0x00048574;
// DMA S2MM 5 BD13 2
const unsigned int mem_dma_s2mm_5_bd13_2 = 0x00048578;
// DMA S2MM 5 BD13 3
const unsigned int mem_dma_s2mm_5_bd13_3 = 0x0004857C;
// DMA S2MM 5 BD13 4
const unsigned int mem_dma_s2mm_5_bd13_4 = 0x00048580;
// DMA S2MM 5 BD13 5
const unsigned int mem_dma_s2mm_5_bd13_5 = 0x00048584;
// DMA S2MM 5 BD13 6
const unsigned int mem_dma_s2mm_5_bd13_6 = 0x00048588;
// DMA S2MM 5 BD13 7
const unsigned int mem_dma_s2mm_5_bd13_7 = 0x0004858C;
// DMA S2MM 5 BD13 8
const unsigned int mem_dma_s2mm_5_bd13_8 = 0x00048590;
// DMA S2MM 5 BD13 9
const unsigned int mem_dma_s2mm_5_bd13_9 = 0x00048594;
// DMA S2MM 5 BD13 10
const unsigned int mem_dma_s2mm_5_bd13_10 = 0x00048598;
// DMA S2MM 5 BD14 0
const unsigned int mem_dma_s2mm_5_bd14_0 = 0x000485A0;
// DMA S2MM 5 BD14 1
const unsigned int mem_dma_s2mm_5_bd14_1 = 0x000485A4;
// DMA S2MM 5 BD14 2
const unsigned int mem_dma_s2mm_5_bd14_2 = 0x000485A8;
// DMA S2MM 5 BD14 3
const unsigned int mem_dma_s2mm_5_bd14_3 = 0x000485AC;
// DMA S2MM 5 BD14 4
const unsigned int mem_dma_s2mm_5_bd14_4 = 0x000485B0;
// DMA S2MM 5 BD14 5
const unsigned int mem_dma_s2mm_5_bd14_5 = 0x000485B4;
// DMA S2MM 5 BD14 6
const unsigned int mem_dma_s2mm_5_bd14_6 = 0x000485B8;
// DMA S2MM 5 BD14 7
const unsigned int mem_dma_s2mm_5_bd14_7 = 0x000485BC;
// DMA S2MM 5 BD14 8
const unsigned int mem_dma_s2mm_5_bd14_8 = 0x000485C0;
// DMA S2MM 5 BD14 9
const unsigned int mem_dma_s2mm_5_bd14_9 = 0x000485C4;
// DMA S2MM 5 BD14 10
const unsigned int mem_dma_s2mm_5_bd14_10 = 0x000485C8;
// DMA S2MM 5 BD15 0
const unsigned int mem_dma_s2mm_5_bd15_0 = 0x000485D0;
// DMA S2MM 5 BD15 1
const unsigned int mem_dma_s2mm_5_bd15_1 = 0x000485D4;
// DMA S2MM 5 BD15 2
const unsigned int mem_dma_s2mm_5_bd15_2 = 0x000485D8;
// DMA S2MM 5 BD15 3
const unsigned int mem_dma_s2mm_5_bd15_3 = 0x000485DC;
// DMA S2MM 5 BD15 4
const unsigned int mem_dma_s2mm_5_bd15_4 = 0x000485E0;
// DMA S2MM 5 BD15 5
const unsigned int mem_dma_s2mm_5_bd15_5 = 0x000485E4;
// DMA S2MM 5 BD15 6
const unsigned int mem_dma_s2mm_5_bd15_6 = 0x000485E8;
// DMA S2MM 5 BD15 7
const unsigned int mem_dma_s2mm_5_bd15_7 = 0x000485EC;
// DMA S2MM 5 BD15 8
const unsigned int mem_dma_s2mm_5_bd15_8 = 0x000485F0;
// DMA S2MM 5 BD15 9
const unsigned int mem_dma_s2mm_5_bd15_9 = 0x000485F4;
// DMA S2MM 5 BD15 10
const unsigned int mem_dma_s2mm_5_bd15_10 = 0x000485F8;
// DMA S2MM 6 BD0 0
const unsigned int mem_dma_s2mm_6_bd0_0 = 0x00048600;
// DMA S2MM 6 BD0 1
const unsigned int mem_dma_s2mm_6_bd0_1 = 0x00048604;
// DMA S2MM 6 BD0 2
const unsigned int mem_dma_s2mm_6_bd0_2 = 0x00048608;
// DMA S2MM 6 BD0 3
const unsigned int mem_dma_s2mm_6_bd0_3 = 0x0004860C;
// DMA S2MM 6 BD0 4
const unsigned int mem_dma_s2mm_6_bd0_4 = 0x00048610;
// DMA S2MM 6 BD0 5
const unsigned int mem_dma_s2mm_6_bd0_5 = 0x00048614;
// DMA S2MM 6 BD0 6
const unsigned int mem_dma_s2mm_6_bd0_6 = 0x00048618;
// DMA S2MM 6 BD0 7
const unsigned int mem_dma_s2mm_6_bd0_7 = 0x0004861C;
// DMA S2MM 6 BD0 8
const unsigned int mem_dma_s2mm_6_bd0_8 = 0x00048620;
// DMA S2MM 6 BD0 9
const unsigned int mem_dma_s2mm_6_bd0_9 = 0x00048624;
// DMA S2MM 6 BD0 10
const unsigned int mem_dma_s2mm_6_bd0_10 = 0x00048628;
// DMA S2MM 6 BD1 0
const unsigned int mem_dma_s2mm_6_bd1_0 = 0x00048630;
// DMA S2MM 6 BD1 1
const unsigned int mem_dma_s2mm_6_bd1_1 = 0x00048634;
// DMA S2MM 6 BD1 2
const unsigned int mem_dma_s2mm_6_bd1_2 = 0x00048638;
// DMA S2MM 6 BD1 3
const unsigned int mem_dma_s2mm_6_bd1_3 = 0x0004863C;
// DMA S2MM 6 BD1 4
const unsigned int mem_dma_s2mm_6_bd1_4 = 0x00048640;
// DMA S2MM 6 BD1 5
const unsigned int mem_dma_s2mm_6_bd1_5 = 0x00048644;
// DMA S2MM 6 BD1 6
const unsigned int mem_dma_s2mm_6_bd1_6 = 0x00048648;
// DMA S2MM 6 BD1 7
const unsigned int mem_dma_s2mm_6_bd1_7 = 0x0004864C;
// DMA S2MM 6 BD1 8
const unsigned int mem_dma_s2mm_6_bd1_8 = 0x00048650;
// DMA S2MM 6 BD1 9
const unsigned int mem_dma_s2mm_6_bd1_9 = 0x00048654;
// DMA S2MM 6 BD1 10
const unsigned int mem_dma_s2mm_6_bd1_10 = 0x00048658;
// DMA S2MM 6 BD2 0
const unsigned int mem_dma_s2mm_6_bd2_0 = 0x00048660;
// DMA S2MM 6 BD2 1
const unsigned int mem_dma_s2mm_6_bd2_1 = 0x00048664;
// DMA S2MM 6 BD2 2
const unsigned int mem_dma_s2mm_6_bd2_2 = 0x00048668;
// DMA S2MM 6 BD2 3
const unsigned int mem_dma_s2mm_6_bd2_3 = 0x0004866C;
// DMA S2MM 6 BD2 4
const unsigned int mem_dma_s2mm_6_bd2_4 = 0x00048670;
// DMA S2MM 6 BD2 5
const unsigned int mem_dma_s2mm_6_bd2_5 = 0x00048674;
// DMA S2MM 6 BD2 6
const unsigned int mem_dma_s2mm_6_bd2_6 = 0x00048678;
// DMA S2MM 6 BD2 7
const unsigned int mem_dma_s2mm_6_bd2_7 = 0x0004867C;
// DMA S2MM 6 BD2 8
const unsigned int mem_dma_s2mm_6_bd2_8 = 0x00048680;
// DMA S2MM 6 BD2 9
const unsigned int mem_dma_s2mm_6_bd2_9 = 0x00048684;
// DMA S2MM 6 BD2 10
const unsigned int mem_dma_s2mm_6_bd2_10 = 0x00048688;
// DMA S2MM 6 BD3 0
const unsigned int mem_dma_s2mm_6_bd3_0 = 0x00048690;
// DMA S2MM 6 BD3 1
const unsigned int mem_dma_s2mm_6_bd3_1 = 0x00048694;
// DMA S2MM 6 BD3 2
const unsigned int mem_dma_s2mm_6_bd3_2 = 0x00048698;
// DMA S2MM 6 BD3 3
const unsigned int mem_dma_s2mm_6_bd3_3 = 0x0004869C;
// DMA S2MM 6 BD3 4
const unsigned int mem_dma_s2mm_6_bd3_4 = 0x000486A0;
// DMA S2MM 6 BD3 5
const unsigned int mem_dma_s2mm_6_bd3_5 = 0x000486A4;
// DMA S2MM 6 BD3 6
const unsigned int mem_dma_s2mm_6_bd3_6 = 0x000486A8;
// DMA S2MM 6 BD3 7
const unsigned int mem_dma_s2mm_6_bd3_7 = 0x000486AC;
// DMA S2MM 6 BD3 8
const unsigned int mem_dma_s2mm_6_bd3_8 = 0x000486B0;
// DMA S2MM 6 BD3 9
const unsigned int mem_dma_s2mm_6_bd3_9 = 0x000486B4;
// DMA S2MM 6 BD3 10
const unsigned int mem_dma_s2mm_6_bd3_10 = 0x000486B8;
// DMA S2MM 6 BD4 0
const unsigned int mem_dma_s2mm_6_bd4_0 = 0x000486C0;
// DMA S2MM 6 BD4 1
const unsigned int mem_dma_s2mm_6_bd4_1 = 0x000486C4;
// DMA S2MM 6 BD4 2
const unsigned int mem_dma_s2mm_6_bd4_2 = 0x000486C8;
// DMA S2MM 6 BD4 3
const unsigned int mem_dma_s2mm_6_bd4_3 = 0x000486CC;
// DMA S2MM 6 BD4 4
const unsigned int mem_dma_s2mm_6_bd4_4 = 0x000486D0;
// DMA S2MM 6 BD4 5
const unsigned int mem_dma_s2mm_6_bd4_5 = 0x000486D4;
// DMA S2MM 6 BD4 6
const unsigned int mem_dma_s2mm_6_bd4_6 = 0x000486D8;
// DMA S2MM 6 BD4 7
const unsigned int mem_dma_s2mm_6_bd4_7 = 0x000486DC;
// DMA S2MM 6 BD4 8
const unsigned int mem_dma_s2mm_6_bd4_8 = 0x000486E0;
// DMA S2MM 6 BD4 9
const unsigned int mem_dma_s2mm_6_bd4_9 = 0x000486E4;
// DMA S2MM 6 BD4 10
const unsigned int mem_dma_s2mm_6_bd4_10 = 0x000486E8;
// DMA S2MM 6 BD5 0
const unsigned int mem_dma_s2mm_6_bd5_0 = 0x000486F0;
// DMA S2MM 6 BD5 1
const unsigned int mem_dma_s2mm_6_bd5_1 = 0x000486F4;
// DMA S2MM 6 BD5 2
const unsigned int mem_dma_s2mm_6_bd5_2 = 0x000486F8;
// DMA S2MM 6 BD5 3
const unsigned int mem_dma_s2mm_6_bd5_3 = 0x000486FC;
// DMA S2MM 6 BD5 4
const unsigned int mem_dma_s2mm_6_bd5_4 = 0x00048700;
// DMA S2MM 6 BD5 5
const unsigned int mem_dma_s2mm_6_bd5_5 = 0x00048704;
// DMA S2MM 6 BD5 6
const unsigned int mem_dma_s2mm_6_bd5_6 = 0x00048708;
// DMA S2MM 6 BD5 7
const unsigned int mem_dma_s2mm_6_bd5_7 = 0x0004870C;
// DMA S2MM 6 BD5 8
const unsigned int mem_dma_s2mm_6_bd5_8 = 0x00048710;
// DMA S2MM 6 BD5 9
const unsigned int mem_dma_s2mm_6_bd5_9 = 0x00048714;
// DMA S2MM 6 BD5 10
const unsigned int mem_dma_s2mm_6_bd5_10 = 0x00048718;
// DMA S2MM 6 BD6 0
const unsigned int mem_dma_s2mm_6_bd6_0 = 0x00048720;
// DMA S2MM 6 BD6 1
const unsigned int mem_dma_s2mm_6_bd6_1 = 0x00048724;
// DMA S2MM 6 BD6 2
const unsigned int mem_dma_s2mm_6_bd6_2 = 0x00048728;
// DMA S2MM 6 BD6 3
const unsigned int mem_dma_s2mm_6_bd6_3 = 0x0004872C;
// DMA S2MM 6 BD6 4
const unsigned int mem_dma_s2mm_6_bd6_4 = 0x00048730;
// DMA S2MM 6 BD6 5
const unsigned int mem_dma_s2mm_6_bd6_5 = 0x00048734;
// DMA S2MM 6 BD6 6
const unsigned int mem_dma_s2mm_6_bd6_6 = 0x00048738;
// DMA S2MM 6 BD6 7
const unsigned int mem_dma_s2mm_6_bd6_7 = 0x0004873C;
// DMA S2MM 6 BD6 8
const unsigned int mem_dma_s2mm_6_bd6_8 = 0x00048740;
// DMA S2MM 6 BD6 9
const unsigned int mem_dma_s2mm_6_bd6_9 = 0x00048744;
// DMA S2MM 6 BD6 10
const unsigned int mem_dma_s2mm_6_bd6_10 = 0x00048748;
// DMA S2MM 6 BD7 0
const unsigned int mem_dma_s2mm_6_bd7_0 = 0x00048750;
// DMA S2MM 6 BD7 1
const unsigned int mem_dma_s2mm_6_bd7_1 = 0x00048754;
// DMA S2MM 6 BD7 2
const unsigned int mem_dma_s2mm_6_bd7_2 = 0x00048758;
// DMA S2MM 6 BD7 3
const unsigned int mem_dma_s2mm_6_bd7_3 = 0x0004875C;
// DMA S2MM 6 BD7 4
const unsigned int mem_dma_s2mm_6_bd7_4 = 0x00048760;
// DMA S2MM 6 BD7 5
const unsigned int mem_dma_s2mm_6_bd7_5 = 0x00048764;
// DMA S2MM 6 BD7 6
const unsigned int mem_dma_s2mm_6_bd7_6 = 0x00048768;
// DMA S2MM 6 BD7 7
const unsigned int mem_dma_s2mm_6_bd7_7 = 0x0004876C;
// DMA S2MM 6 BD7 8
const unsigned int mem_dma_s2mm_6_bd7_8 = 0x00048770;
// DMA S2MM 6 BD7 9
const unsigned int mem_dma_s2mm_6_bd7_9 = 0x00048774;
// DMA S2MM 6 BD7 10
const unsigned int mem_dma_s2mm_6_bd7_10 = 0x00048778;
// DMA S2MM 6 BD8 0
const unsigned int mem_dma_s2mm_6_bd8_0 = 0x00048780;
// DMA S2MM 6 BD8 1
const unsigned int mem_dma_s2mm_6_bd8_1 = 0x00048784;
// DMA S2MM 6 BD8 2
const unsigned int mem_dma_s2mm_6_bd8_2 = 0x00048788;
// DMA S2MM 6 BD8 3
const unsigned int mem_dma_s2mm_6_bd8_3 = 0x0004878C;
// DMA S2MM 6 BD8 4
const unsigned int mem_dma_s2mm_6_bd8_4 = 0x00048790;
// DMA S2MM 6 BD8 5
const unsigned int mem_dma_s2mm_6_bd8_5 = 0x00048794;
// DMA S2MM 6 BD8 6
const unsigned int mem_dma_s2mm_6_bd8_6 = 0x00048798;
// DMA S2MM 6 BD8 7
const unsigned int mem_dma_s2mm_6_bd8_7 = 0x0004879C;
// DMA S2MM 6 BD8 8
const unsigned int mem_dma_s2mm_6_bd8_8 = 0x000487A0;
// DMA S2MM 6 BD8 9
const unsigned int mem_dma_s2mm_6_bd8_9 = 0x000487A4;
// DMA S2MM 6 BD8 10
const unsigned int mem_dma_s2mm_6_bd8_10 = 0x000487A8;
// DMA S2MM 6 BD9 0
const unsigned int mem_dma_s2mm_6_bd9_0 = 0x000487B0;
// DMA S2MM 6 BD9 1
const unsigned int mem_dma_s2mm_6_bd9_1 = 0x000487B4;
// DMA S2MM 6 BD9 2
const unsigned int mem_dma_s2mm_6_bd9_2 = 0x000487B8;
// DMA S2MM 6 BD9 3
const unsigned int mem_dma_s2mm_6_bd9_3 = 0x000487BC;
// DMA S2MM 6 BD9 4
const unsigned int mem_dma_s2mm_6_bd9_4 = 0x000487C0;
// DMA S2MM 6 BD9 5
const unsigned int mem_dma_s2mm_6_bd9_5 = 0x000487C4;
// DMA S2MM 6 BD9 6
const unsigned int mem_dma_s2mm_6_bd9_6 = 0x000487C8;
// DMA S2MM 6 BD9 7
const unsigned int mem_dma_s2mm_6_bd9_7 = 0x000487CC;
// DMA S2MM 6 BD9 8
const unsigned int mem_dma_s2mm_6_bd9_8 = 0x000487D0;
// DMA S2MM 6 BD9 9
const unsigned int mem_dma_s2mm_6_bd9_9 = 0x000487D4;
// DMA S2MM 6 BD9 10
const unsigned int mem_dma_s2mm_6_bd9_10 = 0x000487D8;
// DMA S2MM 6 BD10 0
const unsigned int mem_dma_s2mm_6_bd10_0 = 0x000487E0;
// DMA S2MM 6 BD10 1
const unsigned int mem_dma_s2mm_6_bd10_1 = 0x000487E4;
// DMA S2MM 6 BD10 2
const unsigned int mem_dma_s2mm_6_bd10_2 = 0x000487E8;
// DMA S2MM 6 BD10 3
const unsigned int mem_dma_s2mm_6_bd10_3 = 0x000487EC;
// DMA S2MM 6 BD10 4
const unsigned int mem_dma_s2mm_6_bd10_4 = 0x000487F0;
// DMA S2MM 6 BD10 5
const unsigned int mem_dma_s2mm_6_bd10_5 = 0x000487F4;
// DMA S2MM 6 BD10 6
const unsigned int mem_dma_s2mm_6_bd10_6 = 0x000487F8;
// DMA S2MM 6 BD10 7
const unsigned int mem_dma_s2mm_6_bd10_7 = 0x000487FC;
// DMA S2MM 6 BD10 8
const unsigned int mem_dma_s2mm_6_bd10_8 = 0x00048800;
// DMA S2MM 6 BD10 9
const unsigned int mem_dma_s2mm_6_bd10_9 = 0x00048804;
// DMA S2MM 6 BD10 10
const unsigned int mem_dma_s2mm_6_bd10_10 = 0x00048808;
// DMA S2MM 6 BD11 0
const unsigned int mem_dma_s2mm_6_bd11_0 = 0x00048810;
// DMA S2MM 6 BD11 1
const unsigned int mem_dma_s2mm_6_bd11_1 = 0x00048814;
// DMA S2MM 6 BD11 2
const unsigned int mem_dma_s2mm_6_bd11_2 = 0x00048818;
// DMA S2MM 6 BD11 3
const unsigned int mem_dma_s2mm_6_bd11_3 = 0x0004881C;
// DMA S2MM 6 BD11 4
const unsigned int mem_dma_s2mm_6_bd11_4 = 0x00048820;
// DMA S2MM 6 BD11 5
const unsigned int mem_dma_s2mm_6_bd11_5 = 0x00048824;
// DMA S2MM 6 BD11 6
const unsigned int mem_dma_s2mm_6_bd11_6 = 0x00048828;
// DMA S2MM 6 BD11 7
const unsigned int mem_dma_s2mm_6_bd11_7 = 0x0004882C;
// DMA S2MM 6 BD11 8
const unsigned int mem_dma_s2mm_6_bd11_8 = 0x00048830;
// DMA S2MM 6 BD11 9
const unsigned int mem_dma_s2mm_6_bd11_9 = 0x00048834;
// DMA S2MM 6 BD11 10
const unsigned int mem_dma_s2mm_6_bd11_10 = 0x00048838;
// DMA S2MM 6 BD12 0
const unsigned int mem_dma_s2mm_6_bd12_0 = 0x00048840;
// DMA S2MM 6 BD12 1
const unsigned int mem_dma_s2mm_6_bd12_1 = 0x00048844;
// DMA S2MM 6 BD12 2
const unsigned int mem_dma_s2mm_6_bd12_2 = 0x00048848;
// DMA S2MM 6 BD12 3
const unsigned int mem_dma_s2mm_6_bd12_3 = 0x0004884C;
// DMA S2MM 6 BD12 4
const unsigned int mem_dma_s2mm_6_bd12_4 = 0x00048850;
// DMA S2MM 6 BD12 5
const unsigned int mem_dma_s2mm_6_bd12_5 = 0x00048854;
// DMA S2MM 6 BD12 6
const unsigned int mem_dma_s2mm_6_bd12_6 = 0x00048858;
// DMA S2MM 6 BD12 7
const unsigned int mem_dma_s2mm_6_bd12_7 = 0x0004885C;
// DMA S2MM 6 BD12 8
const unsigned int mem_dma_s2mm_6_bd12_8 = 0x00048860;
// DMA S2MM 6 BD12 9
const unsigned int mem_dma_s2mm_6_bd12_9 = 0x00048864;
// DMA S2MM 6 BD12 10
const unsigned int mem_dma_s2mm_6_bd12_10 = 0x00048868;
// DMA S2MM 6 BD13 0
const unsigned int mem_dma_s2mm_6_bd13_0 = 0x00048870;
// DMA S2MM 6 BD13 1
const unsigned int mem_dma_s2mm_6_bd13_1 = 0x00048874;
// DMA S2MM 6 BD13 2
const unsigned int mem_dma_s2mm_6_bd13_2 = 0x00048878;
// DMA S2MM 6 BD13 3
const unsigned int mem_dma_s2mm_6_bd13_3 = 0x0004887C;
// DMA S2MM 6 BD13 4
const unsigned int mem_dma_s2mm_6_bd13_4 = 0x00048880;
// DMA S2MM 6 BD13 5
const unsigned int mem_dma_s2mm_6_bd13_5 = 0x00048884;
// DMA S2MM 6 BD13 6
const unsigned int mem_dma_s2mm_6_bd13_6 = 0x00048888;
// DMA S2MM 6 BD13 7
const unsigned int mem_dma_s2mm_6_bd13_7 = 0x0004888C;
// DMA S2MM 6 BD13 8
const unsigned int mem_dma_s2mm_6_bd13_8 = 0x00048890;
// DMA S2MM 6 BD13 9
const unsigned int mem_dma_s2mm_6_bd13_9 = 0x00048894;
// DMA S2MM 6 BD13 10
const unsigned int mem_dma_s2mm_6_bd13_10 = 0x00048898;
// DMA S2MM 6 BD14 0
const unsigned int mem_dma_s2mm_6_bd14_0 = 0x000488A0;
// DMA S2MM 6 BD14 1
const unsigned int mem_dma_s2mm_6_bd14_1 = 0x000488A4;
// DMA S2MM 6 BD14 2
const unsigned int mem_dma_s2mm_6_bd14_2 = 0x000488A8;
// DMA S2MM 6 BD14 3
const unsigned int mem_dma_s2mm_6_bd14_3 = 0x000488AC;
// DMA S2MM 6 BD14 4
const unsigned int mem_dma_s2mm_6_bd14_4 = 0x000488B0;
// DMA S2MM 6 BD14 5
const unsigned int mem_dma_s2mm_6_bd14_5 = 0x000488B4;
// DMA S2MM 6 BD14 6
const unsigned int mem_dma_s2mm_6_bd14_6 = 0x000488B8;
// DMA S2MM 6 BD14 7
const unsigned int mem_dma_s2mm_6_bd14_7 = 0x000488BC;
// DMA S2MM 6 BD14 8
const unsigned int mem_dma_s2mm_6_bd14_8 = 0x000488C0;
// DMA S2MM 6 BD14 9
const unsigned int mem_dma_s2mm_6_bd14_9 = 0x000488C4;
// DMA S2MM 6 BD14 10
const unsigned int mem_dma_s2mm_6_bd14_10 = 0x000488C8;
// DMA S2MM 6 BD15 0
const unsigned int mem_dma_s2mm_6_bd15_0 = 0x000488D0;
// DMA S2MM 6 BD15 1
const unsigned int mem_dma_s2mm_6_bd15_1 = 0x000488D4;
// DMA S2MM 6 BD15 2
const unsigned int mem_dma_s2mm_6_bd15_2 = 0x000488D8;
// DMA S2MM 6 BD15 3
const unsigned int mem_dma_s2mm_6_bd15_3 = 0x000488DC;
// DMA S2MM 6 BD15 4
const unsigned int mem_dma_s2mm_6_bd15_4 = 0x000488E0;
// DMA S2MM 6 BD15 5
const unsigned int mem_dma_s2mm_6_bd15_5 = 0x000488E4;
// DMA S2MM 6 BD15 6
const unsigned int mem_dma_s2mm_6_bd15_6 = 0x000488E8;
// DMA S2MM 6 BD15 7
const unsigned int mem_dma_s2mm_6_bd15_7 = 0x000488EC;
// DMA S2MM 6 BD15 8
const unsigned int mem_dma_s2mm_6_bd15_8 = 0x000488F0;
// DMA S2MM 6 BD15 9
const unsigned int mem_dma_s2mm_6_bd15_9 = 0x000488F4;
// DMA S2MM 6 BD15 10
const unsigned int mem_dma_s2mm_6_bd15_10 = 0x000488F8;
// DMA S2MM 7 BD0 0
const unsigned int mem_dma_s2mm_7_bd0_0 = 0x00048900;
// DMA S2MM 7 BD0 1
const unsigned int mem_dma_s2mm_7_bd0_1 = 0x00048904;
// DMA S2MM 7 BD0 2
const unsigned int mem_dma_s2mm_7_bd0_2 = 0x00048908;
// DMA S2MM 7 BD0 3
const unsigned int mem_dma_s2mm_7_bd0_3 = 0x0004890C;
// DMA S2MM 7 BD0 4
const unsigned int mem_dma_s2mm_7_bd0_4 = 0x00048910;
// DMA S2MM 7 BD0 5
const unsigned int mem_dma_s2mm_7_bd0_5 = 0x00048914;
// DMA S2MM 7 BD0 6
const unsigned int mem_dma_s2mm_7_bd0_6 = 0x00048918;
// DMA S2MM 7 BD0 7
const unsigned int mem_dma_s2mm_7_bd0_7 = 0x0004891C;
// DMA S2MM 7 BD0 8
const unsigned int mem_dma_s2mm_7_bd0_8 = 0x00048920;
// DMA S2MM 7 BD0 9
const unsigned int mem_dma_s2mm_7_bd0_9 = 0x00048924;
// DMA S2MM 7 BD0 10
const unsigned int mem_dma_s2mm_7_bd0_10 = 0x00048928;
// DMA S2MM 7 BD1 0
const unsigned int mem_dma_s2mm_7_bd1_0 = 0x00048930;
// DMA S2MM 7 BD1 1
const unsigned int mem_dma_s2mm_7_bd1_1 = 0x00048934;
// DMA S2MM 7 BD1 2
const unsigned int mem_dma_s2mm_7_bd1_2 = 0x00048938;
// DMA S2MM 7 BD1 3
const unsigned int mem_dma_s2mm_7_bd1_3 = 0x0004893C;
// DMA S2MM 7 BD1 4
const unsigned int mem_dma_s2mm_7_bd1_4 = 0x00048940;
// DMA S2MM 7 BD1 5
const unsigned int mem_dma_s2mm_7_bd1_5 = 0x00048944;
// DMA S2MM 7 BD1 6
const unsigned int mem_dma_s2mm_7_bd1_6 = 0x00048948;
// DMA S2MM 7 BD1 7
const unsigned int mem_dma_s2mm_7_bd1_7 = 0x0004894C;
// DMA S2MM 7 BD1 8
const unsigned int mem_dma_s2mm_7_bd1_8 = 0x00048950;
// DMA S2MM 7 BD1 9
const unsigned int mem_dma_s2mm_7_bd1_9 = 0x00048954;
// DMA S2MM 7 BD1 10
const unsigned int mem_dma_s2mm_7_bd1_10 = 0x00048958;
// DMA S2MM 7 BD2 0
const unsigned int mem_dma_s2mm_7_bd2_0 = 0x00048960;
// DMA S2MM 7 BD2 1
const unsigned int mem_dma_s2mm_7_bd2_1 = 0x00048964;
// DMA S2MM 7 BD2 2
const unsigned int mem_dma_s2mm_7_bd2_2 = 0x00048968;
// DMA S2MM 7 BD2 3
const unsigned int mem_dma_s2mm_7_bd2_3 = 0x0004896C;
// DMA S2MM 7 BD2 4
const unsigned int mem_dma_s2mm_7_bd2_4 = 0x00048970;
// DMA S2MM 7 BD2 5
const unsigned int mem_dma_s2mm_7_bd2_5 = 0x00048974;
// DMA S2MM 7 BD2 6
const unsigned int mem_dma_s2mm_7_bd2_6 = 0x00048978;
// DMA S2MM 7 BD2 7
const unsigned int mem_dma_s2mm_7_bd2_7 = 0x0004897C;
// DMA S2MM 7 BD2 8
const unsigned int mem_dma_s2mm_7_bd2_8 = 0x00048980;
// DMA S2MM 7 BD2 9
const unsigned int mem_dma_s2mm_7_bd2_9 = 0x00048984;
// DMA S2MM 7 BD2 10
const unsigned int mem_dma_s2mm_7_bd2_10 = 0x00048988;
// DMA S2MM 7 BD3 0
const unsigned int mem_dma_s2mm_7_bd3_0 = 0x00048990;
// DMA S2MM 7 BD3 1
const unsigned int mem_dma_s2mm_7_bd3_1 = 0x00048994;
// DMA S2MM 7 BD3 2
const unsigned int mem_dma_s2mm_7_bd3_2 = 0x00048998;
// DMA S2MM 7 BD3 3
const unsigned int mem_dma_s2mm_7_bd3_3 = 0x0004899C;
// DMA S2MM 7 BD3 4
const unsigned int mem_dma_s2mm_7_bd3_4 = 0x000489A0;
// DMA S2MM 7 BD3 5
const unsigned int mem_dma_s2mm_7_bd3_5 = 0x000489A4;
// DMA S2MM 7 BD3 6
const unsigned int mem_dma_s2mm_7_bd3_6 = 0x000489A8;
// DMA S2MM 7 BD3 7
const unsigned int mem_dma_s2mm_7_bd3_7 = 0x000489AC;
// DMA S2MM 7 BD3 8
const unsigned int mem_dma_s2mm_7_bd3_8 = 0x000489B0;
// DMA S2MM 7 BD3 9
const unsigned int mem_dma_s2mm_7_bd3_9 = 0x000489B4;
// DMA S2MM 7 BD3 10
const unsigned int mem_dma_s2mm_7_bd3_10 = 0x000489B8;
// DMA S2MM 7 BD4 0
const unsigned int mem_dma_s2mm_7_bd4_0 = 0x000489C0;
// DMA S2MM 7 BD4 1
const unsigned int mem_dma_s2mm_7_bd4_1 = 0x000489C4;
// DMA S2MM 7 BD4 2
const unsigned int mem_dma_s2mm_7_bd4_2 = 0x000489C8;
// DMA S2MM 7 BD4 3
const unsigned int mem_dma_s2mm_7_bd4_3 = 0x000489CC;
// DMA S2MM 7 BD4 4
const unsigned int mem_dma_s2mm_7_bd4_4 = 0x000489D0;
// DMA S2MM 7 BD4 5
const unsigned int mem_dma_s2mm_7_bd4_5 = 0x000489D4;
// DMA S2MM 7 BD4 6
const unsigned int mem_dma_s2mm_7_bd4_6 = 0x000489D8;
// DMA S2MM 7 BD4 7
const unsigned int mem_dma_s2mm_7_bd4_7 = 0x000489DC;
// DMA S2MM 7 BD4 8
const unsigned int mem_dma_s2mm_7_bd4_8 = 0x000489E0;
// DMA S2MM 7 BD4 9
const unsigned int mem_dma_s2mm_7_bd4_9 = 0x000489E4;
// DMA S2MM 7 BD4 10
const unsigned int mem_dma_s2mm_7_bd4_10 = 0x000489E8;
// DMA S2MM 7 BD5 0
const unsigned int mem_dma_s2mm_7_bd5_0 = 0x000489F0;
// DMA S2MM 7 BD5 1
const unsigned int mem_dma_s2mm_7_bd5_1 = 0x000489F4;
// DMA S2MM 7 BD5 2
const unsigned int mem_dma_s2mm_7_bd5_2 = 0x000489F8;
// DMA S2MM 7 BD5 3
const unsigned int mem_dma_s2mm_7_bd5_3 = 0x000489FC;
// DMA S2MM 7 BD5 4
const unsigned int mem_dma_s2mm_7_bd5_4 = 0x00048A00;
// DMA S2MM 7 BD5 5
const unsigned int mem_dma_s2mm_7_bd5_5 = 0x00048A04;
// DMA S2MM 7 BD5 6
const unsigned int mem_dma_s2mm_7_bd5_6 = 0x00048A08;
// DMA S2MM 7 BD5 7
const unsigned int mem_dma_s2mm_7_bd5_7 = 0x00048A0C;
// DMA S2MM 7 BD5 8
const unsigned int mem_dma_s2mm_7_bd5_8 = 0x00048A10;
// DMA S2MM 7 BD5 9
const unsigned int mem_dma_s2mm_7_bd5_9 = 0x00048A14;
// DMA S2MM 7 BD5 10
const unsigned int mem_dma_s2mm_7_bd5_10 = 0x00048A18;
// DMA S2MM 7 BD6 0
const unsigned int mem_dma_s2mm_7_bd6_0 = 0x00048A20;
// DMA S2MM 7 BD6 1
const unsigned int mem_dma_s2mm_7_bd6_1 = 0x00048A24;
// DMA S2MM 7 BD6 2
const unsigned int mem_dma_s2mm_7_bd6_2 = 0x00048A28;
// DMA S2MM 7 BD6 3
const unsigned int mem_dma_s2mm_7_bd6_3 = 0x00048A2C;
// DMA S2MM 7 BD6 4
const unsigned int mem_dma_s2mm_7_bd6_4 = 0x00048A30;
// DMA S2MM 7 BD6 5
const unsigned int mem_dma_s2mm_7_bd6_5 = 0x00048A34;
// DMA S2MM 7 BD6 6
const unsigned int mem_dma_s2mm_7_bd6_6 = 0x00048A38;
// DMA S2MM 7 BD6 7
const unsigned int mem_dma_s2mm_7_bd6_7 = 0x00048A3C;
// DMA S2MM 7 BD6 8
const unsigned int mem_dma_s2mm_7_bd6_8 = 0x00048A40;
// DMA S2MM 7 BD6 9
const unsigned int mem_dma_s2mm_7_bd6_9 = 0x00048A44;
// DMA S2MM 7 BD6 10
const unsigned int mem_dma_s2mm_7_bd6_10 = 0x00048A48;
// DMA S2MM 7 BD7 0
const unsigned int mem_dma_s2mm_7_bd7_0 = 0x00048A50;
// DMA S2MM 7 BD7 1
const unsigned int mem_dma_s2mm_7_bd7_1 = 0x00048A54;
// DMA S2MM 7 BD7 2
const unsigned int mem_dma_s2mm_7_bd7_2 = 0x00048A58;
// DMA S2MM 7 BD7 3
const unsigned int mem_dma_s2mm_7_bd7_3 = 0x00048A5C;
// DMA S2MM 7 BD7 4
const unsigned int mem_dma_s2mm_7_bd7_4 = 0x00048A60;
// DMA S2MM 7 BD7 5
const unsigned int mem_dma_s2mm_7_bd7_5 = 0x00048A64;
// DMA S2MM 7 BD7 6
const unsigned int mem_dma_s2mm_7_bd7_6 = 0x00048A68;
// DMA S2MM 7 BD7 7
const unsigned int mem_dma_s2mm_7_bd7_7 = 0x00048A6C;
// DMA S2MM 7 BD7 8
const unsigned int mem_dma_s2mm_7_bd7_8 = 0x00048A70;
// DMA S2MM 7 BD7 9
const unsigned int mem_dma_s2mm_7_bd7_9 = 0x00048A74;
// DMA S2MM 7 BD7 10
const unsigned int mem_dma_s2mm_7_bd7_10 = 0x00048A78;
// DMA S2MM 7 BD8 0
const unsigned int mem_dma_s2mm_7_bd8_0 = 0x00048A80;
// DMA S2MM 7 BD8 1
const unsigned int mem_dma_s2mm_7_bd8_1 = 0x00048A84;
// DMA S2MM 7 BD8 2
const unsigned int mem_dma_s2mm_7_bd8_2 = 0x00048A88;
// DMA S2MM 7 BD8 3
const unsigned int mem_dma_s2mm_7_bd8_3 = 0x00048A8C;
// DMA S2MM 7 BD8 4
const unsigned int mem_dma_s2mm_7_bd8_4 = 0x00048A90;
// DMA S2MM 7 BD8 5
const unsigned int mem_dma_s2mm_7_bd8_5 = 0x00048A94;
// DMA S2MM 7 BD8 6
const unsigned int mem_dma_s2mm_7_bd8_6 = 0x00048A98;
// DMA S2MM 7 BD8 7
const unsigned int mem_dma_s2mm_7_bd8_7 = 0x00048A9C;
// DMA S2MM 7 BD8 8
const unsigned int mem_dma_s2mm_7_bd8_8 = 0x00048AA0;
// DMA S2MM 7 BD8 9
const unsigned int mem_dma_s2mm_7_bd8_9 = 0x00048AA4;
// DMA S2MM 7 BD8 10
const unsigned int mem_dma_s2mm_7_bd8_10 = 0x00048AA8;
// DMA S2MM 7 BD9 0
const unsigned int mem_dma_s2mm_7_bd9_0 = 0x00048AB0;
// DMA S2MM 7 BD9 1
const unsigned int mem_dma_s2mm_7_bd9_1 = 0x00048AB4;
// DMA S2MM 7 BD9 2
const unsigned int mem_dma_s2mm_7_bd9_2 = 0x00048AB8;
// DMA S2MM 7 BD9 3
const unsigned int mem_dma_s2mm_7_bd9_3 = 0x00048ABC;
// DMA S2MM 7 BD9 4
const unsigned int mem_dma_s2mm_7_bd9_4 = 0x00048AC0;
// DMA S2MM 7 BD9 5
const unsigned int mem_dma_s2mm_7_bd9_5 = 0x00048AC4;
// DMA S2MM 7 BD9 6
const unsigned int mem_dma_s2mm_7_bd9_6 = 0x00048AC8;
// DMA S2MM 7 BD9 7
const unsigned int mem_dma_s2mm_7_bd9_7 = 0x00048ACC;
// DMA S2MM 7 BD9 8
const unsigned int mem_dma_s2mm_7_bd9_8 = 0x00048AD0;
// DMA S2MM 7 BD9 9
const unsigned int mem_dma_s2mm_7_bd9_9 = 0x00048AD4;
// DMA S2MM 7 BD9 10
const unsigned int mem_dma_s2mm_7_bd9_10 = 0x00048AD8;
// DMA S2MM 7 BD10 0
const unsigned int mem_dma_s2mm_7_bd10_0 = 0x00048AE0;
// DMA S2MM 7 BD10 1
const unsigned int mem_dma_s2mm_7_bd10_1 = 0x00048AE4;
// DMA S2MM 7 BD10 2
const unsigned int mem_dma_s2mm_7_bd10_2 = 0x00048AE8;
// DMA S2MM 7 BD10 3
const unsigned int mem_dma_s2mm_7_bd10_3 = 0x00048AEC;
// DMA S2MM 7 BD10 4
const unsigned int mem_dma_s2mm_7_bd10_4 = 0x00048AF0;
// DMA S2MM 7 BD10 5
const unsigned int mem_dma_s2mm_7_bd10_5 = 0x00048AF4;
// DMA S2MM 7 BD10 6
const unsigned int mem_dma_s2mm_7_bd10_6 = 0x00048AF8;
// DMA S2MM 7 BD10 7
const unsigned int mem_dma_s2mm_7_bd10_7 = 0x00048AFC;
// DMA S2MM 7 BD10 8
const unsigned int mem_dma_s2mm_7_bd10_8 = 0x00048B00;
// DMA S2MM 7 BD10 9
const unsigned int mem_dma_s2mm_7_bd10_9 = 0x00048B04;
// DMA S2MM 7 BD10 10
const unsigned int mem_dma_s2mm_7_bd10_10 = 0x00048B08;
// DMA S2MM 7 BD11 0
const unsigned int mem_dma_s2mm_7_bd11_0 = 0x00048B10;
// DMA S2MM 7 BD11 1
const unsigned int mem_dma_s2mm_7_bd11_1 = 0x00048B14;
// DMA S2MM 7 BD11 2
const unsigned int mem_dma_s2mm_7_bd11_2 = 0x00048B18;
// DMA S2MM 7 BD11 3
const unsigned int mem_dma_s2mm_7_bd11_3 = 0x00048B1C;
// DMA S2MM 7 BD11 4
const unsigned int mem_dma_s2mm_7_bd11_4 = 0x00048B20;
// DMA S2MM 7 BD11 5
const unsigned int mem_dma_s2mm_7_bd11_5 = 0x00048B24;
// DMA S2MM 7 BD11 6
const unsigned int mem_dma_s2mm_7_bd11_6 = 0x00048B28;
// DMA S2MM 7 BD11 7
const unsigned int mem_dma_s2mm_7_bd11_7 = 0x00048B2C;
// DMA S2MM 7 BD11 8
const unsigned int mem_dma_s2mm_7_bd11_8 = 0x00048B30;
// DMA S2MM 7 BD11 9
const unsigned int mem_dma_s2mm_7_bd11_9 = 0x00048B34;
// DMA S2MM 7 BD11 10
const unsigned int mem_dma_s2mm_7_bd11_10 = 0x00048B38;
// DMA S2MM 7 BD12 0
const unsigned int mem_dma_s2mm_7_bd12_0 = 0x00048B40;
// DMA S2MM 7 BD12 1
const unsigned int mem_dma_s2mm_7_bd12_1 = 0x00048B44;
// DMA S2MM 7 BD12 2
const unsigned int mem_dma_s2mm_7_bd12_2 = 0x00048B48;
// DMA S2MM 7 BD12 3
const unsigned int mem_dma_s2mm_7_bd12_3 = 0x00048B4C;
// DMA S2MM 7 BD12 4
const unsigned int mem_dma_s2mm_7_bd12_4 = 0x00048B50;
// DMA S2MM 7 BD12 5
const unsigned int mem_dma_s2mm_7_bd12_5 = 0x00048B54;
// DMA S2MM 7 BD12 6
const unsigned int mem_dma_s2mm_7_bd12_6 = 0x00048B58;
// DMA S2MM 7 BD12 7
const unsigned int mem_dma_s2mm_7_bd12_7 = 0x00048B5C;
// DMA S2MM 7 BD12 8
const unsigned int mem_dma_s2mm_7_bd12_8 = 0x00048B60;
// DMA S2MM 7 BD12 9
const unsigned int mem_dma_s2mm_7_bd12_9 = 0x00048B64;
// DMA S2MM 7 BD12 10
const unsigned int mem_dma_s2mm_7_bd12_10 = 0x00048B68;
// DMA S2MM 7 BD13 0
const unsigned int mem_dma_s2mm_7_bd13_0 = 0x00048B70;
// DMA S2MM 7 BD13 1
const unsigned int mem_dma_s2mm_7_bd13_1 = 0x00048B74;
// DMA S2MM 7 BD13 2
const unsigned int mem_dma_s2mm_7_bd13_2 = 0x00048B78;
// DMA S2MM 7 BD13 3
const unsigned int mem_dma_s2mm_7_bd13_3 = 0x00048B7C;
// DMA S2MM 7 BD13 4
const unsigned int mem_dma_s2mm_7_bd13_4 = 0x00048B80;
// DMA S2MM 7 BD13 5
const unsigned int mem_dma_s2mm_7_bd13_5 = 0x00048B84;
// DMA S2MM 7 BD13 6
const unsigned int mem_dma_s2mm_7_bd13_6 = 0x00048B88;
// DMA S2MM 7 BD13 7
const unsigned int mem_dma_s2mm_7_bd13_7 = 0x00048B8C;
// DMA S2MM 7 BD13 8
const unsigned int mem_dma_s2mm_7_bd13_8 = 0x00048B90;
// DMA S2MM 7 BD13 9
const unsigned int mem_dma_s2mm_7_bd13_9 = 0x00048B94;
// DMA S2MM 7 BD13 10
const unsigned int mem_dma_s2mm_7_bd13_10 = 0x00048B98;
// DMA S2MM 7 BD14 0
const unsigned int mem_dma_s2mm_7_bd14_0 = 0x00048BA0;
// DMA S2MM 7 BD14 1
const unsigned int mem_dma_s2mm_7_bd14_1 = 0x00048BA4;
// DMA S2MM 7 BD14 2
const unsigned int mem_dma_s2mm_7_bd14_2 = 0x00048BA8;
// DMA S2MM 7 BD14 3
const unsigned int mem_dma_s2mm_7_bd14_3 = 0x00048BAC;
// DMA S2MM 7 BD14 4
const unsigned int mem_dma_s2mm_7_bd14_4 = 0x00048BB0;
// DMA S2MM 7 BD14 5
const unsigned int mem_dma_s2mm_7_bd14_5 = 0x00048BB4;
// DMA S2MM 7 BD14 6
const unsigned int mem_dma_s2mm_7_bd14_6 = 0x00048BB8;
// DMA S2MM 7 BD14 7
const unsigned int mem_dma_s2mm_7_bd14_7 = 0x00048BBC;
// DMA S2MM 7 BD14 8
const unsigned int mem_dma_s2mm_7_bd14_8 = 0x00048BC0;
// DMA S2MM 7 BD14 9
const unsigned int mem_dma_s2mm_7_bd14_9 = 0x00048BC4;
// DMA S2MM 7 BD14 10
const unsigned int mem_dma_s2mm_7_bd14_10 = 0x00048BC8;
// DMA S2MM 7 BD15 0
const unsigned int mem_dma_s2mm_7_bd15_0 = 0x00048BD0;
// DMA S2MM 7 BD15 1
const unsigned int mem_dma_s2mm_7_bd15_1 = 0x00048BD4;
// DMA S2MM 7 BD15 2
const unsigned int mem_dma_s2mm_7_bd15_2 = 0x00048BD8;
// DMA S2MM 7 BD15 3
const unsigned int mem_dma_s2mm_7_bd15_3 = 0x00048BDC;
// DMA S2MM 7 BD15 4
const unsigned int mem_dma_s2mm_7_bd15_4 = 0x00048BE0;
// DMA S2MM 7 BD15 5
const unsigned int mem_dma_s2mm_7_bd15_5 = 0x00048BE4;
// DMA S2MM 7 BD15 6
const unsigned int mem_dma_s2mm_7_bd15_6 = 0x00048BE8;
// DMA S2MM 7 BD15 7
const unsigned int mem_dma_s2mm_7_bd15_7 = 0x00048BEC;
// DMA S2MM 7 BD15 8
const unsigned int mem_dma_s2mm_7_bd15_8 = 0x00048BF0;
// DMA S2MM 7 BD15 9
const unsigned int mem_dma_s2mm_7_bd15_9 = 0x00048BF4;
// DMA S2MM 7 BD15 10
const unsigned int mem_dma_s2mm_7_bd15_10 = 0x00048BF8;
// DMA MM2S 6 BD0 0
const unsigned int mem_dma_mm2s_6_bd0_0 = 0x00048C00;
// DMA MM2S 6 BD0 1
const unsigned int mem_dma_mm2s_6_bd0_1 = 0x00048C04;
// DMA MM2S 6 BD0 2
const unsigned int mem_dma_mm2s_6_bd0_2 = 0x00048C08;
// DMA MM2S 6 BD0 3
const unsigned int mem_dma_mm2s_6_bd0_3 = 0x00048C0C;
// DMA MM2S 6 BD0 4
const unsigned int mem_dma_mm2s_6_bd0_4 = 0x00048C10;
// DMA MM2S 6 BD0 5
const unsigned int mem_dma_mm2s_6_bd0_5 = 0x00048C14;
// DMA MM2S 6 BD0 6
const unsigned int mem_dma_mm2s_6_bd0_6 = 0x00048C18;
// DMA MM2S 6 BD0 7
const unsigned int mem_dma_mm2s_6_bd0_7 = 0x00048C1C;
// DMA MM2S 6 BD0 8
const unsigned int mem_dma_mm2s_6_bd0_8 = 0x00048C20;
// DMA MM2S 6 BD0 9
const unsigned int mem_dma_mm2s_6_bd0_9 = 0x00048C24;
// DMA MM2S 6 BD0 10
const unsigned int mem_dma_mm2s_6_bd0_10 = 0x00048C28;
// DMA MM2S 6 BD1 0
const unsigned int mem_dma_mm2s_6_bd1_0 = 0x00048C30;
// DMA MM2S 6 BD1 1
const unsigned int mem_dma_mm2s_6_bd1_1 = 0x00048C34;
// DMA MM2S 6 BD1 2
const unsigned int mem_dma_mm2s_6_bd1_2 = 0x00048C38;
// DMA MM2S 6 BD1 3
const unsigned int mem_dma_mm2s_6_bd1_3 = 0x00048C3C;
// DMA MM2S 6 BD1 4
const unsigned int mem_dma_mm2s_6_bd1_4 = 0x00048C40;
// DMA MM2S 6 BD1 5
const unsigned int mem_dma_mm2s_6_bd1_5 = 0x00048C44;
// DMA MM2S 6 BD1 6
const unsigned int mem_dma_mm2s_6_bd1_6 = 0x00048C48;
// DMA MM2S 6 BD1 7
const unsigned int mem_dma_mm2s_6_bd1_7 = 0x00048C4C;
// DMA MM2S 6 BD1 8
const unsigned int mem_dma_mm2s_6_bd1_8 = 0x00048C50;
// DMA MM2S 6 BD1 9
const unsigned int mem_dma_mm2s_6_bd1_9 = 0x00048C54;
// DMA MM2S 6 BD1 10
const unsigned int mem_dma_mm2s_6_bd1_10 = 0x00048C58;
// DMA MM2S 6 BD2 0
const unsigned int mem_dma_mm2s_6_bd2_0 = 0x00048C60;
// DMA MM2S 6 BD2 1
const unsigned int mem_dma_mm2s_6_bd2_1 = 0x00048C64;
// DMA MM2S 6 BD2 2
const unsigned int mem_dma_mm2s_6_bd2_2 = 0x00048C68;
// DMA MM2S 6 BD2 3
const unsigned int mem_dma_mm2s_6_bd2_3 = 0x00048C6C;
// DMA MM2S 6 BD2 4
const unsigned int mem_dma_mm2s_6_bd2_4 = 0x00048C70;
// DMA MM2S 6 BD2 5
const unsigned int mem_dma_mm2s_6_bd2_5 = 0x00048C74;
// DMA MM2S 6 BD2 6
const unsigned int mem_dma_mm2s_6_bd2_6 = 0x00048C78;
// DMA MM2S 6 BD2 7
const unsigned int mem_dma_mm2s_6_bd2_7 = 0x00048C7C;
// DMA MM2S 6 BD2 8
const unsigned int mem_dma_mm2s_6_bd2_8 = 0x00048C80;
// DMA MM2S 6 BD2 9
const unsigned int mem_dma_mm2s_6_bd2_9 = 0x00048C84;
// DMA MM2S 6 BD2 10
const unsigned int mem_dma_mm2s_6_bd2_10 = 0x00048C88;
// DMA MM2S 6 BD3 0
const unsigned int mem_dma_mm2s_6_bd3_0 = 0x00048C90;
// DMA MM2S 6 BD3 1
const unsigned int mem_dma_mm2s_6_bd3_1 = 0x00048C94;
// DMA MM2S 6 BD3 2
const unsigned int mem_dma_mm2s_6_bd3_2 = 0x00048C98;
// DMA MM2S 6 BD3 3
const unsigned int mem_dma_mm2s_6_bd3_3 = 0x00048C9C;
// DMA MM2S 6 BD3 4
const unsigned int mem_dma_mm2s_6_bd3_4 = 0x00048CA0;
// DMA MM2S 6 BD3 5
const unsigned int mem_dma_mm2s_6_bd3_5 = 0x00048CA4;
// DMA MM2S 6 BD3 6
const unsigned int mem_dma_mm2s_6_bd3_6 = 0x00048CA8;
// DMA MM2S 6 BD3 7
const unsigned int mem_dma_mm2s_6_bd3_7 = 0x00048CAC;
// DMA MM2S 6 BD3 8
const unsigned int mem_dma_mm2s_6_bd3_8 = 0x00048CB0;
// DMA MM2S 6 BD3 9
const unsigned int mem_dma_mm2s_6_bd3_9 = 0x00048CB4;
// DMA MM2S 6 BD3 10
const unsigned int mem_dma_mm2s_6_bd3_10 = 0x00048CB8;
// DMA MM2S 6 BD4 0
const unsigned int mem_dma_mm2s_6_bd4_0 = 0x00048CC0;
// DMA MM2S 6 BD4 1
const unsigned int mem_dma_mm2s_6_bd4_1 = 0x00048CC4;
// DMA MM2S 6 BD4 2
const unsigned int mem_dma_mm2s_6_bd4_2 = 0x00048CC8;
// DMA MM2S 6 BD4 3
const unsigned int mem_dma_mm2s_6_bd4_3 = 0x00048CCC;
// DMA MM2S 6 BD4 4
const unsigned int mem_dma_mm2s_6_bd4_4 = 0x00048CD0;
// DMA MM2S 6 BD4 5
const unsigned int mem_dma_mm2s_6_bd4_5 = 0x00048CD4;
// DMA MM2S 6 BD4 6
const unsigned int mem_dma_mm2s_6_bd4_6 = 0x00048CD8;
// DMA MM2S 6 BD4 7
const unsigned int mem_dma_mm2s_6_bd4_7 = 0x00048CDC;
// DMA MM2S 6 BD4 8
const unsigned int mem_dma_mm2s_6_bd4_8 = 0x00048CE0;
// DMA MM2S 6 BD4 9
const unsigned int mem_dma_mm2s_6_bd4_9 = 0x00048CE4;
// DMA MM2S 6 BD4 10
const unsigned int mem_dma_mm2s_6_bd4_10 = 0x00048CE8;
// DMA MM2S 6 BD5 0
const unsigned int mem_dma_mm2s_6_bd5_0 = 0x00048CF0;
// DMA MM2S 6 BD5 1
const unsigned int mem_dma_mm2s_6_bd5_1 = 0x00048CF4;
// DMA MM2S 6 BD5 2
const unsigned int mem_dma_mm2s_6_bd5_2 = 0x00048CF8;
// DMA MM2S 6 BD5 3
const unsigned int mem_dma_mm2s_6_bd5_3 = 0x00048CFC;
// DMA MM2S 6 BD5 4
const unsigned int mem_dma_mm2s_6_bd5_4 = 0x00048D00;
// DMA MM2S 6 BD5 5
const unsigned int mem_dma_mm2s_6_bd5_5 = 0x00048D04;
// DMA MM2S 6 BD5 6
const unsigned int mem_dma_mm2s_6_bd5_6 = 0x00048D08;
// DMA MM2S 6 BD5 7
const unsigned int mem_dma_mm2s_6_bd5_7 = 0x00048D0C;
// DMA MM2S 6 BD5 8
const unsigned int mem_dma_mm2s_6_bd5_8 = 0x00048D10;
// DMA MM2S 6 BD5 9
const unsigned int mem_dma_mm2s_6_bd5_9 = 0x00048D14;
// DMA MM2S 6 BD5 10
const unsigned int mem_dma_mm2s_6_bd5_10 = 0x00048D18;
// DMA MM2S 6 BD6 0
const unsigned int mem_dma_mm2s_6_bd6_0 = 0x00048D20;
// DMA MM2S 6 BD6 1
const unsigned int mem_dma_mm2s_6_bd6_1 = 0x00048D24;
// DMA MM2S 6 BD6 2
const unsigned int mem_dma_mm2s_6_bd6_2 = 0x00048D28;
// DMA MM2S 6 BD6 3
const unsigned int mem_dma_mm2s_6_bd6_3 = 0x00048D2C;
// DMA MM2S 6 BD6 4
const unsigned int mem_dma_mm2s_6_bd6_4 = 0x00048D30;
// DMA MM2S 6 BD6 5
const unsigned int mem_dma_mm2s_6_bd6_5 = 0x00048D34;
// DMA MM2S 6 BD6 6
const unsigned int mem_dma_mm2s_6_bd6_6 = 0x00048D38;
// DMA MM2S 6 BD6 7
const unsigned int mem_dma_mm2s_6_bd6_7 = 0x00048D3C;
// DMA MM2S 6 BD6 8
const unsigned int mem_dma_mm2s_6_bd6_8 = 0x00048D40;
// DMA MM2S 6 BD6 9
const unsigned int mem_dma_mm2s_6_bd6_9 = 0x00048D44;
// DMA MM2S 6 BD6 10
const unsigned int mem_dma_mm2s_6_bd6_10 = 0x00048D48;
// DMA MM2S 6 BD7 0
const unsigned int mem_dma_mm2s_6_bd7_0 = 0x00048D50;
// DMA MM2S 6 BD7 1
const unsigned int mem_dma_mm2s_6_bd7_1 = 0x00048D54;
// DMA MM2S 6 BD7 2
const unsigned int mem_dma_mm2s_6_bd7_2 = 0x00048D58;
// DMA MM2S 6 BD7 3
const unsigned int mem_dma_mm2s_6_bd7_3 = 0x00048D5C;
// DMA MM2S 6 BD7 4
const unsigned int mem_dma_mm2s_6_bd7_4 = 0x00048D60;
// DMA MM2S 6 BD7 5
const unsigned int mem_dma_mm2s_6_bd7_5 = 0x00048D64;
// DMA MM2S 6 BD7 6
const unsigned int mem_dma_mm2s_6_bd7_6 = 0x00048D68;
// DMA MM2S 6 BD7 7
const unsigned int mem_dma_mm2s_6_bd7_7 = 0x00048D6C;
// DMA MM2S 6 BD7 8
const unsigned int mem_dma_mm2s_6_bd7_8 = 0x00048D70;
// DMA MM2S 6 BD7 9
const unsigned int mem_dma_mm2s_6_bd7_9 = 0x00048D74;
// DMA MM2S 6 BD7 10
const unsigned int mem_dma_mm2s_6_bd7_10 = 0x00048D78;
// DMA MM2S 6 BD8 0
const unsigned int mem_dma_mm2s_6_bd8_0 = 0x00048D80;
// DMA MM2S 6 BD8 1
const unsigned int mem_dma_mm2s_6_bd8_1 = 0x00048D84;
// DMA MM2S 6 BD8 2
const unsigned int mem_dma_mm2s_6_bd8_2 = 0x00048D88;
// DMA MM2S 6 BD8 3
const unsigned int mem_dma_mm2s_6_bd8_3 = 0x00048D8C;
// DMA MM2S 6 BD8 4
const unsigned int mem_dma_mm2s_6_bd8_4 = 0x00048D90;
// DMA MM2S 6 BD8 5
const unsigned int mem_dma_mm2s_6_bd8_5 = 0x00048D94;
// DMA MM2S 6 BD8 6
const unsigned int mem_dma_mm2s_6_bd8_6 = 0x00048D98;
// DMA MM2S 6 BD8 7
const unsigned int mem_dma_mm2s_6_bd8_7 = 0x00048D9C;
// DMA MM2S 6 BD8 8
const unsigned int mem_dma_mm2s_6_bd8_8 = 0x00048DA0;
// DMA MM2S 6 BD8 9
const unsigned int mem_dma_mm2s_6_bd8_9 = 0x00048DA4;
// DMA MM2S 6 BD8 10
const unsigned int mem_dma_mm2s_6_bd8_10 = 0x00048DA8;
// DMA MM2S 6 BD9 0
const unsigned int mem_dma_mm2s_6_bd9_0 = 0x00048DB0;
// DMA MM2S 6 BD9 1
const unsigned int mem_dma_mm2s_6_bd9_1 = 0x00048DB4;
// DMA MM2S 6 BD9 2
const unsigned int mem_dma_mm2s_6_bd9_2 = 0x00048DB8;
// DMA MM2S 6 BD9 3
const unsigned int mem_dma_mm2s_6_bd9_3 = 0x00048DBC;
// DMA MM2S 6 BD9 4
const unsigned int mem_dma_mm2s_6_bd9_4 = 0x00048DC0;
// DMA MM2S 6 BD9 5
const unsigned int mem_dma_mm2s_6_bd9_5 = 0x00048DC4;
// DMA MM2S 6 BD9 6
const unsigned int mem_dma_mm2s_6_bd9_6 = 0x00048DC8;
// DMA MM2S 6 BD9 7
const unsigned int mem_dma_mm2s_6_bd9_7 = 0x00048DCC;
// DMA MM2S 6 BD9 8
const unsigned int mem_dma_mm2s_6_bd9_8 = 0x00048DD0;
// DMA MM2S 6 BD9 9
const unsigned int mem_dma_mm2s_6_bd9_9 = 0x00048DD4;
// DMA MM2S 6 BD9 10
const unsigned int mem_dma_mm2s_6_bd9_10 = 0x00048DD8;
// DMA MM2S 6 BD10 0
const unsigned int mem_dma_mm2s_6_bd10_0 = 0x00048DE0;
// DMA MM2S 6 BD10 1
const unsigned int mem_dma_mm2s_6_bd10_1 = 0x00048DE4;
// DMA MM2S 6 BD10 2
const unsigned int mem_dma_mm2s_6_bd10_2 = 0x00048DE8;
// DMA MM2S 6 BD10 3
const unsigned int mem_dma_mm2s_6_bd10_3 = 0x00048DEC;
// DMA MM2S 6 BD10 4
const unsigned int mem_dma_mm2s_6_bd10_4 = 0x00048DF0;
// DMA MM2S 6 BD10 5
const unsigned int mem_dma_mm2s_6_bd10_5 = 0x00048DF4;
// DMA MM2S 6 BD10 6
const unsigned int mem_dma_mm2s_6_bd10_6 = 0x00048DF8;
// DMA MM2S 6 BD10 7
const unsigned int mem_dma_mm2s_6_bd10_7 = 0x00048DFC;
// DMA MM2S 6 BD10 8
const unsigned int mem_dma_mm2s_6_bd10_8 = 0x00048E00;
// DMA MM2S 6 BD10 9
const unsigned int mem_dma_mm2s_6_bd10_9 = 0x00048E04;
// DMA MM2S 6 BD10 10
const unsigned int mem_dma_mm2s_6_bd10_10 = 0x00048E08;
// DMA MM2S 6 BD11 0
const unsigned int mem_dma_mm2s_6_bd11_0 = 0x00048E10;
// DMA MM2S 6 BD11 1
const unsigned int mem_dma_mm2s_6_bd11_1 = 0x00048E14;
// DMA MM2S 6 BD11 2
const unsigned int mem_dma_mm2s_6_bd11_2 = 0x00048E18;
// DMA MM2S 6 BD11 3
const unsigned int mem_dma_mm2s_6_bd11_3 = 0x00048E1C;
// DMA MM2S 6 BD11 4
const unsigned int mem_dma_mm2s_6_bd11_4 = 0x00048E20;
// DMA MM2S 6 BD11 5
const unsigned int mem_dma_mm2s_6_bd11_5 = 0x00048E24;
// DMA MM2S 6 BD11 6
const unsigned int mem_dma_mm2s_6_bd11_6 = 0x00048E28;
// DMA MM2S 6 BD11 7
const unsigned int mem_dma_mm2s_6_bd11_7 = 0x00048E2C;
// DMA MM2S 6 BD11 8
const unsigned int mem_dma_mm2s_6_bd11_8 = 0x00048E30;
// DMA MM2S 6 BD11 9
const unsigned int mem_dma_mm2s_6_bd11_9 = 0x00048E34;
// DMA MM2S 6 BD11 10
const unsigned int mem_dma_mm2s_6_bd11_10 = 0x00048E38;
// DMA MM2S 6 BD12 0
const unsigned int mem_dma_mm2s_6_bd12_0 = 0x00048E40;
// DMA MM2S 6 BD12 1
const unsigned int mem_dma_mm2s_6_bd12_1 = 0x00048E44;
// DMA MM2S 6 BD12 2
const unsigned int mem_dma_mm2s_6_bd12_2 = 0x00048E48;
// DMA MM2S 6 BD12 3
const unsigned int mem_dma_mm2s_6_bd12_3 = 0x00048E4C;
// DMA MM2S 6 BD12 4
const unsigned int mem_dma_mm2s_6_bd12_4 = 0x00048E50;
// DMA MM2S 6 BD12 5
const unsigned int mem_dma_mm2s_6_bd12_5 = 0x00048E54;
// DMA MM2S 6 BD12 6
const unsigned int mem_dma_mm2s_6_bd12_6 = 0x00048E58;
// DMA MM2S 6 BD12 7
const unsigned int mem_dma_mm2s_6_bd12_7 = 0x00048E5C;
// DMA MM2S 6 BD12 8
const unsigned int mem_dma_mm2s_6_bd12_8 = 0x00048E60;
// DMA MM2S 6 BD12 9
const unsigned int mem_dma_mm2s_6_bd12_9 = 0x00048E64;
// DMA MM2S 6 BD12 10
const unsigned int mem_dma_mm2s_6_bd12_10 = 0x00048E68;
// DMA MM2S 6 BD13 0
const unsigned int mem_dma_mm2s_6_bd13_0 = 0x00048E70;
// DMA MM2S 6 BD13 1
const unsigned int mem_dma_mm2s_6_bd13_1 = 0x00048E74;
// DMA MM2S 6 BD13 2
const unsigned int mem_dma_mm2s_6_bd13_2 = 0x00048E78;
// DMA MM2S 6 BD13 3
const unsigned int mem_dma_mm2s_6_bd13_3 = 0x00048E7C;
// DMA MM2S 6 BD13 4
const unsigned int mem_dma_mm2s_6_bd13_4 = 0x00048E80;
// DMA MM2S 6 BD13 5
const unsigned int mem_dma_mm2s_6_bd13_5 = 0x00048E84;
// DMA MM2S 6 BD13 6
const unsigned int mem_dma_mm2s_6_bd13_6 = 0x00048E88;
// DMA MM2S 6 BD13 7
const unsigned int mem_dma_mm2s_6_bd13_7 = 0x00048E8C;
// DMA MM2S 6 BD13 8
const unsigned int mem_dma_mm2s_6_bd13_8 = 0x00048E90;
// DMA MM2S 6 BD13 9
const unsigned int mem_dma_mm2s_6_bd13_9 = 0x00048E94;
// DMA MM2S 6 BD13 10
const unsigned int mem_dma_mm2s_6_bd13_10 = 0x00048E98;
// DMA MM2S 6 BD14 0
const unsigned int mem_dma_mm2s_6_bd14_0 = 0x00048EA0;
// DMA MM2S 6 BD14 1
const unsigned int mem_dma_mm2s_6_bd14_1 = 0x00048EA4;
// DMA MM2S 6 BD14 2
const unsigned int mem_dma_mm2s_6_bd14_2 = 0x00048EA8;
// DMA MM2S 6 BD14 3
const unsigned int mem_dma_mm2s_6_bd14_3 = 0x00048EAC;
// DMA MM2S 6 BD14 4
const unsigned int mem_dma_mm2s_6_bd14_4 = 0x00048EB0;
// DMA MM2S 6 BD14 5
const unsigned int mem_dma_mm2s_6_bd14_5 = 0x00048EB4;
// DMA MM2S 6 BD14 6
const unsigned int mem_dma_mm2s_6_bd14_6 = 0x00048EB8;
// DMA MM2S 6 BD14 7
const unsigned int mem_dma_mm2s_6_bd14_7 = 0x00048EBC;
// DMA MM2S 6 BD14 8
const unsigned int mem_dma_mm2s_6_bd14_8 = 0x00048EC0;
// DMA MM2S 6 BD14 9
const unsigned int mem_dma_mm2s_6_bd14_9 = 0x00048EC4;
// DMA MM2S 6 BD14 10
const unsigned int mem_dma_mm2s_6_bd14_10 = 0x00048EC8;
// DMA MM2S 6 BD15 0
const unsigned int mem_dma_mm2s_6_bd15_0 = 0x00048ED0;
// DMA MM2S 6 BD15 1
const unsigned int mem_dma_mm2s_6_bd15_1 = 0x00048ED4;
// DMA MM2S 6 BD15 2
const unsigned int mem_dma_mm2s_6_bd15_2 = 0x00048ED8;
// DMA MM2S 6 BD15 3
const unsigned int mem_dma_mm2s_6_bd15_3 = 0x00048EDC;
// DMA MM2S 6 BD15 4
const unsigned int mem_dma_mm2s_6_bd15_4 = 0x00048EE0;
// DMA MM2S 6 BD15 5
const unsigned int mem_dma_mm2s_6_bd15_5 = 0x00048EE4;
// DMA MM2S 6 BD15 6
const unsigned int mem_dma_mm2s_6_bd15_6 = 0x00048EE8;
// DMA MM2S 6 BD15 7
const unsigned int mem_dma_mm2s_6_bd15_7 = 0x00048EEC;
// DMA MM2S 6 BD15 8
const unsigned int mem_dma_mm2s_6_bd15_8 = 0x00048EF0;
// DMA MM2S 6 BD15 9
const unsigned int mem_dma_mm2s_6_bd15_9 = 0x00048EF4;
// DMA MM2S 6 BD15 10
const unsigned int mem_dma_mm2s_6_bd15_10 = 0x00048EF8;
// DMA MM2S 7 BD0 0
const unsigned int mem_dma_mm2s_7_bd0_0 = 0x00048F00;
// DMA MM2S 7 BD0 1
const unsigned int mem_dma_mm2s_7_bd0_1 = 0x00048F04;
// DMA MM2S 7 BD0 2
const unsigned int mem_dma_mm2s_7_bd0_2 = 0x00048F08;
// DMA MM2S 7 BD0 3
const unsigned int mem_dma_mm2s_7_bd0_3 = 0x00048F0C;
// DMA MM2S 7 BD0 4
const unsigned int mem_dma_mm2s_7_bd0_4 = 0x00048F10;
// DMA MM2S 7 BD0 5
const unsigned int mem_dma_mm2s_7_bd0_5 = 0x00048F14;
// DMA MM2S 7 BD0 6
const unsigned int mem_dma_mm2s_7_bd0_6 = 0x00048F18;
// DMA MM2S 7 BD0 7
const unsigned int mem_dma_mm2s_7_bd0_7 = 0x00048F1C;
// DMA MM2S 7 BD0 8
const unsigned int mem_dma_mm2s_7_bd0_8 = 0x00048F20;
// DMA MM2S 7 BD0 9
const unsigned int mem_dma_mm2s_7_bd0_9 = 0x00048F24;
// DMA MM2S 7 BD0 10
const unsigned int mem_dma_mm2s_7_bd0_10 = 0x00048F28;
// DMA MM2S 7 BD1 0
const unsigned int mem_dma_mm2s_7_bd1_0 = 0x00048F30;
// DMA MM2S 7 BD1 1
const unsigned int mem_dma_mm2s_7_bd1_1 = 0x00048F34;
// DMA MM2S 7 BD1 2
const unsigned int mem_dma_mm2s_7_bd1_2 = 0x00048F38;
// DMA MM2S 7 BD1 3
const unsigned int mem_dma_mm2s_7_bd1_3 = 0x00048F3C;
// DMA MM2S 7 BD1 4
const unsigned int mem_dma_mm2s_7_bd1_4 = 0x00048F40;
// DMA MM2S 7 BD1 5
const unsigned int mem_dma_mm2s_7_bd1_5 = 0x00048F44;
// DMA MM2S 7 BD1 6
const unsigned int mem_dma_mm2s_7_bd1_6 = 0x00048F48;
// DMA MM2S 7 BD1 7
const unsigned int mem_dma_mm2s_7_bd1_7 = 0x00048F4C;
// DMA MM2S 7 BD1 8
const unsigned int mem_dma_mm2s_7_bd1_8 = 0x00048F50;
// DMA MM2S 7 BD1 9
const unsigned int mem_dma_mm2s_7_bd1_9 = 0x00048F54;
// DMA MM2S 7 BD1 10
const unsigned int mem_dma_mm2s_7_bd1_10 = 0x00048F58;
// DMA MM2S 7 BD2 0
const unsigned int mem_dma_mm2s_7_bd2_0 = 0x00048F60;
// DMA MM2S 7 BD2 1
const unsigned int mem_dma_mm2s_7_bd2_1 = 0x00048F64;
// DMA MM2S 7 BD2 2
const unsigned int mem_dma_mm2s_7_bd2_2 = 0x00048F68;
// DMA MM2S 7 BD2 3
const unsigned int mem_dma_mm2s_7_bd2_3 = 0x00048F6C;
// DMA MM2S 7 BD2 4
const unsigned int mem_dma_mm2s_7_bd2_4 = 0x00048F70;
// DMA MM2S 7 BD2 5
const unsigned int mem_dma_mm2s_7_bd2_5 = 0x00048F74;
// DMA MM2S 7 BD2 6
const unsigned int mem_dma_mm2s_7_bd2_6 = 0x00048F78;
// DMA MM2S 7 BD2 7
const unsigned int mem_dma_mm2s_7_bd2_7 = 0x00048F7C;
// DMA MM2S 7 BD2 8
const unsigned int mem_dma_mm2s_7_bd2_8 = 0x00048F80;
// DMA MM2S 7 BD2 9
const unsigned int mem_dma_mm2s_7_bd2_9 = 0x00048F84;
// DMA MM2S 7 BD2 10
const unsigned int mem_dma_mm2s_7_bd2_10 = 0x00048F88;
// DMA MM2S 7 BD3 0
const unsigned int mem_dma_mm2s_7_bd3_0 = 0x00048F90;
// DMA MM2S 7 BD3 1
const unsigned int mem_dma_mm2s_7_bd3_1 = 0x00048F94;
// DMA MM2S 7 BD3 2
const unsigned int mem_dma_mm2s_7_bd3_2 = 0x00048F98;
// DMA MM2S 7 BD3 3
const unsigned int mem_dma_mm2s_7_bd3_3 = 0x00048F9C;
// DMA MM2S 7 BD3 4
const unsigned int mem_dma_mm2s_7_bd3_4 = 0x00048FA0;
// DMA MM2S 7 BD3 5
const unsigned int mem_dma_mm2s_7_bd3_5 = 0x00048FA4;
// DMA MM2S 7 BD3 6
const unsigned int mem_dma_mm2s_7_bd3_6 = 0x00048FA8;
// DMA MM2S 7 BD3 7
const unsigned int mem_dma_mm2s_7_bd3_7 = 0x00048FAC;
// DMA MM2S 7 BD3 8
const unsigned int mem_dma_mm2s_7_bd3_8 = 0x00048FB0;
// DMA MM2S 7 BD3 9
const unsigned int mem_dma_mm2s_7_bd3_9 = 0x00048FB4;
// DMA MM2S 7 BD3 10
const unsigned int mem_dma_mm2s_7_bd3_10 = 0x00048FB8;
// DMA MM2S 7 BD4 0
const unsigned int mem_dma_mm2s_7_bd4_0 = 0x00048FC0;
// DMA MM2S 7 BD4 1
const unsigned int mem_dma_mm2s_7_bd4_1 = 0x00048FC4;
// DMA MM2S 7 BD4 2
const unsigned int mem_dma_mm2s_7_bd4_2 = 0x00048FC8;
// DMA MM2S 7 BD4 3
const unsigned int mem_dma_mm2s_7_bd4_3 = 0x00048FCC;
// DMA MM2S 7 BD4 4
const unsigned int mem_dma_mm2s_7_bd4_4 = 0x00048FD0;
// DMA MM2S 7 BD4 5
const unsigned int mem_dma_mm2s_7_bd4_5 = 0x00048FD4;
// DMA MM2S 7 BD4 6
const unsigned int mem_dma_mm2s_7_bd4_6 = 0x00048FD8;
// DMA MM2S 7 BD4 7
const unsigned int mem_dma_mm2s_7_bd4_7 = 0x00048FDC;
// DMA MM2S 7 BD4 8
const unsigned int mem_dma_mm2s_7_bd4_8 = 0x00048FE0;
// DMA MM2S 7 BD4 9
const unsigned int mem_dma_mm2s_7_bd4_9 = 0x00048FE4;
// DMA MM2S 7 BD4 10
const unsigned int mem_dma_mm2s_7_bd4_10 = 0x00048FE8;
// DMA MM2S 7 BD5 0
const unsigned int mem_dma_mm2s_7_bd5_0 = 0x00048FF0;
// DMA MM2S 7 BD5 1
const unsigned int mem_dma_mm2s_7_bd5_1 = 0x00048FF4;
// DMA MM2S 7 BD5 2
const unsigned int mem_dma_mm2s_7_bd5_2 = 0x00048FF8;
// DMA MM2S 7 BD5 3
const unsigned int mem_dma_mm2s_7_bd5_3 = 0x00048FFC;
// DMA MM2S 7 BD5 4
const unsigned int mem_dma_mm2s_7_bd5_4 = 0x00049000;
// DMA MM2S 7 BD5 5
const unsigned int mem_dma_mm2s_7_bd5_5 = 0x00049004;
// DMA MM2S 7 BD5 6
const unsigned int mem_dma_mm2s_7_bd5_6 = 0x00049008;
// DMA MM2S 7 BD5 7
const unsigned int mem_dma_mm2s_7_bd5_7 = 0x0004900C;
// DMA MM2S 7 BD5 8
const unsigned int mem_dma_mm2s_7_bd5_8 = 0x00049010;
// DMA MM2S 7 BD5 9
const unsigned int mem_dma_mm2s_7_bd5_9 = 0x00049014;
// DMA MM2S 7 BD5 10
const unsigned int mem_dma_mm2s_7_bd5_10 = 0x00049018;
// DMA MM2S 7 BD6 0
const unsigned int mem_dma_mm2s_7_bd6_0 = 0x00049020;
// DMA MM2S 7 BD6 1
const unsigned int mem_dma_mm2s_7_bd6_1 = 0x00049024;
// DMA MM2S 7 BD6 2
const unsigned int mem_dma_mm2s_7_bd6_2 = 0x00049028;
// DMA MM2S 7 BD6 3
const unsigned int mem_dma_mm2s_7_bd6_3 = 0x0004902C;
// DMA MM2S 7 BD6 4
const unsigned int mem_dma_mm2s_7_bd6_4 = 0x00049030;
// DMA MM2S 7 BD6 5
const unsigned int mem_dma_mm2s_7_bd6_5 = 0x00049034;
// DMA MM2S 7 BD6 6
const unsigned int mem_dma_mm2s_7_bd6_6 = 0x00049038;
// DMA MM2S 7 BD6 7
const unsigned int mem_dma_mm2s_7_bd6_7 = 0x0004903C;
// DMA MM2S 7 BD6 8
const unsigned int mem_dma_mm2s_7_bd6_8 = 0x00049040;
// DMA MM2S 7 BD6 9
const unsigned int mem_dma_mm2s_7_bd6_9 = 0x00049044;
// DMA MM2S 7 BD6 10
const unsigned int mem_dma_mm2s_7_bd6_10 = 0x00049048;
// DMA MM2S 7 BD7 0
const unsigned int mem_dma_mm2s_7_bd7_0 = 0x00049050;
// DMA MM2S 7 BD7 1
const unsigned int mem_dma_mm2s_7_bd7_1 = 0x00049054;
// DMA MM2S 7 BD7 2
const unsigned int mem_dma_mm2s_7_bd7_2 = 0x00049058;
// DMA MM2S 7 BD7 3
const unsigned int mem_dma_mm2s_7_bd7_3 = 0x0004905C;
// DMA MM2S 7 BD7 4
const unsigned int mem_dma_mm2s_7_bd7_4 = 0x00049060;
// DMA MM2S 7 BD7 5
const unsigned int mem_dma_mm2s_7_bd7_5 = 0x00049064;
// DMA MM2S 7 BD7 6
const unsigned int mem_dma_mm2s_7_bd7_6 = 0x00049068;
// DMA MM2S 7 BD7 7
const unsigned int mem_dma_mm2s_7_bd7_7 = 0x0004906C;
// DMA MM2S 7 BD7 8
const unsigned int mem_dma_mm2s_7_bd7_8 = 0x00049070;
// DMA MM2S 7 BD7 9
const unsigned int mem_dma_mm2s_7_bd7_9 = 0x00049074;
// DMA MM2S 7 BD7 10
const unsigned int mem_dma_mm2s_7_bd7_10 = 0x00049078;
// DMA MM2S 7 BD8 0
const unsigned int mem_dma_mm2s_7_bd8_0 = 0x00049080;
// DMA MM2S 7 BD8 1
const unsigned int mem_dma_mm2s_7_bd8_1 = 0x00049084;
// DMA MM2S 7 BD8 2
const unsigned int mem_dma_mm2s_7_bd8_2 = 0x00049088;
// DMA MM2S 7 BD8 3
const unsigned int mem_dma_mm2s_7_bd8_3 = 0x0004908C;
// DMA MM2S 7 BD8 4
const unsigned int mem_dma_mm2s_7_bd8_4 = 0x00049090;
// DMA MM2S 7 BD8 5
const unsigned int mem_dma_mm2s_7_bd8_5 = 0x00049094;
// DMA MM2S 7 BD8 6
const unsigned int mem_dma_mm2s_7_bd8_6 = 0x00049098;
// DMA MM2S 7 BD8 7
const unsigned int mem_dma_mm2s_7_bd8_7 = 0x0004909C;
// DMA MM2S 7 BD8 8
const unsigned int mem_dma_mm2s_7_bd8_8 = 0x000490A0;
// DMA MM2S 7 BD8 9
const unsigned int mem_dma_mm2s_7_bd8_9 = 0x000490A4;
// DMA MM2S 7 BD8 10
const unsigned int mem_dma_mm2s_7_bd8_10 = 0x000490A8;
// DMA MM2S 7 BD9 0
const unsigned int mem_dma_mm2s_7_bd9_0 = 0x000490B0;
// DMA MM2S 7 BD9 1
const unsigned int mem_dma_mm2s_7_bd9_1 = 0x000490B4;
// DMA MM2S 7 BD9 2
const unsigned int mem_dma_mm2s_7_bd9_2 = 0x000490B8;
// DMA MM2S 7 BD9 3
const unsigned int mem_dma_mm2s_7_bd9_3 = 0x000490BC;
// DMA MM2S 7 BD9 4
const unsigned int mem_dma_mm2s_7_bd9_4 = 0x000490C0;
// DMA MM2S 7 BD9 5
const unsigned int mem_dma_mm2s_7_bd9_5 = 0x000490C4;
// DMA MM2S 7 BD9 6
const unsigned int mem_dma_mm2s_7_bd9_6 = 0x000490C8;
// DMA MM2S 7 BD9 7
const unsigned int mem_dma_mm2s_7_bd9_7 = 0x000490CC;
// DMA MM2S 7 BD9 8
const unsigned int mem_dma_mm2s_7_bd9_8 = 0x000490D0;
// DMA MM2S 7 BD9 9
const unsigned int mem_dma_mm2s_7_bd9_9 = 0x000490D4;
// DMA MM2S 7 BD9 10
const unsigned int mem_dma_mm2s_7_bd9_10 = 0x000490D8;
// DMA MM2S 7 BD10 0
const unsigned int mem_dma_mm2s_7_bd10_0 = 0x000490E0;
// DMA MM2S 7 BD10 1
const unsigned int mem_dma_mm2s_7_bd10_1 = 0x000490E4;
// DMA MM2S 7 BD10 2
const unsigned int mem_dma_mm2s_7_bd10_2 = 0x000490E8;
// DMA MM2S 7 BD10 3
const unsigned int mem_dma_mm2s_7_bd10_3 = 0x000490EC;
// DMA MM2S 7 BD10 4
const unsigned int mem_dma_mm2s_7_bd10_4 = 0x000490F0;
// DMA MM2S 7 BD10 5
const unsigned int mem_dma_mm2s_7_bd10_5 = 0x000490F4;
// DMA MM2S 7 BD10 6
const unsigned int mem_dma_mm2s_7_bd10_6 = 0x000490F8;
// DMA MM2S 7 BD10 7
const unsigned int mem_dma_mm2s_7_bd10_7 = 0x000490FC;
// DMA MM2S 7 BD10 8
const unsigned int mem_dma_mm2s_7_bd10_8 = 0x00049100;
// DMA MM2S 7 BD10 9
const unsigned int mem_dma_mm2s_7_bd10_9 = 0x00049104;
// DMA MM2S 7 BD10 10
const unsigned int mem_dma_mm2s_7_bd10_10 = 0x00049108;
// DMA MM2S 7 BD11 0
const unsigned int mem_dma_mm2s_7_bd11_0 = 0x00049110;
// DMA MM2S 7 BD11 1
const unsigned int mem_dma_mm2s_7_bd11_1 = 0x00049114;
// DMA MM2S 7 BD11 2
const unsigned int mem_dma_mm2s_7_bd11_2 = 0x00049118;
// DMA MM2S 7 BD11 3
const unsigned int mem_dma_mm2s_7_bd11_3 = 0x0004911C;
// DMA MM2S 7 BD11 4
const unsigned int mem_dma_mm2s_7_bd11_4 = 0x00049120;
// DMA MM2S 7 BD11 5
const unsigned int mem_dma_mm2s_7_bd11_5 = 0x00049124;
// DMA MM2S 7 BD11 6
const unsigned int mem_dma_mm2s_7_bd11_6 = 0x00049128;
// DMA MM2S 7 BD11 7
const unsigned int mem_dma_mm2s_7_bd11_7 = 0x0004912C;
// DMA MM2S 7 BD11 8
const unsigned int mem_dma_mm2s_7_bd11_8 = 0x00049130;
// DMA MM2S 7 BD11 9
const unsigned int mem_dma_mm2s_7_bd11_9 = 0x00049134;
// DMA MM2S 7 BD11 10
const unsigned int mem_dma_mm2s_7_bd11_10 = 0x00049138;
// DMA MM2S 7 BD12 0
const unsigned int mem_dma_mm2s_7_bd12_0 = 0x00049140;
// DMA MM2S 7 BD12 1
const unsigned int mem_dma_mm2s_7_bd12_1 = 0x00049144;
// DMA MM2S 7 BD12 2
const unsigned int mem_dma_mm2s_7_bd12_2 = 0x00049148;
// DMA MM2S 7 BD12 3
const unsigned int mem_dma_mm2s_7_bd12_3 = 0x0004914C;
// DMA MM2S 7 BD12 4
const unsigned int mem_dma_mm2s_7_bd12_4 = 0x00049150;
// DMA MM2S 7 BD12 5
const unsigned int mem_dma_mm2s_7_bd12_5 = 0x00049154;
// DMA MM2S 7 BD12 6
const unsigned int mem_dma_mm2s_7_bd12_6 = 0x00049158;
// DMA MM2S 7 BD12 7
const unsigned int mem_dma_mm2s_7_bd12_7 = 0x0004915C;
// DMA MM2S 7 BD12 8
const unsigned int mem_dma_mm2s_7_bd12_8 = 0x00049160;
// DMA MM2S 7 BD12 9
const unsigned int mem_dma_mm2s_7_bd12_9 = 0x00049164;
// DMA MM2S 7 BD12 10
const unsigned int mem_dma_mm2s_7_bd12_10 = 0x00049168;
// DMA MM2S 7 BD13 0
const unsigned int mem_dma_mm2s_7_bd13_0 = 0x00049170;
// DMA MM2S 7 BD13 1
const unsigned int mem_dma_mm2s_7_bd13_1 = 0x00049174;
// DMA MM2S 7 BD13 2
const unsigned int mem_dma_mm2s_7_bd13_2 = 0x00049178;
// DMA MM2S 7 BD13 3
const unsigned int mem_dma_mm2s_7_bd13_3 = 0x0004917C;
// DMA MM2S 7 BD13 4
const unsigned int mem_dma_mm2s_7_bd13_4 = 0x00049180;
// DMA MM2S 7 BD13 5
const unsigned int mem_dma_mm2s_7_bd13_5 = 0x00049184;
// DMA MM2S 7 BD13 6
const unsigned int mem_dma_mm2s_7_bd13_6 = 0x00049188;
// DMA MM2S 7 BD13 7
const unsigned int mem_dma_mm2s_7_bd13_7 = 0x0004918C;
// DMA MM2S 7 BD13 8
const unsigned int mem_dma_mm2s_7_bd13_8 = 0x00049190;
// DMA MM2S 7 BD13 9
const unsigned int mem_dma_mm2s_7_bd13_9 = 0x00049194;
// DMA MM2S 7 BD13 10
const unsigned int mem_dma_mm2s_7_bd13_10 = 0x00049198;
// DMA MM2S 7 BD14 0
const unsigned int mem_dma_mm2s_7_bd14_0 = 0x000491A0;
// DMA MM2S 7 BD14 1
const unsigned int mem_dma_mm2s_7_bd14_1 = 0x000491A4;
// DMA MM2S 7 BD14 2
const unsigned int mem_dma_mm2s_7_bd14_2 = 0x000491A8;
// DMA MM2S 7 BD14 3
const unsigned int mem_dma_mm2s_7_bd14_3 = 0x000491AC;
// DMA MM2S 7 BD14 4
const unsigned int mem_dma_mm2s_7_bd14_4 = 0x000491B0;
// DMA MM2S 7 BD14 5
const unsigned int mem_dma_mm2s_7_bd14_5 = 0x000491B4;
// DMA MM2S 7 BD14 6
const unsigned int mem_dma_mm2s_7_bd14_6 = 0x000491B8;
// DMA MM2S 7 BD14 7
const unsigned int mem_dma_mm2s_7_bd14_7 = 0x000491BC;
// DMA MM2S 7 BD14 8
const unsigned int mem_dma_mm2s_7_bd14_8 = 0x000491C0;
// DMA MM2S 7 BD14 9
const unsigned int mem_dma_mm2s_7_bd14_9 = 0x000491C4;
// DMA MM2S 7 BD14 10
const unsigned int mem_dma_mm2s_7_bd14_10 = 0x000491C8;
// DMA MM2S 7 BD15 0
const unsigned int mem_dma_mm2s_7_bd15_0 = 0x000491D0;
// DMA MM2S 7 BD15 1
const unsigned int mem_dma_mm2s_7_bd15_1 = 0x000491D4;
// DMA MM2S 7 BD15 2
const unsigned int mem_dma_mm2s_7_bd15_2 = 0x000491D8;
// DMA MM2S 7 BD15 3
const unsigned int mem_dma_mm2s_7_bd15_3 = 0x000491DC;
// DMA MM2S 7 BD15 4
const unsigned int mem_dma_mm2s_7_bd15_4 = 0x000491E0;
// DMA MM2S 7 BD15 5
const unsigned int mem_dma_mm2s_7_bd15_5 = 0x000491E4;
// DMA MM2S 7 BD15 6
const unsigned int mem_dma_mm2s_7_bd15_6 = 0x000491E8;
// DMA MM2S 7 BD15 7
const unsigned int mem_dma_mm2s_7_bd15_7 = 0x000491EC;
// DMA MM2S 7 BD15 8
const unsigned int mem_dma_mm2s_7_bd15_8 = 0x000491F0;
// DMA MM2S 7 BD15 9
const unsigned int mem_dma_mm2s_7_bd15_9 = 0x000491F4;
// DMA MM2S 7 BD15 10
const unsigned int mem_dma_mm2s_7_bd15_10 = 0x000491F8;
// DMA MM2S 8 BD0 0
const unsigned int mem_dma_mm2s_8_bd0_0 = 0x00049200;
// DMA MM2S 8 BD0 1
const unsigned int mem_dma_mm2s_8_bd0_1 = 0x00049204;
// DMA MM2S 8 BD0 2
const unsigned int mem_dma_mm2s_8_bd0_2 = 0x00049208;
// DMA MM2S 8 BD0 3
const unsigned int mem_dma_mm2s_8_bd0_3 = 0x0004920C;
// DMA MM2S 8 BD0 4
const unsigned int mem_dma_mm2s_8_bd0_4 = 0x00049210;
// DMA MM2S 8 BD0 5
const unsigned int mem_dma_mm2s_8_bd0_5 = 0x00049214;
// DMA MM2S 8 BD0 6
const unsigned int mem_dma_mm2s_8_bd0_6 = 0x00049218;
// DMA MM2S 8 BD0 7
const unsigned int mem_dma_mm2s_8_bd0_7 = 0x0004921C;
// DMA MM2S 8 BD0 8
const unsigned int mem_dma_mm2s_8_bd0_8 = 0x00049220;
// DMA MM2S 8 BD0 9
const unsigned int mem_dma_mm2s_8_bd0_9 = 0x00049224;
// DMA MM2S 8 BD0 10
const unsigned int mem_dma_mm2s_8_bd0_10 = 0x00049228;
// DMA MM2S 8 BD1 0
const unsigned int mem_dma_mm2s_8_bd1_0 = 0x00049230;
// DMA MM2S 8 BD1 1
const unsigned int mem_dma_mm2s_8_bd1_1 = 0x00049234;
// DMA MM2S 8 BD1 2
const unsigned int mem_dma_mm2s_8_bd1_2 = 0x00049238;
// DMA MM2S 8 BD1 3
const unsigned int mem_dma_mm2s_8_bd1_3 = 0x0004923C;
// DMA MM2S 8 BD1 4
const unsigned int mem_dma_mm2s_8_bd1_4 = 0x00049240;
// DMA MM2S 8 BD1 5
const unsigned int mem_dma_mm2s_8_bd1_5 = 0x00049244;
// DMA MM2S 8 BD1 6
const unsigned int mem_dma_mm2s_8_bd1_6 = 0x00049248;
// DMA MM2S 8 BD1 7
const unsigned int mem_dma_mm2s_8_bd1_7 = 0x0004924C;
// DMA MM2S 8 BD1 8
const unsigned int mem_dma_mm2s_8_bd1_8 = 0x00049250;
// DMA MM2S 8 BD1 9
const unsigned int mem_dma_mm2s_8_bd1_9 = 0x00049254;
// DMA MM2S 8 BD1 10
const unsigned int mem_dma_mm2s_8_bd1_10 = 0x00049258;
// DMA MM2S 8 BD2 0
const unsigned int mem_dma_mm2s_8_bd2_0 = 0x00049260;
// DMA MM2S 8 BD2 1
const unsigned int mem_dma_mm2s_8_bd2_1 = 0x00049264;
// DMA MM2S 8 BD2 2
const unsigned int mem_dma_mm2s_8_bd2_2 = 0x00049268;
// DMA MM2S 8 BD2 3
const unsigned int mem_dma_mm2s_8_bd2_3 = 0x0004926C;
// DMA MM2S 8 BD2 4
const unsigned int mem_dma_mm2s_8_bd2_4 = 0x00049270;
// DMA MM2S 8 BD2 5
const unsigned int mem_dma_mm2s_8_bd2_5 = 0x00049274;
// DMA MM2S 8 BD2 6
const unsigned int mem_dma_mm2s_8_bd2_6 = 0x00049278;
// DMA MM2S 8 BD2 7
const unsigned int mem_dma_mm2s_8_bd2_7 = 0x0004927C;
// DMA MM2S 8 BD2 8
const unsigned int mem_dma_mm2s_8_bd2_8 = 0x00049280;
// DMA MM2S 8 BD2 9
const unsigned int mem_dma_mm2s_8_bd2_9 = 0x00049284;
// DMA MM2S 8 BD2 10
const unsigned int mem_dma_mm2s_8_bd2_10 = 0x00049288;
// DMA MM2S 8 BD3 0
const unsigned int mem_dma_mm2s_8_bd3_0 = 0x00049290;
// DMA MM2S 8 BD3 1
const unsigned int mem_dma_mm2s_8_bd3_1 = 0x00049294;
// DMA MM2S 8 BD3 2
const unsigned int mem_dma_mm2s_8_bd3_2 = 0x00049298;
// DMA MM2S 8 BD3 3
const unsigned int mem_dma_mm2s_8_bd3_3 = 0x0004929C;
// DMA MM2S 8 BD3 4
const unsigned int mem_dma_mm2s_8_bd3_4 = 0x000492A0;
// DMA MM2S 8 BD3 5
const unsigned int mem_dma_mm2s_8_bd3_5 = 0x000492A4;
// DMA MM2S 8 BD3 6
const unsigned int mem_dma_mm2s_8_bd3_6 = 0x000492A8;
// DMA MM2S 8 BD3 7
const unsigned int mem_dma_mm2s_8_bd3_7 = 0x000492AC;
// DMA MM2S 8 BD3 8
const unsigned int mem_dma_mm2s_8_bd3_8 = 0x000492B0;
// DMA MM2S 8 BD3 9
const unsigned int mem_dma_mm2s_8_bd3_9 = 0x000492B4;
// DMA MM2S 8 BD3 10
const unsigned int mem_dma_mm2s_8_bd3_10 = 0x000492B8;
// DMA MM2S 8 BD4 0
const unsigned int mem_dma_mm2s_8_bd4_0 = 0x000492C0;
// DMA MM2S 8 BD4 1
const unsigned int mem_dma_mm2s_8_bd4_1 = 0x000492C4;
// DMA MM2S 8 BD4 2
const unsigned int mem_dma_mm2s_8_bd4_2 = 0x000492C8;
// DMA MM2S 8 BD4 3
const unsigned int mem_dma_mm2s_8_bd4_3 = 0x000492CC;
// DMA MM2S 8 BD4 4
const unsigned int mem_dma_mm2s_8_bd4_4 = 0x000492D0;
// DMA MM2S 8 BD4 5
const unsigned int mem_dma_mm2s_8_bd4_5 = 0x000492D4;
// DMA MM2S 8 BD4 6
const unsigned int mem_dma_mm2s_8_bd4_6 = 0x000492D8;
// DMA MM2S 8 BD4 7
const unsigned int mem_dma_mm2s_8_bd4_7 = 0x000492DC;
// DMA MM2S 8 BD4 8
const unsigned int mem_dma_mm2s_8_bd4_8 = 0x000492E0;
// DMA MM2S 8 BD4 9
const unsigned int mem_dma_mm2s_8_bd4_9 = 0x000492E4;
// DMA MM2S 8 BD4 10
const unsigned int mem_dma_mm2s_8_bd4_10 = 0x000492E8;
// DMA MM2S 8 BD5 0
const unsigned int mem_dma_mm2s_8_bd5_0 = 0x000492F0;
// DMA MM2S 8 BD5 1
const unsigned int mem_dma_mm2s_8_bd5_1 = 0x000492F4;
// DMA MM2S 8 BD5 2
const unsigned int mem_dma_mm2s_8_bd5_2 = 0x000492F8;
// DMA MM2S 8 BD5 3
const unsigned int mem_dma_mm2s_8_bd5_3 = 0x000492FC;
// DMA MM2S 8 BD5 4
const unsigned int mem_dma_mm2s_8_bd5_4 = 0x00049300;
// DMA MM2S 8 BD5 5
const unsigned int mem_dma_mm2s_8_bd5_5 = 0x00049304;
// DMA MM2S 8 BD5 6
const unsigned int mem_dma_mm2s_8_bd5_6 = 0x00049308;
// DMA MM2S 8 BD5 7
const unsigned int mem_dma_mm2s_8_bd5_7 = 0x0004930C;
// DMA MM2S 8 BD5 8
const unsigned int mem_dma_mm2s_8_bd5_8 = 0x00049310;
// DMA MM2S 8 BD5 9
const unsigned int mem_dma_mm2s_8_bd5_9 = 0x00049314;
// DMA MM2S 8 BD5 10
const unsigned int mem_dma_mm2s_8_bd5_10 = 0x00049318;
// DMA MM2S 8 BD6 0
const unsigned int mem_dma_mm2s_8_bd6_0 = 0x00049320;
// DMA MM2S 8 BD6 1
const unsigned int mem_dma_mm2s_8_bd6_1 = 0x00049324;
// DMA MM2S 8 BD6 2
const unsigned int mem_dma_mm2s_8_bd6_2 = 0x00049328;
// DMA MM2S 8 BD6 3
const unsigned int mem_dma_mm2s_8_bd6_3 = 0x0004932C;
// DMA MM2S 8 BD6 4
const unsigned int mem_dma_mm2s_8_bd6_4 = 0x00049330;
// DMA MM2S 8 BD6 5
const unsigned int mem_dma_mm2s_8_bd6_5 = 0x00049334;
// DMA MM2S 8 BD6 6
const unsigned int mem_dma_mm2s_8_bd6_6 = 0x00049338;
// DMA MM2S 8 BD6 7
const unsigned int mem_dma_mm2s_8_bd6_7 = 0x0004933C;
// DMA MM2S 8 BD6 8
const unsigned int mem_dma_mm2s_8_bd6_8 = 0x00049340;
// DMA MM2S 8 BD6 9
const unsigned int mem_dma_mm2s_8_bd6_9 = 0x00049344;
// DMA MM2S 8 BD6 10
const unsigned int mem_dma_mm2s_8_bd6_10 = 0x00049348;
// DMA MM2S 8 BD7 0
const unsigned int mem_dma_mm2s_8_bd7_0 = 0x00049350;
// DMA MM2S 8 BD7 1
const unsigned int mem_dma_mm2s_8_bd7_1 = 0x00049354;
// DMA MM2S 8 BD7 2
const unsigned int mem_dma_mm2s_8_bd7_2 = 0x00049358;
// DMA MM2S 8 BD7 3
const unsigned int mem_dma_mm2s_8_bd7_3 = 0x0004935C;
// DMA MM2S 8 BD7 4
const unsigned int mem_dma_mm2s_8_bd7_4 = 0x00049360;
// DMA MM2S 8 BD7 5
const unsigned int mem_dma_mm2s_8_bd7_5 = 0x00049364;
// DMA MM2S 8 BD7 6
const unsigned int mem_dma_mm2s_8_bd7_6 = 0x00049368;
// DMA MM2S 8 BD7 7
const unsigned int mem_dma_mm2s_8_bd7_7 = 0x0004936C;
// DMA MM2S 8 BD7 8
const unsigned int mem_dma_mm2s_8_bd7_8 = 0x00049370;
// DMA MM2S 8 BD7 9
const unsigned int mem_dma_mm2s_8_bd7_9 = 0x00049374;
// DMA MM2S 8 BD7 10
const unsigned int mem_dma_mm2s_8_bd7_10 = 0x00049378;
// DMA MM2S 8 BD8 0
const unsigned int mem_dma_mm2s_8_bd8_0 = 0x00049380;
// DMA MM2S 8 BD8 1
const unsigned int mem_dma_mm2s_8_bd8_1 = 0x00049384;
// DMA MM2S 8 BD8 2
const unsigned int mem_dma_mm2s_8_bd8_2 = 0x00049388;
// DMA MM2S 8 BD8 3
const unsigned int mem_dma_mm2s_8_bd8_3 = 0x0004938C;
// DMA MM2S 8 BD8 4
const unsigned int mem_dma_mm2s_8_bd8_4 = 0x00049390;
// DMA MM2S 8 BD8 5
const unsigned int mem_dma_mm2s_8_bd8_5 = 0x00049394;
// DMA MM2S 8 BD8 6
const unsigned int mem_dma_mm2s_8_bd8_6 = 0x00049398;
// DMA MM2S 8 BD8 7
const unsigned int mem_dma_mm2s_8_bd8_7 = 0x0004939C;
// DMA MM2S 8 BD8 8
const unsigned int mem_dma_mm2s_8_bd8_8 = 0x000493A0;
// DMA MM2S 8 BD8 9
const unsigned int mem_dma_mm2s_8_bd8_9 = 0x000493A4;
// DMA MM2S 8 BD8 10
const unsigned int mem_dma_mm2s_8_bd8_10 = 0x000493A8;
// DMA MM2S 8 BD9 0
const unsigned int mem_dma_mm2s_8_bd9_0 = 0x000493B0;
// DMA MM2S 8 BD9 1
const unsigned int mem_dma_mm2s_8_bd9_1 = 0x000493B4;
// DMA MM2S 8 BD9 2
const unsigned int mem_dma_mm2s_8_bd9_2 = 0x000493B8;
// DMA MM2S 8 BD9 3
const unsigned int mem_dma_mm2s_8_bd9_3 = 0x000493BC;
// DMA MM2S 8 BD9 4
const unsigned int mem_dma_mm2s_8_bd9_4 = 0x000493C0;
// DMA MM2S 8 BD9 5
const unsigned int mem_dma_mm2s_8_bd9_5 = 0x000493C4;
// DMA MM2S 8 BD9 6
const unsigned int mem_dma_mm2s_8_bd9_6 = 0x000493C8;
// DMA MM2S 8 BD9 7
const unsigned int mem_dma_mm2s_8_bd9_7 = 0x000493CC;
// DMA MM2S 8 BD9 8
const unsigned int mem_dma_mm2s_8_bd9_8 = 0x000493D0;
// DMA MM2S 8 BD9 9
const unsigned int mem_dma_mm2s_8_bd9_9 = 0x000493D4;
// DMA MM2S 8 BD9 10
const unsigned int mem_dma_mm2s_8_bd9_10 = 0x000493D8;
// DMA MM2S 8 BD10 0
const unsigned int mem_dma_mm2s_8_bd10_0 = 0x000493E0;
// DMA MM2S 8 BD10 1
const unsigned int mem_dma_mm2s_8_bd10_1 = 0x000493E4;
// DMA MM2S 8 BD10 2
const unsigned int mem_dma_mm2s_8_bd10_2 = 0x000493E8;
// DMA MM2S 8 BD10 3
const unsigned int mem_dma_mm2s_8_bd10_3 = 0x000493EC;
// DMA MM2S 8 BD10 4
const unsigned int mem_dma_mm2s_8_bd10_4 = 0x000493F0;
// DMA MM2S 8 BD10 5
const unsigned int mem_dma_mm2s_8_bd10_5 = 0x000493F4;
// DMA MM2S 8 BD10 6
const unsigned int mem_dma_mm2s_8_bd10_6 = 0x000493F8;
// DMA MM2S 8 BD10 7
const unsigned int mem_dma_mm2s_8_bd10_7 = 0x000493FC;
// DMA MM2S 8 BD10 8
const unsigned int mem_dma_mm2s_8_bd10_8 = 0x00049400;
// DMA MM2S 8 BD10 9
const unsigned int mem_dma_mm2s_8_bd10_9 = 0x00049404;
// DMA MM2S 8 BD10 10
const unsigned int mem_dma_mm2s_8_bd10_10 = 0x00049408;
// DMA MM2S 8 BD11 0
const unsigned int mem_dma_mm2s_8_bd11_0 = 0x00049410;
// DMA MM2S 8 BD11 1
const unsigned int mem_dma_mm2s_8_bd11_1 = 0x00049414;
// DMA MM2S 8 BD11 2
const unsigned int mem_dma_mm2s_8_bd11_2 = 0x00049418;
// DMA MM2S 8 BD11 3
const unsigned int mem_dma_mm2s_8_bd11_3 = 0x0004941C;
// DMA MM2S 8 BD11 4
const unsigned int mem_dma_mm2s_8_bd11_4 = 0x00049420;
// DMA MM2S 8 BD11 5
const unsigned int mem_dma_mm2s_8_bd11_5 = 0x00049424;
// DMA MM2S 8 BD11 6
const unsigned int mem_dma_mm2s_8_bd11_6 = 0x00049428;
// DMA MM2S 8 BD11 7
const unsigned int mem_dma_mm2s_8_bd11_7 = 0x0004942C;
// DMA MM2S 8 BD11 8
const unsigned int mem_dma_mm2s_8_bd11_8 = 0x00049430;
// DMA MM2S 8 BD11 9
const unsigned int mem_dma_mm2s_8_bd11_9 = 0x00049434;
// DMA MM2S 8 BD11 10
const unsigned int mem_dma_mm2s_8_bd11_10 = 0x00049438;
// DMA MM2S 8 BD12 0
const unsigned int mem_dma_mm2s_8_bd12_0 = 0x00049440;
// DMA MM2S 8 BD12 1
const unsigned int mem_dma_mm2s_8_bd12_1 = 0x00049444;
// DMA MM2S 8 BD12 2
const unsigned int mem_dma_mm2s_8_bd12_2 = 0x00049448;
// DMA MM2S 8 BD12 3
const unsigned int mem_dma_mm2s_8_bd12_3 = 0x0004944C;
// DMA MM2S 8 BD12 4
const unsigned int mem_dma_mm2s_8_bd12_4 = 0x00049450;
// DMA MM2S 8 BD12 5
const unsigned int mem_dma_mm2s_8_bd12_5 = 0x00049454;
// DMA MM2S 8 BD12 6
const unsigned int mem_dma_mm2s_8_bd12_6 = 0x00049458;
// DMA MM2S 8 BD12 7
const unsigned int mem_dma_mm2s_8_bd12_7 = 0x0004945C;
// DMA MM2S 8 BD12 8
const unsigned int mem_dma_mm2s_8_bd12_8 = 0x00049460;
// DMA MM2S 8 BD12 9
const unsigned int mem_dma_mm2s_8_bd12_9 = 0x00049464;
// DMA MM2S 8 BD12 10
const unsigned int mem_dma_mm2s_8_bd12_10 = 0x00049468;
// DMA MM2S 8 BD13 0
const unsigned int mem_dma_mm2s_8_bd13_0 = 0x00049470;
// DMA MM2S 8 BD13 1
const unsigned int mem_dma_mm2s_8_bd13_1 = 0x00049474;
// DMA MM2S 8 BD13 2
const unsigned int mem_dma_mm2s_8_bd13_2 = 0x00049478;
// DMA MM2S 8 BD13 3
const unsigned int mem_dma_mm2s_8_bd13_3 = 0x0004947C;
// DMA MM2S 8 BD13 4
const unsigned int mem_dma_mm2s_8_bd13_4 = 0x00049480;
// DMA MM2S 8 BD13 5
const unsigned int mem_dma_mm2s_8_bd13_5 = 0x00049484;
// DMA MM2S 8 BD13 6
const unsigned int mem_dma_mm2s_8_bd13_6 = 0x00049488;
// DMA MM2S 8 BD13 7
const unsigned int mem_dma_mm2s_8_bd13_7 = 0x0004948C;
// DMA MM2S 8 BD13 8
const unsigned int mem_dma_mm2s_8_bd13_8 = 0x00049490;
// DMA MM2S 8 BD13 9
const unsigned int mem_dma_mm2s_8_bd13_9 = 0x00049494;
// DMA MM2S 8 BD13 10
const unsigned int mem_dma_mm2s_8_bd13_10 = 0x00049498;
// DMA MM2S 8 BD14 0
const unsigned int mem_dma_mm2s_8_bd14_0 = 0x000494A0;
// DMA MM2S 8 BD14 1
const unsigned int mem_dma_mm2s_8_bd14_1 = 0x000494A4;
// DMA MM2S 8 BD14 2
const unsigned int mem_dma_mm2s_8_bd14_2 = 0x000494A8;
// DMA MM2S 8 BD14 3
const unsigned int mem_dma_mm2s_8_bd14_3 = 0x000494AC;
// DMA MM2S 8 BD14 4
const unsigned int mem_dma_mm2s_8_bd14_4 = 0x000494B0;
// DMA MM2S 8 BD14 5
const unsigned int mem_dma_mm2s_8_bd14_5 = 0x000494B4;
// DMA MM2S 8 BD14 6
const unsigned int mem_dma_mm2s_8_bd14_6 = 0x000494B8;
// DMA MM2S 8 BD14 7
const unsigned int mem_dma_mm2s_8_bd14_7 = 0x000494BC;
// DMA MM2S 8 BD14 8
const unsigned int mem_dma_mm2s_8_bd14_8 = 0x000494C0;
// DMA MM2S 8 BD14 9
const unsigned int mem_dma_mm2s_8_bd14_9 = 0x000494C4;
// DMA MM2S 8 BD14 10
const unsigned int mem_dma_mm2s_8_bd14_10 = 0x000494C8;
// DMA MM2S 8 BD15 0
const unsigned int mem_dma_mm2s_8_bd15_0 = 0x000494D0;
// DMA MM2S 8 BD15 1
const unsigned int mem_dma_mm2s_8_bd15_1 = 0x000494D4;
// DMA MM2S 8 BD15 2
const unsigned int mem_dma_mm2s_8_bd15_2 = 0x000494D8;
// DMA MM2S 8 BD15 3
const unsigned int mem_dma_mm2s_8_bd15_3 = 0x000494DC;
// DMA MM2S 8 BD15 4
const unsigned int mem_dma_mm2s_8_bd15_4 = 0x000494E0;
// DMA MM2S 8 BD15 5
const unsigned int mem_dma_mm2s_8_bd15_5 = 0x000494E4;
// DMA MM2S 8 BD15 6
const unsigned int mem_dma_mm2s_8_bd15_6 = 0x000494E8;
// DMA MM2S 8 BD15 7
const unsigned int mem_dma_mm2s_8_bd15_7 = 0x000494EC;
// DMA MM2S 8 BD15 8
const unsigned int mem_dma_mm2s_8_bd15_8 = 0x000494F0;
// DMA MM2S 8 BD15 9
const unsigned int mem_dma_mm2s_8_bd15_9 = 0x000494F4;
// DMA MM2S 8 BD15 10
const unsigned int mem_dma_mm2s_8_bd15_10 = 0x000494F8;
// DMA MM2S 9 BD0 0
const unsigned int mem_dma_mm2s_9_bd0_0 = 0x00049500;
// DMA MM2S 9 BD0 1
const unsigned int mem_dma_mm2s_9_bd0_1 = 0x00049504;
// DMA MM2S 9 BD0 2
const unsigned int mem_dma_mm2s_9_bd0_2 = 0x00049508;
// DMA MM2S 9 BD0 3
const unsigned int mem_dma_mm2s_9_bd0_3 = 0x0004950C;
// DMA MM2S 9 BD0 4
const unsigned int mem_dma_mm2s_9_bd0_4 = 0x00049510;
// DMA MM2S 9 BD0 5
const unsigned int mem_dma_mm2s_9_bd0_5 = 0x00049514;
// DMA MM2S 9 BD0 6
const unsigned int mem_dma_mm2s_9_bd0_6 = 0x00049518;
// DMA MM2S 9 BD0 7
const unsigned int mem_dma_mm2s_9_bd0_7 = 0x0004951C;
// DMA MM2S 9 BD0 8
const unsigned int mem_dma_mm2s_9_bd0_8 = 0x00049520;
// DMA MM2S 9 BD0 9
const unsigned int mem_dma_mm2s_9_bd0_9 = 0x00049524;
// DMA MM2S 9 BD0 10
const unsigned int mem_dma_mm2s_9_bd0_10 = 0x00049528;
// DMA MM2S 9 BD1 0
const unsigned int mem_dma_mm2s_9_bd1_0 = 0x00049530;
// DMA MM2S 9 BD1 1
const unsigned int mem_dma_mm2s_9_bd1_1 = 0x00049534;
// DMA MM2S 9 BD1 2
const unsigned int mem_dma_mm2s_9_bd1_2 = 0x00049538;
// DMA MM2S 9 BD1 3
const unsigned int mem_dma_mm2s_9_bd1_3 = 0x0004953C;
// DMA MM2S 9 BD1 4
const unsigned int mem_dma_mm2s_9_bd1_4 = 0x00049540;
// DMA MM2S 9 BD1 5
const unsigned int mem_dma_mm2s_9_bd1_5 = 0x00049544;
// DMA MM2S 9 BD1 6
const unsigned int mem_dma_mm2s_9_bd1_6 = 0x00049548;
// DMA MM2S 9 BD1 7
const unsigned int mem_dma_mm2s_9_bd1_7 = 0x0004954C;
// DMA MM2S 9 BD1 8
const unsigned int mem_dma_mm2s_9_bd1_8 = 0x00049550;
// DMA MM2S 9 BD1 9
const unsigned int mem_dma_mm2s_9_bd1_9 = 0x00049554;
// DMA MM2S 9 BD1 10
const unsigned int mem_dma_mm2s_9_bd1_10 = 0x00049558;
// DMA MM2S 9 BD2 0
const unsigned int mem_dma_mm2s_9_bd2_0 = 0x00049560;
// DMA MM2S 9 BD2 1
const unsigned int mem_dma_mm2s_9_bd2_1 = 0x00049564;
// DMA MM2S 9 BD2 2
const unsigned int mem_dma_mm2s_9_bd2_2 = 0x00049568;
// DMA MM2S 9 BD2 3
const unsigned int mem_dma_mm2s_9_bd2_3 = 0x0004956C;
// DMA MM2S 9 BD2 4
const unsigned int mem_dma_mm2s_9_bd2_4 = 0x00049570;
// DMA MM2S 9 BD2 5
const unsigned int mem_dma_mm2s_9_bd2_5 = 0x00049574;
// DMA MM2S 9 BD2 6
const unsigned int mem_dma_mm2s_9_bd2_6 = 0x00049578;
// DMA MM2S 9 BD2 7
const unsigned int mem_dma_mm2s_9_bd2_7 = 0x0004957C;
// DMA MM2S 9 BD2 8
const unsigned int mem_dma_mm2s_9_bd2_8 = 0x00049580;
// DMA MM2S 9 BD2 9
const unsigned int mem_dma_mm2s_9_bd2_9 = 0x00049584;
// DMA MM2S 9 BD2 10
const unsigned int mem_dma_mm2s_9_bd2_10 = 0x00049588;
// DMA MM2S 9 BD3 0
const unsigned int mem_dma_mm2s_9_bd3_0 = 0x00049590;
// DMA MM2S 9 BD3 1
const unsigned int mem_dma_mm2s_9_bd3_1 = 0x00049594;
// DMA MM2S 9 BD3 2
const unsigned int mem_dma_mm2s_9_bd3_2 = 0x00049598;
// DMA MM2S 9 BD3 3
const unsigned int mem_dma_mm2s_9_bd3_3 = 0x0004959C;
// DMA MM2S 9 BD3 4
const unsigned int mem_dma_mm2s_9_bd3_4 = 0x000495A0;
// DMA MM2S 9 BD3 5
const unsigned int mem_dma_mm2s_9_bd3_5 = 0x000495A4;
// DMA MM2S 9 BD3 6
const unsigned int mem_dma_mm2s_9_bd3_6 = 0x000495A8;
// DMA MM2S 9 BD3 7
const unsigned int mem_dma_mm2s_9_bd3_7 = 0x000495AC;
// DMA MM2S 9 BD3 8
const unsigned int mem_dma_mm2s_9_bd3_8 = 0x000495B0;
// DMA MM2S 9 BD3 9
const unsigned int mem_dma_mm2s_9_bd3_9 = 0x000495B4;
// DMA MM2S 9 BD3 10
const unsigned int mem_dma_mm2s_9_bd3_10 = 0x000495B8;
// DMA MM2S 9 BD4 0
const unsigned int mem_dma_mm2s_9_bd4_0 = 0x000495C0;
// DMA MM2S 9 BD4 1
const unsigned int mem_dma_mm2s_9_bd4_1 = 0x000495C4;
// DMA MM2S 9 BD4 2
const unsigned int mem_dma_mm2s_9_bd4_2 = 0x000495C8;
// DMA MM2S 9 BD4 3
const unsigned int mem_dma_mm2s_9_bd4_3 = 0x000495CC;
// DMA MM2S 9 BD4 4
const unsigned int mem_dma_mm2s_9_bd4_4 = 0x000495D0;
// DMA MM2S 9 BD4 5
const unsigned int mem_dma_mm2s_9_bd4_5 = 0x000495D4;
// DMA MM2S 9 BD4 6
const unsigned int mem_dma_mm2s_9_bd4_6 = 0x000495D8;
// DMA MM2S 9 BD4 7
const unsigned int mem_dma_mm2s_9_bd4_7 = 0x000495DC;
// DMA MM2S 9 BD4 8
const unsigned int mem_dma_mm2s_9_bd4_8 = 0x000495E0;
// DMA MM2S 9 BD4 9
const unsigned int mem_dma_mm2s_9_bd4_9 = 0x000495E4;
// DMA MM2S 9 BD4 10
const unsigned int mem_dma_mm2s_9_bd4_10 = 0x000495E8;
// DMA MM2S 9 BD5 0
const unsigned int mem_dma_mm2s_9_bd5_0 = 0x000495F0;
// DMA MM2S 9 BD5 1
const unsigned int mem_dma_mm2s_9_bd5_1 = 0x000495F4;
// DMA MM2S 9 BD5 2
const unsigned int mem_dma_mm2s_9_bd5_2 = 0x000495F8;
// DMA MM2S 9 BD5 3
const unsigned int mem_dma_mm2s_9_bd5_3 = 0x000495FC;
// DMA MM2S 9 BD5 4
const unsigned int mem_dma_mm2s_9_bd5_4 = 0x00049600;
// DMA MM2S 9 BD5 5
const unsigned int mem_dma_mm2s_9_bd5_5 = 0x00049604;
// DMA MM2S 9 BD5 6
const unsigned int mem_dma_mm2s_9_bd5_6 = 0x00049608;
// DMA MM2S 9 BD5 7
const unsigned int mem_dma_mm2s_9_bd5_7 = 0x0004960C;
// DMA MM2S 9 BD5 8
const unsigned int mem_dma_mm2s_9_bd5_8 = 0x00049610;
// DMA MM2S 9 BD5 9
const unsigned int mem_dma_mm2s_9_bd5_9 = 0x00049614;
// DMA MM2S 9 BD5 10
const unsigned int mem_dma_mm2s_9_bd5_10 = 0x00049618;
// DMA MM2S 9 BD6 0
const unsigned int mem_dma_mm2s_9_bd6_0 = 0x00049620;
// DMA MM2S 9 BD6 1
const unsigned int mem_dma_mm2s_9_bd6_1 = 0x00049624;
// DMA MM2S 9 BD6 2
const unsigned int mem_dma_mm2s_9_bd6_2 = 0x00049628;
// DMA MM2S 9 BD6 3
const unsigned int mem_dma_mm2s_9_bd6_3 = 0x0004962C;
// DMA MM2S 9 BD6 4
const unsigned int mem_dma_mm2s_9_bd6_4 = 0x00049630;
// DMA MM2S 9 BD6 5
const unsigned int mem_dma_mm2s_9_bd6_5 = 0x00049634;
// DMA MM2S 9 BD6 6
const unsigned int mem_dma_mm2s_9_bd6_6 = 0x00049638;
// DMA MM2S 9 BD6 7
const unsigned int mem_dma_mm2s_9_bd6_7 = 0x0004963C;
// DMA MM2S 9 BD6 8
const unsigned int mem_dma_mm2s_9_bd6_8 = 0x00049640;
// DMA MM2S 9 BD6 9
const unsigned int mem_dma_mm2s_9_bd6_9 = 0x00049644;
// DMA MM2S 9 BD6 10
const unsigned int mem_dma_mm2s_9_bd6_10 = 0x00049648;
// DMA MM2S 9 BD7 0
const unsigned int mem_dma_mm2s_9_bd7_0 = 0x00049650;
// DMA MM2S 9 BD7 1
const unsigned int mem_dma_mm2s_9_bd7_1 = 0x00049654;
// DMA MM2S 9 BD7 2
const unsigned int mem_dma_mm2s_9_bd7_2 = 0x00049658;
// DMA MM2S 9 BD7 3
const unsigned int mem_dma_mm2s_9_bd7_3 = 0x0004965C;
// DMA MM2S 9 BD7 4
const unsigned int mem_dma_mm2s_9_bd7_4 = 0x00049660;
// DMA MM2S 9 BD7 5
const unsigned int mem_dma_mm2s_9_bd7_5 = 0x00049664;
// DMA MM2S 9 BD7 6
const unsigned int mem_dma_mm2s_9_bd7_6 = 0x00049668;
// DMA MM2S 9 BD7 7
const unsigned int mem_dma_mm2s_9_bd7_7 = 0x0004966C;
// DMA MM2S 9 BD7 8
const unsigned int mem_dma_mm2s_9_bd7_8 = 0x00049670;
// DMA MM2S 9 BD7 9
const unsigned int mem_dma_mm2s_9_bd7_9 = 0x00049674;
// DMA MM2S 9 BD7 10
const unsigned int mem_dma_mm2s_9_bd7_10 = 0x00049678;
// DMA MM2S 9 BD8 0
const unsigned int mem_dma_mm2s_9_bd8_0 = 0x00049680;
// DMA MM2S 9 BD8 1
const unsigned int mem_dma_mm2s_9_bd8_1 = 0x00049684;
// DMA MM2S 9 BD8 2
const unsigned int mem_dma_mm2s_9_bd8_2 = 0x00049688;
// DMA MM2S 9 BD8 3
const unsigned int mem_dma_mm2s_9_bd8_3 = 0x0004968C;
// DMA MM2S 9 BD8 4
const unsigned int mem_dma_mm2s_9_bd8_4 = 0x00049690;
// DMA MM2S 9 BD8 5
const unsigned int mem_dma_mm2s_9_bd8_5 = 0x00049694;
// DMA MM2S 9 BD8 6
const unsigned int mem_dma_mm2s_9_bd8_6 = 0x00049698;
// DMA MM2S 9 BD8 7
const unsigned int mem_dma_mm2s_9_bd8_7 = 0x0004969C;
// DMA MM2S 9 BD8 8
const unsigned int mem_dma_mm2s_9_bd8_8 = 0x000496A0;
// DMA MM2S 9 BD8 9
const unsigned int mem_dma_mm2s_9_bd8_9 = 0x000496A4;
// DMA MM2S 9 BD8 10
const unsigned int mem_dma_mm2s_9_bd8_10 = 0x000496A8;
// DMA MM2S 9 BD9 0
const unsigned int mem_dma_mm2s_9_bd9_0 = 0x000496B0;
// DMA MM2S 9 BD9 1
const unsigned int mem_dma_mm2s_9_bd9_1 = 0x000496B4;
// DMA MM2S 9 BD9 2
const unsigned int mem_dma_mm2s_9_bd9_2 = 0x000496B8;
// DMA MM2S 9 BD9 3
const unsigned int mem_dma_mm2s_9_bd9_3 = 0x000496BC;
// DMA MM2S 9 BD9 4
const unsigned int mem_dma_mm2s_9_bd9_4 = 0x000496C0;
// DMA MM2S 9 BD9 5
const unsigned int mem_dma_mm2s_9_bd9_5 = 0x000496C4;
// DMA MM2S 9 BD9 6
const unsigned int mem_dma_mm2s_9_bd9_6 = 0x000496C8;
// DMA MM2S 9 BD9 7
const unsigned int mem_dma_mm2s_9_bd9_7 = 0x000496CC;
// DMA MM2S 9 BD9 8
const unsigned int mem_dma_mm2s_9_bd9_8 = 0x000496D0;
// DMA MM2S 9 BD9 9
const unsigned int mem_dma_mm2s_9_bd9_9 = 0x000496D4;
// DMA MM2S 9 BD9 10
const unsigned int mem_dma_mm2s_9_bd9_10 = 0x000496D8;
// DMA MM2S 9 BD10 0
const unsigned int mem_dma_mm2s_9_bd10_0 = 0x000496E0;
// DMA MM2S 9 BD10 1
const unsigned int mem_dma_mm2s_9_bd10_1 = 0x000496E4;
// DMA MM2S 9 BD10 2
const unsigned int mem_dma_mm2s_9_bd10_2 = 0x000496E8;
// DMA MM2S 9 BD10 3
const unsigned int mem_dma_mm2s_9_bd10_3 = 0x000496EC;
// DMA MM2S 9 BD10 4
const unsigned int mem_dma_mm2s_9_bd10_4 = 0x000496F0;
// DMA MM2S 9 BD10 5
const unsigned int mem_dma_mm2s_9_bd10_5 = 0x000496F4;
// DMA MM2S 9 BD10 6
const unsigned int mem_dma_mm2s_9_bd10_6 = 0x000496F8;
// DMA MM2S 9 BD10 7
const unsigned int mem_dma_mm2s_9_bd10_7 = 0x000496FC;
// DMA MM2S 9 BD10 8
const unsigned int mem_dma_mm2s_9_bd10_8 = 0x00049700;
// DMA MM2S 9 BD10 9
const unsigned int mem_dma_mm2s_9_bd10_9 = 0x00049704;
// DMA MM2S 9 BD10 10
const unsigned int mem_dma_mm2s_9_bd10_10 = 0x00049708;
// DMA MM2S 9 BD11 0
const unsigned int mem_dma_mm2s_9_bd11_0 = 0x00049710;
// DMA MM2S 9 BD11 1
const unsigned int mem_dma_mm2s_9_bd11_1 = 0x00049714;
// DMA MM2S 9 BD11 2
const unsigned int mem_dma_mm2s_9_bd11_2 = 0x00049718;
// DMA MM2S 9 BD11 3
const unsigned int mem_dma_mm2s_9_bd11_3 = 0x0004971C;
// DMA MM2S 9 BD11 4
const unsigned int mem_dma_mm2s_9_bd11_4 = 0x00049720;
// DMA MM2S 9 BD11 5
const unsigned int mem_dma_mm2s_9_bd11_5 = 0x00049724;
// DMA MM2S 9 BD11 6
const unsigned int mem_dma_mm2s_9_bd11_6 = 0x00049728;
// DMA MM2S 9 BD11 7
const unsigned int mem_dma_mm2s_9_bd11_7 = 0x0004972C;
// DMA MM2S 9 BD11 8
const unsigned int mem_dma_mm2s_9_bd11_8 = 0x00049730;
// DMA MM2S 9 BD11 9
const unsigned int mem_dma_mm2s_9_bd11_9 = 0x00049734;
// DMA MM2S 9 BD11 10
const unsigned int mem_dma_mm2s_9_bd11_10 = 0x00049738;
// DMA MM2S 9 BD12 0
const unsigned int mem_dma_mm2s_9_bd12_0 = 0x00049740;
// DMA MM2S 9 BD12 1
const unsigned int mem_dma_mm2s_9_bd12_1 = 0x00049744;
// DMA MM2S 9 BD12 2
const unsigned int mem_dma_mm2s_9_bd12_2 = 0x00049748;
// DMA MM2S 9 BD12 3
const unsigned int mem_dma_mm2s_9_bd12_3 = 0x0004974C;
// DMA MM2S 9 BD12 4
const unsigned int mem_dma_mm2s_9_bd12_4 = 0x00049750;
// DMA MM2S 9 BD12 5
const unsigned int mem_dma_mm2s_9_bd12_5 = 0x00049754;
// DMA MM2S 9 BD12 6
const unsigned int mem_dma_mm2s_9_bd12_6 = 0x00049758;
// DMA MM2S 9 BD12 7
const unsigned int mem_dma_mm2s_9_bd12_7 = 0x0004975C;
// DMA MM2S 9 BD12 8
const unsigned int mem_dma_mm2s_9_bd12_8 = 0x00049760;
// DMA MM2S 9 BD12 9
const unsigned int mem_dma_mm2s_9_bd12_9 = 0x00049764;
// DMA MM2S 9 BD12 10
const unsigned int mem_dma_mm2s_9_bd12_10 = 0x00049768;
// DMA MM2S 9 BD13 0
const unsigned int mem_dma_mm2s_9_bd13_0 = 0x00049770;
// DMA MM2S 9 BD13 1
const unsigned int mem_dma_mm2s_9_bd13_1 = 0x00049774;
// DMA MM2S 9 BD13 2
const unsigned int mem_dma_mm2s_9_bd13_2 = 0x00049778;
// DMA MM2S 9 BD13 3
const unsigned int mem_dma_mm2s_9_bd13_3 = 0x0004977C;
// DMA MM2S 9 BD13 4
const unsigned int mem_dma_mm2s_9_bd13_4 = 0x00049780;
// DMA MM2S 9 BD13 5
const unsigned int mem_dma_mm2s_9_bd13_5 = 0x00049784;
// DMA MM2S 9 BD13 6
const unsigned int mem_dma_mm2s_9_bd13_6 = 0x00049788;
// DMA MM2S 9 BD13 7
const unsigned int mem_dma_mm2s_9_bd13_7 = 0x0004978C;
// DMA MM2S 9 BD13 8
const unsigned int mem_dma_mm2s_9_bd13_8 = 0x00049790;
// DMA MM2S 9 BD13 9
const unsigned int mem_dma_mm2s_9_bd13_9 = 0x00049794;
// DMA MM2S 9 BD13 10
const unsigned int mem_dma_mm2s_9_bd13_10 = 0x00049798;
// DMA MM2S 9 BD14 0
const unsigned int mem_dma_mm2s_9_bd14_0 = 0x000497A0;
// DMA MM2S 9 BD14 1
const unsigned int mem_dma_mm2s_9_bd14_1 = 0x000497A4;
// DMA MM2S 9 BD14 2
const unsigned int mem_dma_mm2s_9_bd14_2 = 0x000497A8;
// DMA MM2S 9 BD14 3
const unsigned int mem_dma_mm2s_9_bd14_3 = 0x000497AC;
// DMA MM2S 9 BD14 4
const unsigned int mem_dma_mm2s_9_bd14_4 = 0x000497B0;
// DMA MM2S 9 BD14 5
const unsigned int mem_dma_mm2s_9_bd14_5 = 0x000497B4;
// DMA MM2S 9 BD14 6
const unsigned int mem_dma_mm2s_9_bd14_6 = 0x000497B8;
// DMA MM2S 9 BD14 7
const unsigned int mem_dma_mm2s_9_bd14_7 = 0x000497BC;
// DMA MM2S 9 BD14 8
const unsigned int mem_dma_mm2s_9_bd14_8 = 0x000497C0;
// DMA MM2S 9 BD14 9
const unsigned int mem_dma_mm2s_9_bd14_9 = 0x000497C4;
// DMA MM2S 9 BD14 10
const unsigned int mem_dma_mm2s_9_bd14_10 = 0x000497C8;
// DMA MM2S 9 BD15 0
const unsigned int mem_dma_mm2s_9_bd15_0 = 0x000497D0;
// DMA MM2S 9 BD15 1
const unsigned int mem_dma_mm2s_9_bd15_1 = 0x000497D4;
// DMA MM2S 9 BD15 2
const unsigned int mem_dma_mm2s_9_bd15_2 = 0x000497D8;
// DMA MM2S 9 BD15 3
const unsigned int mem_dma_mm2s_9_bd15_3 = 0x000497DC;
// DMA MM2S 9 BD15 4
const unsigned int mem_dma_mm2s_9_bd15_4 = 0x000497E0;
// DMA MM2S 9 BD15 5
const unsigned int mem_dma_mm2s_9_bd15_5 = 0x000497E4;
// DMA MM2S 9 BD15 6
const unsigned int mem_dma_mm2s_9_bd15_6 = 0x000497E8;
// DMA MM2S 9 BD15 7
const unsigned int mem_dma_mm2s_9_bd15_7 = 0x000497EC;
// DMA MM2S 9 BD15 8
const unsigned int mem_dma_mm2s_9_bd15_8 = 0x000497F0;
// DMA MM2S 9 BD15 9
const unsigned int mem_dma_mm2s_9_bd15_9 = 0x000497F4;
// DMA MM2S 9 BD15 10
const unsigned int mem_dma_mm2s_9_bd15_10 = 0x000497F8;
// DMA MM2S 10 BD0 0
const unsigned int mem_dma_mm2s_10_bd0_0 = 0x00049800;
// DMA MM2S 10 BD0 1
const unsigned int mem_dma_mm2s_10_bd0_1 = 0x00049804;
// DMA MM2S 10 BD0 2
const unsigned int mem_dma_mm2s_10_bd0_2 = 0x00049808;
// DMA MM2S 10 BD0 3
const unsigned int mem_dma_mm2s_10_bd0_3 = 0x0004980C;
// DMA MM2S 10 BD0 4
const unsigned int mem_dma_mm2s_10_bd0_4 = 0x00049810;
// DMA MM2S 10 BD0 5
const unsigned int mem_dma_mm2s_10_bd0_5 = 0x00049814;
// DMA MM2S 10 BD0 6
const unsigned int mem_dma_mm2s_10_bd0_6 = 0x00049818;
// DMA MM2S 10 BD0 7
const unsigned int mem_dma_mm2s_10_bd0_7 = 0x0004981C;
// DMA MM2S 10 BD0 8
const unsigned int mem_dma_mm2s_10_bd0_8 = 0x00049820;
// DMA MM2S 10 BD0 9
const unsigned int mem_dma_mm2s_10_bd0_9 = 0x00049824;
// DMA MM2S 10 BD0 10
const unsigned int mem_dma_mm2s_10_bd0_10 = 0x00049828;
// DMA MM2S 10 BD1 0
const unsigned int mem_dma_mm2s_10_bd1_0 = 0x00049830;
// DMA MM2S 10 BD1 1
const unsigned int mem_dma_mm2s_10_bd1_1 = 0x00049834;
// DMA MM2S 10 BD1 2
const unsigned int mem_dma_mm2s_10_bd1_2 = 0x00049838;
// DMA MM2S 10 BD1 3
const unsigned int mem_dma_mm2s_10_bd1_3 = 0x0004983C;
// DMA MM2S 10 BD1 4
const unsigned int mem_dma_mm2s_10_bd1_4 = 0x00049840;
// DMA MM2S 10 BD1 5
const unsigned int mem_dma_mm2s_10_bd1_5 = 0x00049844;
// DMA MM2S 10 BD1 6
const unsigned int mem_dma_mm2s_10_bd1_6 = 0x00049848;
// DMA MM2S 10 BD1 7
const unsigned int mem_dma_mm2s_10_bd1_7 = 0x0004984C;
// DMA MM2S 10 BD1 8
const unsigned int mem_dma_mm2s_10_bd1_8 = 0x00049850;
// DMA MM2S 10 BD1 9
const unsigned int mem_dma_mm2s_10_bd1_9 = 0x00049854;
// DMA MM2S 10 BD1 10
const unsigned int mem_dma_mm2s_10_bd1_10 = 0x00049858;
// DMA MM2S 10 BD2 0
const unsigned int mem_dma_mm2s_10_bd2_0 = 0x00049860;
// DMA MM2S 10 BD2 1
const unsigned int mem_dma_mm2s_10_bd2_1 = 0x00049864;
// DMA MM2S 10 BD2 2
const unsigned int mem_dma_mm2s_10_bd2_2 = 0x00049868;
// DMA MM2S 10 BD2 3
const unsigned int mem_dma_mm2s_10_bd2_3 = 0x0004986C;
// DMA MM2S 10 BD2 4
const unsigned int mem_dma_mm2s_10_bd2_4 = 0x00049870;
// DMA MM2S 10 BD2 5
const unsigned int mem_dma_mm2s_10_bd2_5 = 0x00049874;
// DMA MM2S 10 BD2 6
const unsigned int mem_dma_mm2s_10_bd2_6 = 0x00049878;
// DMA MM2S 10 BD2 7
const unsigned int mem_dma_mm2s_10_bd2_7 = 0x0004987C;
// DMA MM2S 10 BD2 8
const unsigned int mem_dma_mm2s_10_bd2_8 = 0x00049880;
// DMA MM2S 10 BD2 9
const unsigned int mem_dma_mm2s_10_bd2_9 = 0x00049884;
// DMA MM2S 10 BD2 10
const unsigned int mem_dma_mm2s_10_bd2_10 = 0x00049888;
// DMA MM2S 10 BD3 0
const unsigned int mem_dma_mm2s_10_bd3_0 = 0x00049890;
// DMA MM2S 10 BD3 1
const unsigned int mem_dma_mm2s_10_bd3_1 = 0x00049894;
// DMA MM2S 10 BD3 2
const unsigned int mem_dma_mm2s_10_bd3_2 = 0x00049898;
// DMA MM2S 10 BD3 3
const unsigned int mem_dma_mm2s_10_bd3_3 = 0x0004989C;
// DMA MM2S 10 BD3 4
const unsigned int mem_dma_mm2s_10_bd3_4 = 0x000498A0;
// DMA MM2S 10 BD3 5
const unsigned int mem_dma_mm2s_10_bd3_5 = 0x000498A4;
// DMA MM2S 10 BD3 6
const unsigned int mem_dma_mm2s_10_bd3_6 = 0x000498A8;
// DMA MM2S 10 BD3 7
const unsigned int mem_dma_mm2s_10_bd3_7 = 0x000498AC;
// DMA MM2S 10 BD3 8
const unsigned int mem_dma_mm2s_10_bd3_8 = 0x000498B0;
// DMA MM2S 10 BD3 9
const unsigned int mem_dma_mm2s_10_bd3_9 = 0x000498B4;
// DMA MM2S 10 BD3 10
const unsigned int mem_dma_mm2s_10_bd3_10 = 0x000498B8;
// DMA MM2S 10 BD4 0
const unsigned int mem_dma_mm2s_10_bd4_0 = 0x000498C0;
// DMA MM2S 10 BD4 1
const unsigned int mem_dma_mm2s_10_bd4_1 = 0x000498C4;
// DMA MM2S 10 BD4 2
const unsigned int mem_dma_mm2s_10_bd4_2 = 0x000498C8;
// DMA MM2S 10 BD4 3
const unsigned int mem_dma_mm2s_10_bd4_3 = 0x000498CC;
// DMA MM2S 10 BD4 4
const unsigned int mem_dma_mm2s_10_bd4_4 = 0x000498D0;
// DMA MM2S 10 BD4 5
const unsigned int mem_dma_mm2s_10_bd4_5 = 0x000498D4;
// DMA MM2S 10 BD4 6
const unsigned int mem_dma_mm2s_10_bd4_6 = 0x000498D8;
// DMA MM2S 10 BD4 7
const unsigned int mem_dma_mm2s_10_bd4_7 = 0x000498DC;
// DMA MM2S 10 BD4 8
const unsigned int mem_dma_mm2s_10_bd4_8 = 0x000498E0;
// DMA MM2S 10 BD4 9
const unsigned int mem_dma_mm2s_10_bd4_9 = 0x000498E4;
// DMA MM2S 10 BD4 10
const unsigned int mem_dma_mm2s_10_bd4_10 = 0x000498E8;
// DMA MM2S 10 BD5 0
const unsigned int mem_dma_mm2s_10_bd5_0 = 0x000498F0;
// DMA MM2S 10 BD5 1
const unsigned int mem_dma_mm2s_10_bd5_1 = 0x000498F4;
// DMA MM2S 10 BD5 2
const unsigned int mem_dma_mm2s_10_bd5_2 = 0x000498F8;
// DMA MM2S 10 BD5 3
const unsigned int mem_dma_mm2s_10_bd5_3 = 0x000498FC;
// DMA MM2S 10 BD5 4
const unsigned int mem_dma_mm2s_10_bd5_4 = 0x00049900;
// DMA MM2S 10 BD5 5
const unsigned int mem_dma_mm2s_10_bd5_5 = 0x00049904;
// DMA MM2S 10 BD5 6
const unsigned int mem_dma_mm2s_10_bd5_6 = 0x00049908;
// DMA MM2S 10 BD5 7
const unsigned int mem_dma_mm2s_10_bd5_7 = 0x0004990C;
// DMA MM2S 10 BD5 8
const unsigned int mem_dma_mm2s_10_bd5_8 = 0x00049910;
// DMA MM2S 10 BD5 9
const unsigned int mem_dma_mm2s_10_bd5_9 = 0x00049914;
// DMA MM2S 10 BD5 10
const unsigned int mem_dma_mm2s_10_bd5_10 = 0x00049918;
// DMA MM2S 10 BD6 0
const unsigned int mem_dma_mm2s_10_bd6_0 = 0x00049920;
// DMA MM2S 10 BD6 1
const unsigned int mem_dma_mm2s_10_bd6_1 = 0x00049924;
// DMA MM2S 10 BD6 2
const unsigned int mem_dma_mm2s_10_bd6_2 = 0x00049928;
// DMA MM2S 10 BD6 3
const unsigned int mem_dma_mm2s_10_bd6_3 = 0x0004992C;
// DMA MM2S 10 BD6 4
const unsigned int mem_dma_mm2s_10_bd6_4 = 0x00049930;
// DMA MM2S 10 BD6 5
const unsigned int mem_dma_mm2s_10_bd6_5 = 0x00049934;
// DMA MM2S 10 BD6 6
const unsigned int mem_dma_mm2s_10_bd6_6 = 0x00049938;
// DMA MM2S 10 BD6 7
const unsigned int mem_dma_mm2s_10_bd6_7 = 0x0004993C;
// DMA MM2S 10 BD6 8
const unsigned int mem_dma_mm2s_10_bd6_8 = 0x00049940;
// DMA MM2S 10 BD6 9
const unsigned int mem_dma_mm2s_10_bd6_9 = 0x00049944;
// DMA MM2S 10 BD6 10
const unsigned int mem_dma_mm2s_10_bd6_10 = 0x00049948;
// DMA MM2S 10 BD7 0
const unsigned int mem_dma_mm2s_10_bd7_0 = 0x00049950;
// DMA MM2S 10 BD7 1
const unsigned int mem_dma_mm2s_10_bd7_1 = 0x00049954;
// DMA MM2S 10 BD7 2
const unsigned int mem_dma_mm2s_10_bd7_2 = 0x00049958;
// DMA MM2S 10 BD7 3
const unsigned int mem_dma_mm2s_10_bd7_3 = 0x0004995C;
// DMA MM2S 10 BD7 4
const unsigned int mem_dma_mm2s_10_bd7_4 = 0x00049960;
// DMA MM2S 10 BD7 5
const unsigned int mem_dma_mm2s_10_bd7_5 = 0x00049964;
// DMA MM2S 10 BD7 6
const unsigned int mem_dma_mm2s_10_bd7_6 = 0x00049968;
// DMA MM2S 10 BD7 7
const unsigned int mem_dma_mm2s_10_bd7_7 = 0x0004996C;
// DMA MM2S 10 BD7 8
const unsigned int mem_dma_mm2s_10_bd7_8 = 0x00049970;
// DMA MM2S 10 BD7 9
const unsigned int mem_dma_mm2s_10_bd7_9 = 0x00049974;
// DMA MM2S 10 BD7 10
const unsigned int mem_dma_mm2s_10_bd7_10 = 0x00049978;
// DMA MM2S 10 BD8 0
const unsigned int mem_dma_mm2s_10_bd8_0 = 0x00049980;
// DMA MM2S 10 BD8 1
const unsigned int mem_dma_mm2s_10_bd8_1 = 0x00049984;
// DMA MM2S 10 BD8 2
const unsigned int mem_dma_mm2s_10_bd8_2 = 0x00049988;
// DMA MM2S 10 BD8 3
const unsigned int mem_dma_mm2s_10_bd8_3 = 0x0004998C;
// DMA MM2S 10 BD8 4
const unsigned int mem_dma_mm2s_10_bd8_4 = 0x00049990;
// DMA MM2S 10 BD8 5
const unsigned int mem_dma_mm2s_10_bd8_5 = 0x00049994;
// DMA MM2S 10 BD8 6
const unsigned int mem_dma_mm2s_10_bd8_6 = 0x00049998;
// DMA MM2S 10 BD8 7
const unsigned int mem_dma_mm2s_10_bd8_7 = 0x0004999C;
// DMA MM2S 10 BD8 8
const unsigned int mem_dma_mm2s_10_bd8_8 = 0x000499A0;
// DMA MM2S 10 BD8 9
const unsigned int mem_dma_mm2s_10_bd8_9 = 0x000499A4;
// DMA MM2S 10 BD8 10
const unsigned int mem_dma_mm2s_10_bd8_10 = 0x000499A8;
// DMA MM2S 10 BD9 0
const unsigned int mem_dma_mm2s_10_bd9_0 = 0x000499B0;
// DMA MM2S 10 BD9 1
const unsigned int mem_dma_mm2s_10_bd9_1 = 0x000499B4;
// DMA MM2S 10 BD9 2
const unsigned int mem_dma_mm2s_10_bd9_2 = 0x000499B8;
// DMA MM2S 10 BD9 3
const unsigned int mem_dma_mm2s_10_bd9_3 = 0x000499BC;
// DMA MM2S 10 BD9 4
const unsigned int mem_dma_mm2s_10_bd9_4 = 0x000499C0;
// DMA MM2S 10 BD9 5
const unsigned int mem_dma_mm2s_10_bd9_5 = 0x000499C4;
// DMA MM2S 10 BD9 6
const unsigned int mem_dma_mm2s_10_bd9_6 = 0x000499C8;
// DMA MM2S 10 BD9 7
const unsigned int mem_dma_mm2s_10_bd9_7 = 0x000499CC;
// DMA MM2S 10 BD9 8
const unsigned int mem_dma_mm2s_10_bd9_8 = 0x000499D0;
// DMA MM2S 10 BD9 9
const unsigned int mem_dma_mm2s_10_bd9_9 = 0x000499D4;
// DMA MM2S 10 BD9 10
const unsigned int mem_dma_mm2s_10_bd9_10 = 0x000499D8;
// DMA MM2S 10 BD10 0
const unsigned int mem_dma_mm2s_10_bd10_0 = 0x000499E0;
// DMA MM2S 10 BD10 1
const unsigned int mem_dma_mm2s_10_bd10_1 = 0x000499E4;
// DMA MM2S 10 BD10 2
const unsigned int mem_dma_mm2s_10_bd10_2 = 0x000499E8;
// DMA MM2S 10 BD10 3
const unsigned int mem_dma_mm2s_10_bd10_3 = 0x000499EC;
// DMA MM2S 10 BD10 4
const unsigned int mem_dma_mm2s_10_bd10_4 = 0x000499F0;
// DMA MM2S 10 BD10 5
const unsigned int mem_dma_mm2s_10_bd10_5 = 0x000499F4;
// DMA MM2S 10 BD10 6
const unsigned int mem_dma_mm2s_10_bd10_6 = 0x000499F8;
// DMA MM2S 10 BD10 7
const unsigned int mem_dma_mm2s_10_bd10_7 = 0x000499FC;
// DMA MM2S 10 BD10 8
const unsigned int mem_dma_mm2s_10_bd10_8 = 0x00049A00;
// DMA MM2S 10 BD10 9
const unsigned int mem_dma_mm2s_10_bd10_9 = 0x00049A04;
// DMA MM2S 10 BD10 10
const unsigned int mem_dma_mm2s_10_bd10_10 = 0x00049A08;
// DMA MM2S 10 BD11 0
const unsigned int mem_dma_mm2s_10_bd11_0 = 0x00049A10;
// DMA MM2S 10 BD11 1
const unsigned int mem_dma_mm2s_10_bd11_1 = 0x00049A14;
// DMA MM2S 10 BD11 2
const unsigned int mem_dma_mm2s_10_bd11_2 = 0x00049A18;
// DMA MM2S 10 BD11 3
const unsigned int mem_dma_mm2s_10_bd11_3 = 0x00049A1C;
// DMA MM2S 10 BD11 4
const unsigned int mem_dma_mm2s_10_bd11_4 = 0x00049A20;
// DMA MM2S 10 BD11 5
const unsigned int mem_dma_mm2s_10_bd11_5 = 0x00049A24;
// DMA MM2S 10 BD11 6
const unsigned int mem_dma_mm2s_10_bd11_6 = 0x00049A28;
// DMA MM2S 10 BD11 7
const unsigned int mem_dma_mm2s_10_bd11_7 = 0x00049A2C;
// DMA MM2S 10 BD11 8
const unsigned int mem_dma_mm2s_10_bd11_8 = 0x00049A30;
// DMA MM2S 10 BD11 9
const unsigned int mem_dma_mm2s_10_bd11_9 = 0x00049A34;
// DMA MM2S 10 BD11 10
const unsigned int mem_dma_mm2s_10_bd11_10 = 0x00049A38;
// DMA MM2S 10 BD12 0
const unsigned int mem_dma_mm2s_10_bd12_0 = 0x00049A40;
// DMA MM2S 10 BD12 1
const unsigned int mem_dma_mm2s_10_bd12_1 = 0x00049A44;
// DMA MM2S 10 BD12 2
const unsigned int mem_dma_mm2s_10_bd12_2 = 0x00049A48;
// DMA MM2S 10 BD12 3
const unsigned int mem_dma_mm2s_10_bd12_3 = 0x00049A4C;
// DMA MM2S 10 BD12 4
const unsigned int mem_dma_mm2s_10_bd12_4 = 0x00049A50;
// DMA MM2S 10 BD12 5
const unsigned int mem_dma_mm2s_10_bd12_5 = 0x00049A54;
// DMA MM2S 10 BD12 6
const unsigned int mem_dma_mm2s_10_bd12_6 = 0x00049A58;
// DMA MM2S 10 BD12 7
const unsigned int mem_dma_mm2s_10_bd12_7 = 0x00049A5C;
// DMA MM2S 10 BD12 8
const unsigned int mem_dma_mm2s_10_bd12_8 = 0x00049A60;
// DMA MM2S 10 BD12 9
const unsigned int mem_dma_mm2s_10_bd12_9 = 0x00049A64;
// DMA MM2S 10 BD12 10
const unsigned int mem_dma_mm2s_10_bd12_10 = 0x00049A68;
// DMA MM2S 10 BD13 0
const unsigned int mem_dma_mm2s_10_bd13_0 = 0x00049A70;
// DMA MM2S 10 BD13 1
const unsigned int mem_dma_mm2s_10_bd13_1 = 0x00049A74;
// DMA MM2S 10 BD13 2
const unsigned int mem_dma_mm2s_10_bd13_2 = 0x00049A78;
// DMA MM2S 10 BD13 3
const unsigned int mem_dma_mm2s_10_bd13_3 = 0x00049A7C;
// DMA MM2S 10 BD13 4
const unsigned int mem_dma_mm2s_10_bd13_4 = 0x00049A80;
// DMA MM2S 10 BD13 5
const unsigned int mem_dma_mm2s_10_bd13_5 = 0x00049A84;
// DMA MM2S 10 BD13 6
const unsigned int mem_dma_mm2s_10_bd13_6 = 0x00049A88;
// DMA MM2S 10 BD13 7
const unsigned int mem_dma_mm2s_10_bd13_7 = 0x00049A8C;
// DMA MM2S 10 BD13 8
const unsigned int mem_dma_mm2s_10_bd13_8 = 0x00049A90;
// DMA MM2S 10 BD13 9
const unsigned int mem_dma_mm2s_10_bd13_9 = 0x00049A94;
// DMA MM2S 10 BD13 10
const unsigned int mem_dma_mm2s_10_bd13_10 = 0x00049A98;
// DMA MM2S 10 BD14 0
const unsigned int mem_dma_mm2s_10_bd14_0 = 0x00049AA0;
// DMA MM2S 10 BD14 1
const unsigned int mem_dma_mm2s_10_bd14_1 = 0x00049AA4;
// DMA MM2S 10 BD14 2
const unsigned int mem_dma_mm2s_10_bd14_2 = 0x00049AA8;
// DMA MM2S 10 BD14 3
const unsigned int mem_dma_mm2s_10_bd14_3 = 0x00049AAC;
// DMA MM2S 10 BD14 4
const unsigned int mem_dma_mm2s_10_bd14_4 = 0x00049AB0;
// DMA MM2S 10 BD14 5
const unsigned int mem_dma_mm2s_10_bd14_5 = 0x00049AB4;
// DMA MM2S 10 BD14 6
const unsigned int mem_dma_mm2s_10_bd14_6 = 0x00049AB8;
// DMA MM2S 10 BD14 7
const unsigned int mem_dma_mm2s_10_bd14_7 = 0x00049ABC;
// DMA MM2S 10 BD14 8
const unsigned int mem_dma_mm2s_10_bd14_8 = 0x00049AC0;
// DMA MM2S 10 BD14 9
const unsigned int mem_dma_mm2s_10_bd14_9 = 0x00049AC4;
// DMA MM2S 10 BD14 10
const unsigned int mem_dma_mm2s_10_bd14_10 = 0x00049AC8;
// DMA MM2S 10 BD15 0
const unsigned int mem_dma_mm2s_10_bd15_0 = 0x00049AD0;
// DMA MM2S 10 BD15 1
const unsigned int mem_dma_mm2s_10_bd15_1 = 0x00049AD4;
// DMA MM2S 10 BD15 2
const unsigned int mem_dma_mm2s_10_bd15_2 = 0x00049AD8;
// DMA MM2S 10 BD15 3
const unsigned int mem_dma_mm2s_10_bd15_3 = 0x00049ADC;
// DMA MM2S 10 BD15 4
const unsigned int mem_dma_mm2s_10_bd15_4 = 0x00049AE0;
// DMA MM2S 10 BD15 5
const unsigned int mem_dma_mm2s_10_bd15_5 = 0x00049AE4;
// DMA MM2S 10 BD15 6
const unsigned int mem_dma_mm2s_10_bd15_6 = 0x00049AE8;
// DMA MM2S 10 BD15 7
const unsigned int mem_dma_mm2s_10_bd15_7 = 0x00049AEC;
// DMA MM2S 10 BD15 8
const unsigned int mem_dma_mm2s_10_bd15_8 = 0x00049AF0;
// DMA MM2S 10 BD15 9
const unsigned int mem_dma_mm2s_10_bd15_9 = 0x00049AF4;
// DMA MM2S 10 BD15 10
const unsigned int mem_dma_mm2s_10_bd15_10 = 0x00049AF8;
// DMA Control Register S2MM Ch4
const unsigned int mem_dma_s2mm_4_ctrl = 0x00049E00;
// DMA Control Register S2MM Ch4 start BD
const unsigned int mem_dma_s2mm_4_start_queue = 0x00049E04;
// DMA Control Register S2MM Ch5
const unsigned int mem_dma_s2mm_5_ctrl = 0x00049E08;
// DMA Control Register S2MM Ch5 start BD
const unsigned int mem_dma_s2mm_5_start_queue = 0x00049E0C;
// DMA Control Register S2MM Ch6
const unsigned int mem_dma_s2mm_6_ctrl = 0x00049E10;
// DMA Control Register S2MM Ch6 start BD
const unsigned int mem_dma_s2mm_6_start_queue = 0x00049E14;
// DMA Control Register S2MM Ch7
const unsigned int mem_dma_s2mm_7_ctrl = 0x00049E18;
// DMA Control Register S2MM Ch7 start BD
const unsigned int mem_dma_s2mm_7_start_queue = 0x00049E1C;
// DMA Control Register MM2S Ch6
const unsigned int mem_dma_mm2s_6_ctrl = 0x00049E60;
// DMA Control Register MM2S Ch6 start BD
const unsigned int mem_dma_mm2s_6_start_queue = 0x00049E64;
// DMA Control Register MM2S Ch7
const unsigned int mem_dma_mm2s_7_ctrl = 0x00049E68;
// DMA Control Register MM2S Ch7 start BD
const unsigned int mem_dma_mm2s_7_start_queue = 0x00049E6C;
// DMA Control Register MM2S Ch8
const unsigned int mem_dma_mm2s_8_ctrl = 0x00049E70;
// DMA Control Register MM2S Ch8 start BD
const unsigned int mem_dma_mm2s_8_start_queue = 0x00049E74;
// DMA Control Register MM2S Ch9
const unsigned int mem_dma_mm2s_9_ctrl = 0x00049E78;
// DMA Control Register MM2S Ch9 start BD
const unsigned int mem_dma_mm2s_9_start_queue = 0x00049E7C;
// DMA Control Register MM2S Ch10
const unsigned int mem_dma_mm2s_10_ctrl = 0x00049E80;
// DMA Control Register MM2S Ch10 start BD
const unsigned int mem_dma_mm2s_10_start_queue = 0x00049E84;
// DMA S2MM Status Register Ch4
const unsigned int mem_dma_s2mm_status_4 = 0x00049ED0;
// DMA S2MM Status Register Ch5
const unsigned int mem_dma_s2mm_status_5 = 0x00049ED4;
// DMA S2MM Status Register Ch6
const unsigned int mem_dma_s2mm_status_6 = 0x00049ED8;
// DMA S2MM Status Register Ch7
const unsigned int mem_dma_s2mm_status_7 = 0x00049EDC;
// DMA MM2S Status Register Ch6
const unsigned int mem_dma_mm2s_status_6 = 0x00049F00;
// DMA MM2S Status Register Ch7
const unsigned int mem_dma_mm2s_status_7 = 0x00049F04;
// DMA MM2S Status Register Ch8
const unsigned int mem_dma_mm2s_status_8 = 0x00049F08;
// DMA MM2S Status Register Ch9
const unsigned int mem_dma_mm2s_status_9 = 0x00049F0C;
// DMA MM2S Status Register Ch10
const unsigned int mem_dma_mm2s_status_10 = 0x00049F10;
// Selection of which DMA channels will generate events in switch B
const unsigned int mem_dma_event_channel_selection_b = 0x00049F40;
// DMA S2MM Current Write Count Ch4
const unsigned int mem_dma_s2mm_current_write_count_4 = 0x00049F50;
// DMA S2MM Current Write Count Ch5
const unsigned int mem_dma_s2mm_current_write_count_5 = 0x00049F54;
// DMA S2MM Current Write Count Ch6
const unsigned int mem_dma_s2mm_current_write_count_6 = 0x00049F58;
// DMA S2MM Current Write Count Ch7
const unsigned int mem_dma_s2mm_current_write_count_7 = 0x00049F5C;
// DMA S2MM FoT Count FIFO Pop Ch4
const unsigned int mem_dma_s2mm_fot_count_fifo_pop_4 = 0x00049F60;
// DMA S2MM FoT Count FIFO Pop Ch5
const unsigned int mem_dma_s2mm_fot_count_fifo_pop_5 = 0x00049F64;
// DMA S2MM FoT Count FIFO Pop Ch6
const unsigned int mem_dma_s2mm_fot_count_fifo_pop_6 = 0x00049F68;
// DMA S2MM FoT Count FIFO Pop Ch7
const unsigned int mem_dma_s2mm_fot_count_fifo_pop_7 = 0x00049F6C;
// DMA MM2S 6 Constant Pad Value
const unsigned int mem_dma_mm2s_6_constant_pad_value = 0x00049F70;
// DMA MM2S 7 Constant Pad Value
const unsigned int mem_dma_mm2s_7_constant_pad_value = 0x00049F74;
// DMA MM2S 8 Constant Pad Value
const unsigned int mem_dma_mm2s_8_constant_pad_value = 0x00049F78;
// DMA MM2S 9 Constant Pad Value
const unsigned int mem_dma_mm2s_9_constant_pad_value = 0x00049F7C;
// DMA MM2S 10 Constant Pad Value
const unsigned int mem_dma_mm2s_10_constant_pad_value = 0x00049F80;
// Value of lock 32
const unsigned int mem_lock32_value = 0x00050000;
// Value of lock 33
const unsigned int mem_lock33_value = 0x00050010;
// Value of lock 34
const unsigned int mem_lock34_value = 0x00050020;
// Value of lock 35
const unsigned int mem_lock35_value = 0x00050030;
// Value of lock 36
const unsigned int mem_lock36_value = 0x00050040;
// Value of lock 37
const unsigned int mem_lock37_value = 0x00050050;
// Value of lock 38
const unsigned int mem_lock38_value = 0x00050060;
// Value of lock 39
const unsigned int mem_lock39_value = 0x00050070;
// Value of lock 40
const unsigned int mem_lock40_value = 0x00050080;
// Value of lock 41
const unsigned int mem_lock41_value = 0x00050090;
// Value of lock 42
const unsigned int mem_lock42_value = 0x000500A0;
// Value of lock 43
const unsigned int mem_lock43_value = 0x000500B0;
// Value of lock 44
const unsigned int mem_lock44_value = 0x000500C0;
// Value of lock 45
const unsigned int mem_lock45_value = 0x000500D0;
// Value of lock 46
const unsigned int mem_lock46_value = 0x000500E0;
// Value of lock 47
const unsigned int mem_lock47_value = 0x000500F0;
// Value of lock 48
const unsigned int mem_lock48_value = 0x00050100;
// Value of lock 49
const unsigned int mem_lock49_value = 0x00050110;
// Value of lock 50
const unsigned int mem_lock50_value = 0x00050120;
// Value of lock 51
const unsigned int mem_lock51_value = 0x00050130;
// Value of lock 52
const unsigned int mem_lock52_value = 0x00050140;
// Value of lock 53
const unsigned int mem_lock53_value = 0x00050150;
// Value of lock 54
const unsigned int mem_lock54_value = 0x00050160;
// Value of lock 55
const unsigned int mem_lock55_value = 0x00050170;
// Value of lock 56
const unsigned int mem_lock56_value = 0x00050180;
// Value of lock 57
const unsigned int mem_lock57_value = 0x00050190;
// Value of lock 58
const unsigned int mem_lock58_value = 0x000501A0;
// Value of lock 59
const unsigned int mem_lock59_value = 0x000501B0;
// Value of lock 60
const unsigned int mem_lock60_value = 0x000501C0;
// Value of lock 61
const unsigned int mem_lock61_value = 0x000501D0;
// Value of lock 62
const unsigned int mem_lock62_value = 0x000501E0;
// Value of lock 63
const unsigned int mem_lock63_value = 0x000501F0;
// Select lock for lock event generation 0 in switch B
const unsigned int mem_locks_event_selection_b_0 = 0x00050200;
// Select lock for lock event generation 1 in switch B
const unsigned int mem_locks_event_selection_b_1 = 0x00050204;
// Select lock for lock event generation 2 in switch B
const unsigned int mem_locks_event_selection_b_2 = 0x00050208;
// Select lock for lock event generation 3 in switch B
const unsigned int mem_locks_event_selection_b_3 = 0x0005020C;
// Select lock for lock event generation 4 in switch B
const unsigned int mem_locks_event_selection_b_4 = 0x00050210;
// Select lock for lock event generation 5 in switch B
const unsigned int mem_locks_event_selection_b_5 = 0x00050214;
// Select lock for lock event generation 6 in switch B
const unsigned int mem_locks_event_selection_b_6 = 0x00050218;
// Select lock for lock event generation 7 in switch B
const unsigned int mem_locks_event_selection_b_7 = 0x0005021C;
// Status bits for lock overflow, write to clear
const unsigned int mem_locks_overflow_1 = 0x00050220;
// Status bits for lock underflow, write to clear
const unsigned int mem_locks_underflow_1 = 0x00050230;
// Lock Request for locks 32-63, encoded via address bits: bits 4:0 of Lock_Id [14:10], Acq/nRel (Acq=1, Rel=0) (9), Change_Value [8:2] (32 kB address space)
const unsigned int mem_lock_request_b = 0x00058000;
// Stream Switch Manager Configuration DMA 4
const unsigned int mem_stream_switch_manager_config_dma_4 = 0x00060000;
// Stream Switch Manager Configuration DMA 5
const unsigned int mem_stream_switch_manager_config_dma_5 = 0x00060004;
// Stream Switch Manager Configuration DMA 6
const unsigned int mem_stream_switch_manager_config_dma_6 = 0x00060008;
// Stream Switch Manager Configuration DMA 7
const unsigned int mem_stream_switch_manager_config_dma_7 = 0x0006000C;
// Stream Switch Manager Configuration FIFO 1
const unsigned int mem_stream_switch_manager_config_fifo_1 = 0x00060010;
// Stream Switch Manager Configuration South 2
const unsigned int mem_stream_switch_manager_config_south_2 = 0x00060014;
// Stream Switch Manager Configuration South 3
const unsigned int mem_stream_switch_manager_config_south_3 = 0x00060018;
// Stream Switch Manager Configuration South Y
const unsigned int mem_stream_switch_manager_config_south_y = 0x0006001C;
// Stream Switch Manager Configuration North 4
const unsigned int mem_stream_switch_manager_config_north_4 = 0x00060020;
// Stream Switch Manager Configuration North 5
const unsigned int mem_stream_switch_manager_config_north_5 = 0x00060024;
// Stream Switch Manager Configuration North 6
const unsigned int mem_stream_switch_manager_config_north_6 = 0x00060028;
// Stream Switch Manager Configuration North 7
const unsigned int mem_stream_switch_manager_config_north_7 = 0x0006002C;
// Stream Switch Manager Configuration North_Control 1
const unsigned int mem_stream_switch_manager_config_north_control_1 = 0x00060030;
// Stream Switch Manager Configuration Tile Ctrl 1
const unsigned int mem_stream_switch_manager_config_tile_ctrl_1 = 0x00060034;
// Stream Switch Manager Configuration 32-bit Switch 1
const unsigned int mem_stream_switch_manager_config_32b_switch_1 = 0x00060038;
// Stream Switch Subordinate Configuration DMA 6
const unsigned int mem_stream_switch_subordinate_config_dma_6 = 0x00060040;
// Stream Switch Subordinate Configuration DMA 7
const unsigned int mem_stream_switch_subordinate_config_dma_7 = 0x00060044;
// Stream Switch Subordinate Configuration DMA 8
const unsigned int mem_stream_switch_subordinate_config_dma_8 = 0x00060048;
// Stream Switch Subordinate Configuration DMA 9
const unsigned int mem_stream_switch_subordinate_config_dma_9 = 0x0006004C;
// Stream Switch Subordinate Configuration DMA 10
const unsigned int mem_stream_switch_subordinate_config_dma_10 = 0x00060050;
// Stream Switch Subordinate Configuration DMA 11
const unsigned int mem_stream_switch_subordinate_config_dma_11 = 0x00060054;
// Stream Switch Subordinate Configuration FIFO 1
const unsigned int mem_stream_switch_subordinate_config_fifo_1 = 0x00060058;
// Stream Switch Subordinate Configuration South 2
const unsigned int mem_stream_switch_subordinate_config_south_2 = 0x0006005C;
// Stream Switch Subordinate Configuration South 3
const unsigned int mem_stream_switch_subordinate_config_south_3 = 0x00060060;
// Stream Switch Subordinate Configuration South Z
const unsigned int mem_stream_switch_subordinate_config_south_z = 0x00060064;
// Stream Switch Subordinate Configuration South A
const unsigned int mem_stream_switch_subordinate_config_south_a = 0x00060068;
// Stream Switch Subordinate Configuration North 2
const unsigned int mem_stream_switch_subordinate_config_north_2 = 0x0006006C;
// Stream Switch Subordinate Configuration North 3
const unsigned int mem_stream_switch_subordinate_config_north_3 = 0x00060070;
// Stream Switch Subordinate Configuration North Y
const unsigned int mem_stream_switch_subordinate_config_north_y = 0x00060074;
// Stream Switch Subordinate Configuration South_Control 1
const unsigned int mem_stream_switch_subordinate_config_south_control_1 = 0x00060078;
// Stream Switch Subordinate Configuration 32-bit Switch 1
const unsigned int mem_stream_switch_subordinate_config_32b_switch_1 = 0x0006007C;
// Stream Switch Subordinate Configuration DMA 6
const unsigned int mem_stream_switch_subordinate_dma_6_slot0 = 0x00060080;
// Stream Switch Subordinate Configuration DMA 6
const unsigned int mem_stream_switch_subordinate_dma_6_slot1 = 0x00060084;
// Stream Switch Subordinate Configuration DMA 6
const unsigned int mem_stream_switch_subordinate_dma_6_slot2 = 0x00060088;
// Stream Switch Subordinate Configuration DMA 6
const unsigned int mem_stream_switch_subordinate_dma_6_slot3 = 0x0006008C;
// Stream Switch Subordinate Configuration DMA 7
const unsigned int mem_stream_switch_subordinate_dma_7_slot0 = 0x00060090;
// Stream Switch Subordinate Configuration DMA 7
const unsigned int mem_stream_switch_subordinate_dma_7_slot1 = 0x00060094;
// Stream Switch Subordinate Configuration DMA 7
const unsigned int mem_stream_switch_subordinate_dma_7_slot2 = 0x00060098;
// Stream Switch Subordinate Configuration DMA 7
const unsigned int mem_stream_switch_subordinate_dma_7_slot3 = 0x0006009C;
// Stream Switch Subordinate Configuration DMA 8
const unsigned int mem_stream_switch_subordinate_dma_8_slot0 = 0x000600A0;
// Stream Switch Subordinate Configuration DMA 8
const unsigned int mem_stream_switch_subordinate_dma_8_slot1 = 0x000600A4;
// Stream Switch Subordinate Configuration DMA 8
const unsigned int mem_stream_switch_subordinate_dma_8_slot2 = 0x000600A8;
// Stream Switch Subordinate Configuration DMA 8
const unsigned int mem_stream_switch_subordinate_dma_8_slot3 = 0x000600AC;
// Stream Switch Subordinate Configuration DMA 9
const unsigned int mem_stream_switch_subordinate_dma_9_slot0 = 0x000600B0;
// Stream Switch Subordinate Configuration DMA 9
const unsigned int mem_stream_switch_subordinate_dma_9_slot1 = 0x000600B4;
// Stream Switch Subordinate Configuration DMA 9
const unsigned int mem_stream_switch_subordinate_dma_9_slot2 = 0x000600B8;
// Stream Switch Subordinate Configuration DMA 9
const unsigned int mem_stream_switch_subordinate_dma_9_slot3 = 0x000600BC;
// Stream Switch Subordinate Configuration DMA 10
const unsigned int mem_stream_switch_subordinate_dma_10_slot0 = 0x000600C0;
// Stream Switch Subordinate Configuration DMA 10
const unsigned int mem_stream_switch_subordinate_dma_10_slot1 = 0x000600C4;
// Stream Switch Subordinate Configuration DMA 10
const unsigned int mem_stream_switch_subordinate_dma_10_slot2 = 0x000600C8;
// Stream Switch Subordinate Configuration DMA 10
const unsigned int mem_stream_switch_subordinate_dma_10_slot3 = 0x000600CC;
// Stream Switch Subordinate Configuration DMA 11
const unsigned int mem_stream_switch_subordinate_dma_11_slot0 = 0x000600D0;
// Stream Switch Subordinate Configuration DMA 11
const unsigned int mem_stream_switch_subordinate_dma_11_slot1 = 0x000600D4;
// Stream Switch Subordinate Configuration DMA 11
const unsigned int mem_stream_switch_subordinate_dma_11_slot2 = 0x000600D8;
// Stream Switch Subordinate Configuration DMA 11
const unsigned int mem_stream_switch_subordinate_dma_11_slot3 = 0x000600DC;
// Stream Switch Subordinate Configuration FIFO 1
const unsigned int mem_stream_switch_subordinate_fifo_1_slot0 = 0x000600E0;
// Stream Switch Subordinate Configuration FIFO 1
const unsigned int mem_stream_switch_subordinate_fifo_1_slot1 = 0x000600E4;
// Stream Switch Subordinate Configuration FIFO 1
const unsigned int mem_stream_switch_subordinate_fifo_1_slot2 = 0x000600E8;
// Stream Switch Subordinate Configuration FIFO 1
const unsigned int mem_stream_switch_subordinate_fifo_1_slot3 = 0x000600EC;
// Stream Switch Subordinate Configuration South 2
const unsigned int mem_stream_switch_subordinate_south_2_slot0 = 0x000600F0;
// Stream Switch Subordinate Configuration South 2
const unsigned int mem_stream_switch_subordinate_south_2_slot1 = 0x000600F4;
// Stream Switch Subordinate Configuration South 2
const unsigned int mem_stream_switch_subordinate_south_2_slot2 = 0x000600F8;
// Stream Switch Subordinate Configuration South 2
const unsigned int mem_stream_switch_subordinate_south_2_slot3 = 0x000600FC;
// Stream Switch Subordinate Configuration South 3
const unsigned int mem_stream_switch_subordinate_south_3_slot0 = 0x00060100;
// Stream Switch Subordinate Configuration South 3
const unsigned int mem_stream_switch_subordinate_south_3_slot1 = 0x00060104;
// Stream Switch Subordinate Configuration South 3
const unsigned int mem_stream_switch_subordinate_south_3_slot2 = 0x00060108;
// Stream Switch Subordinate Configuration South 3
const unsigned int mem_stream_switch_subordinate_south_3_slot3 = 0x0006010C;
// Stream Switch Subordinate Configuration South Z
const unsigned int mem_stream_switch_subordinate_south_z_slot0 = 0x00060110;
// Stream Switch Subordinate Configuration South Z
const unsigned int mem_stream_switch_subordinate_south_z_slot1 = 0x00060114;
// Stream Switch Subordinate Configuration South Z
const unsigned int mem_stream_switch_subordinate_south_z_slot2 = 0x00060118;
// Stream Switch Subordinate Configuration South Z
const unsigned int mem_stream_switch_subordinate_south_z_slot3 = 0x0006011C;
// Stream Switch Subordinate Configuration South A
const unsigned int mem_stream_switch_subordinate_south_a_slot0 = 0x00060120;
// Stream Switch Subordinate Configuration South A
const unsigned int mem_stream_switch_subordinate_south_a_slot1 = 0x00060124;
// Stream Switch Subordinate Configuration South A
const unsigned int mem_stream_switch_subordinate_south_a_slot2 = 0x00060128;
// Stream Switch Subordinate Configuration South A
const unsigned int mem_stream_switch_subordinate_south_a_slot3 = 0x0006012C;
// Stream Switch Subordinate Configuration North 2
const unsigned int mem_stream_switch_subordinate_north_2_slot0 = 0x00060130;
// Stream Switch Subordinate Configuration North 2
const unsigned int mem_stream_switch_subordinate_north_2_slot1 = 0x00060134;
// Stream Switch Subordinate Configuration North 2
const unsigned int mem_stream_switch_subordinate_north_2_slot2 = 0x00060138;
// Stream Switch Subordinate Configuration North 2
const unsigned int mem_stream_switch_subordinate_north_2_slot3 = 0x0006013C;
// Stream Switch Subordinate Configuration North 3
const unsigned int mem_stream_switch_subordinate_north_3_slot0 = 0x00060140;
// Stream Switch Subordinate Configuration North 3
const unsigned int mem_stream_switch_subordinate_north_3_slot1 = 0x00060144;
// Stream Switch Subordinate Configuration North 3
const unsigned int mem_stream_switch_subordinate_north_3_slot2 = 0x00060148;
// Stream Switch Subordinate Configuration North 3
const unsigned int mem_stream_switch_subordinate_north_3_slot3 = 0x0006014C;
// Stream Switch Subordinate Configuration North Y
const unsigned int mem_stream_switch_subordinate_north_y_slot0 = 0x00060150;
// Stream Switch Subordinate Configuration North Y
const unsigned int mem_stream_switch_subordinate_north_y_slot1 = 0x00060154;
// Stream Switch Subordinate Configuration North Y
const unsigned int mem_stream_switch_subordinate_north_y_slot2 = 0x00060158;
// Stream Switch Subordinate Configuration North Y
const unsigned int mem_stream_switch_subordinate_north_y_slot3 = 0x0006015C;
// Stream Switch Subordinate Configuration South_Control 1
const unsigned int mem_stream_switch_subordinate_south_control_1_slot0 = 0x00060160;
// Stream Switch Subordinate Configuration South_Control 1
const unsigned int mem_stream_switch_subordinate_south_control_1_slot1 = 0x00060164;
// Stream Switch Subordinate Configuration South_Control 1
const unsigned int mem_stream_switch_subordinate_south_control_1_slot2 = 0x00060168;
// Stream Switch Subordinate Configuration South_Control 1
const unsigned int mem_stream_switch_subordinate_south_control_1_slot3 = 0x0006016C;
// Stream Switch Subordinate Configuration 32-bit Switch 1
const unsigned int mem_stream_switch_subordinate_32b_switch_1_slot0 = 0x00060170;
// Stream Switch Subordinate Configuration 32-bit Switch 1
const unsigned int mem_stream_switch_subordinate_32b_switch_1_slot1 = 0x00060174;
// Stream Switch Subordinate Configuration 32-bit Switch 1
const unsigned int mem_stream_switch_subordinate_32b_switch_1_slot2 = 0x00060178;
// Stream Switch Subordinate Configuration 32-bit Switch 1
const unsigned int mem_stream_switch_subordinate_32b_switch_1_slot3 = 0x0006017C;
// Stream Switch Deterministic Merge Arbiter:4 Subordinate:0,1
const unsigned int mem_stream_switch_deterministic_merge_arb4_subordinate0_1 = 0x00060180;
// Stream Switch Deterministic Merge Arbiter:4 Subordinate:2,3
const unsigned int mem_stream_switch_deterministic_merge_arb4_subordinate2_3 = 0x00060184;
// Stream Switch Deterministic Merge Arbiter:4 Control
const unsigned int mem_stream_switch_deterministic_merge_arb4_ctrl = 0x00060188;
// Stream Switch Deterministic Merge Arbiter:5 Subordinate:0,1
const unsigned int mem_stream_switch_deterministic_merge_arb5_subordinate0_1 = 0x0006018C;
// Stream Switch Deterministic Merge Arbiter:5 Subordinate:2,3
const unsigned int mem_stream_switch_deterministic_merge_arb5_subordinate2_3 = 0x00060190;
// Stream Switch Deterministic Merge Arbiter:5 Control
const unsigned int mem_stream_switch_deterministic_merge_arb5_ctrl = 0x00060194;
// 32-bit Stream Switch Manager Configuration South 1
const unsigned int mem_stream_switch_32b_manager_config_south_1 = 0x000601A0;
// 32-bit Stream Switch Manager Configuration North 1
const unsigned int mem_stream_switch_32b_manager_config_north_1 = 0x000601A8;
// 32-bit Stream Switch Manager Configuration 512-bit Switch 1
const unsigned int mem_stream_switch_32b_manager_config_512b_switch_1 = 0x000601B0;
// 32-bit Stream Switch Manager Configuration Tile Ctrl 1 (to be removed)
const unsigned int mem_stream_switch_32b_manager_config_tile_ctrl_1 = 0x000601B4;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 1
const unsigned int mem_stream_switch_32b_subordinate_config_tile_ctrl_1 = 0x000601C0;
// 32-bit Stream Switch Subordinate Configuration Trace 1
const unsigned int mem_stream_switch_32b_subordinate_config_trace_1 = 0x000601C4;
// 32-bit Stream Switch Subordinate Configuration South 1
const unsigned int mem_stream_switch_32b_subordinate_config_south_1 = 0x000601C8;
// 32-bit Stream Switch Subordinate Configuration North 1
const unsigned int mem_stream_switch_32b_subordinate_config_north_1 = 0x000601D0;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 1
const unsigned int mem_stream_switch_32b_subordinate_config_512b_switch_1 = 0x000601D8;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 1
const unsigned int mem_stream_switch_32b_subordinate_tile_ctrl_1_slot0 = 0x000601E0;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 1
const unsigned int mem_stream_switch_32b_subordinate_tile_ctrl_1_slot1 = 0x000601E4;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 1
const unsigned int mem_stream_switch_32b_subordinate_tile_ctrl_1_slot2 = 0x000601E8;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 1
const unsigned int mem_stream_switch_32b_subordinate_tile_ctrl_1_slot3 = 0x000601EC;
// 32-bit Stream Switch Subordinate Configuration Trace 1
const unsigned int mem_stream_switch_32b_subordinate_trace_1_slot0 = 0x000601F0;
// 32-bit Stream Switch Subordinate Configuration Trace 1
const unsigned int mem_stream_switch_32b_subordinate_trace_1_slot1 = 0x000601F4;
// 32-bit Stream Switch Subordinate Configuration Trace 1
const unsigned int mem_stream_switch_32b_subordinate_trace_1_slot2 = 0x000601F8;
// 32-bit Stream Switch Subordinate Configuration Trace 1
const unsigned int mem_stream_switch_32b_subordinate_trace_1_slot3 = 0x000601FC;
// 32-bit Stream Switch Subordinate Configuration South 1
const unsigned int mem_stream_switch_32b_subordinate_south_1_slot0 = 0x00060200;
// 32-bit Stream Switch Subordinate Configuration South 1
const unsigned int mem_stream_switch_32b_subordinate_south_1_slot1 = 0x00060204;
// 32-bit Stream Switch Subordinate Configuration South 1
const unsigned int mem_stream_switch_32b_subordinate_south_1_slot2 = 0x00060208;
// 32-bit Stream Switch Subordinate Configuration South 1
const unsigned int mem_stream_switch_32b_subordinate_south_1_slot3 = 0x0006020C;
// 32-bit Stream Switch Subordinate Configuration North 1
const unsigned int mem_stream_switch_32b_subordinate_north_1_slot0 = 0x00060220;
// 32-bit Stream Switch Subordinate Configuration North 1
const unsigned int mem_stream_switch_32b_subordinate_north_1_slot1 = 0x00060224;
// 32-bit Stream Switch Subordinate Configuration North 1
const unsigned int mem_stream_switch_32b_subordinate_north_1_slot2 = 0x00060228;
// 32-bit Stream Switch Subordinate Configuration North 1
const unsigned int mem_stream_switch_32b_subordinate_north_1_slot3 = 0x0006022C;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 1
const unsigned int mem_stream_switch_32b_subordinate_512b_switch_1_slot0 = 0x00060240;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 1
const unsigned int mem_stream_switch_32b_subordinate_512b_switch_1_slot1 = 0x00060244;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 1
const unsigned int mem_stream_switch_32b_subordinate_512b_switch_1_slot2 = 0x00060248;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 1
const unsigned int mem_stream_switch_32b_subordinate_512b_switch_1_slot3 = 0x0006024C;
// Select Stream Switch Ports for event generation in switch B
const unsigned int mem_stream_switch_event_port_selection_b_0 = 0x00060250;
// Select Stream Switch Ports for event generation in switch B
const unsigned int mem_stream_switch_event_port_selection_b_1 = 0x00060254;
// Status of control packet handling for application B
const unsigned int mem_tile_control_packet_handler_status_b = 0x00060260;
// Inhibits ECC check bits update to memory on writes (privileged)
const unsigned int mem_checkbit_error_generation = 0x000E0000;
// ECC Scrubbing Period (privileged)
const unsigned int mem_ecc_scrubbing_period = 0x000E0008;
// ECC Failing Address (privileged)
const unsigned int mem_ecc_failing_address = 0x000E000C;
// Status bits for Parity errors on stream switch ports (error on any 32-bit word) (privileged)
const unsigned int mem_stream_switch_parity_status = 0x000E0010;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int mem_stream_switch_parity_injection_0 = 0x000E0014;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int mem_stream_switch_parity_injection_1 = 0x000E0018;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int mem_stream_switch_parity_injection_2 = 0x000E001C;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int mem_stream_switch_parity_injection_3 = 0x000E0020;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int mem_stream_switch_parity_injection_4 = 0x000E0024;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int mem_stream_switch_parity_injection_5 = 0x000E0028;
// Injection of Parity errors on 32-bit stream switch ports (privileged)
const unsigned int mem_stream_switch_32b_parity_injection = 0x000E002C;
// Trigger for CSSD (privileged)
const unsigned int mem_cssd_trigger = 0x000E0050;
// Control memory interleaving (privileged)
const unsigned int mem_memory_interleaving = 0x000E0060;
// Control for memory zeroization for application A (privileged)
const unsigned int mem_memory_zeroization_a = 0x000E0064;
// Control for memory zeroization for application B (privileged)
const unsigned int mem_memory_zeroization_b = 0x000E0068;
// Control clock gating of modules (privileged)
const unsigned int mem_module_clock_control = 0x000E0070;
// Software override of medium-grained clock gating (privileged)
const unsigned int mem_medium_grained_clock_gating_control = 0x000E0074;
// Tile control register (Isolation) (privileged)
const unsigned int mem_tile_control = 0x000E0080;
// Single/two-application mode configuration (privileged)
const unsigned int mem_dual_app_mode = 0x000E0090;
// L2 capacity splitting point (privileged)
const unsigned int mem_l2_split = 0x000E0094;
// Spare register (privileged)
const unsigned int mem_spare_reg_privileged = 0x000E00A0;
// DataMemory of 16 banks, 512-bit wide, 4MiB
const unsigned int mem_datamemory = 0x00100000;

// Register definitions for SHIM
// ###################################
// Step size between lock registers
const unsigned int shim_lock_step_size = 0x10;
// Step size between DMA BD register groups
const unsigned int shim_dma_bd_step_size = 0x20;
// Step size between DMA S2MM register groups
const unsigned int shim_dma_s2mm_step_size = 0x8;
// Value of lock 0
const unsigned int shim_lock0_value = 0x00010000;
// Value of lock 1
const unsigned int shim_lock1_value = 0x00010010;
// Value of lock 2
const unsigned int shim_lock2_value = 0x00010020;
// Value of lock 3
const unsigned int shim_lock3_value = 0x00010030;
// Value of lock 4
const unsigned int shim_lock4_value = 0x00010040;
// Value of lock 5
const unsigned int shim_lock5_value = 0x00010050;
// Value of lock 6
const unsigned int shim_lock6_value = 0x00010060;
// Value of lock 7
const unsigned int shim_lock7_value = 0x00010070;
// Value of lock 8
const unsigned int shim_lock8_value = 0x00010080;
// Value of lock 9
const unsigned int shim_lock9_value = 0x00010090;
// Value of lock 10
const unsigned int shim_lock10_value = 0x000100A0;
// Value of lock 11
const unsigned int shim_lock11_value = 0x000100B0;
// Value of lock 12
const unsigned int shim_lock12_value = 0x000100C0;
// Value of lock 13
const unsigned int shim_lock13_value = 0x000100D0;
// Value of lock 14
const unsigned int shim_lock14_value = 0x000100E0;
// Value of lock 15
const unsigned int shim_lock15_value = 0x000100F0;
// Select lock for lock event generation 0 for application A
const unsigned int shim_locks_event_selection_a_0 = 0x00010100;
// Select lock for lock event generation 1 for application A
const unsigned int shim_locks_event_selection_a_1 = 0x00010104;
// Select lock for lock event generation 2 for application A
const unsigned int shim_locks_event_selection_a_2 = 0x00010108;
// Select lock for lock event generation 3 for application A
const unsigned int shim_locks_event_selection_a_3 = 0x0001010C;
// Select lock for lock event generation 4 for application A
const unsigned int shim_locks_event_selection_a_4 = 0x00010110;
// Select lock for lock event generation 5 for application A
const unsigned int shim_locks_event_selection_a_5 = 0x00010114;
// Status bits for lock 0-15 overflow, write to clear
const unsigned int shim_locks_overflow_0 = 0x00010120;
// Status bits for lock 0-15 underflow, write to clear
const unsigned int shim_locks_underflow_0 = 0x00010124;
// Lock Request for locks 0-15, encoded via address bits: bits 3:0 of Lock_Id [13:10], Acq/nRel (Acq=1, Rel=0) (9), Change_Value [8:2] (16kB address space)
const unsigned int shim_lock_request_a = 0x00014000;
// DMA BD0 0
const unsigned int shim_dma_bd0_0 = 0x00018000;
// DMA BD0 1
const unsigned int shim_dma_bd0_1 = 0x00018004;
// DMA BD0 2
const unsigned int shim_dma_bd0_2 = 0x00018008;
// DMA BD0 3
const unsigned int shim_dma_bd0_3 = 0x0001800C;
// DMA BD0 4
const unsigned int shim_dma_bd0_4 = 0x00018010;
// DMA BD0 5
const unsigned int shim_dma_bd0_5 = 0x00018014;
// DMA BD0 6
const unsigned int shim_dma_bd0_6 = 0x00018018;
// DMA BD0 7
const unsigned int shim_dma_bd0_7 = 0x0001801C;
// DMA BD0 8
const unsigned int shim_dma_bd0_8 = 0x00018020;
// DMA BD1 0
const unsigned int shim_dma_bd1_0 = 0x00018030;
// DMA BD1 1
const unsigned int shim_dma_bd1_1 = 0x00018034;
// DMA BD1 2
const unsigned int shim_dma_bd1_2 = 0x00018038;
// DMA BD1 3
const unsigned int shim_dma_bd1_3 = 0x0001803C;
// DMA BD1 4
const unsigned int shim_dma_bd1_4 = 0x00018040;
// DMA BD1 5
const unsigned int shim_dma_bd1_5 = 0x00018044;
// DMA BD1 6
const unsigned int shim_dma_bd1_6 = 0x00018048;
// DMA BD1 7
const unsigned int shim_dma_bd1_7 = 0x0001804C;
// DMA BD1 8
const unsigned int shim_dma_bd1_8 = 0x00018050;
// DMA BD2 0
const unsigned int shim_dma_bd2_0 = 0x00018060;
// DMA BD2 1
const unsigned int shim_dma_bd2_1 = 0x00018064;
// DMA BD2 2
const unsigned int shim_dma_bd2_2 = 0x00018068;
// DMA BD2 3
const unsigned int shim_dma_bd2_3 = 0x0001806C;
// DMA BD2 4
const unsigned int shim_dma_bd2_4 = 0x00018070;
// DMA BD2 5
const unsigned int shim_dma_bd2_5 = 0x00018074;
// DMA BD2 6
const unsigned int shim_dma_bd2_6 = 0x00018078;
// DMA BD2 7
const unsigned int shim_dma_bd2_7 = 0x0001807C;
// DMA BD2 8
const unsigned int shim_dma_bd2_8 = 0x00018080;
// DMA BD3 0
const unsigned int shim_dma_bd3_0 = 0x00018090;
// DMA BD3 1
const unsigned int shim_dma_bd3_1 = 0x00018094;
// DMA BD3 2
const unsigned int shim_dma_bd3_2 = 0x00018098;
// DMA BD3 3
const unsigned int shim_dma_bd3_3 = 0x0001809C;
// DMA BD3 4
const unsigned int shim_dma_bd3_4 = 0x000180A0;
// DMA BD3 5
const unsigned int shim_dma_bd3_5 = 0x000180A4;
// DMA BD3 6
const unsigned int shim_dma_bd3_6 = 0x000180A8;
// DMA BD3 7
const unsigned int shim_dma_bd3_7 = 0x000180AC;
// DMA BD3 8
const unsigned int shim_dma_bd3_8 = 0x000180B0;
// DMA BD4 0
const unsigned int shim_dma_bd4_0 = 0x000180C0;
// DMA BD4 1
const unsigned int shim_dma_bd4_1 = 0x000180C4;
// DMA BD4 2
const unsigned int shim_dma_bd4_2 = 0x000180C8;
// DMA BD4 3
const unsigned int shim_dma_bd4_3 = 0x000180CC;
// DMA BD4 4
const unsigned int shim_dma_bd4_4 = 0x000180D0;
// DMA BD4 5
const unsigned int shim_dma_bd4_5 = 0x000180D4;
// DMA BD4 6
const unsigned int shim_dma_bd4_6 = 0x000180D8;
// DMA BD4 7
const unsigned int shim_dma_bd4_7 = 0x000180DC;
// DMA BD4 8
const unsigned int shim_dma_bd4_8 = 0x000180E0;
// DMA BD5 0
const unsigned int shim_dma_bd5_0 = 0x000180F0;
// DMA BD5 1
const unsigned int shim_dma_bd5_1 = 0x000180F4;
// DMA BD5 2
const unsigned int shim_dma_bd5_2 = 0x000180F8;
// DMA BD5 3
const unsigned int shim_dma_bd5_3 = 0x000180FC;
// DMA BD5 4
const unsigned int shim_dma_bd5_4 = 0x00018100;
// DMA BD5 5
const unsigned int shim_dma_bd5_5 = 0x00018104;
// DMA BD5 6
const unsigned int shim_dma_bd5_6 = 0x00018108;
// DMA BD5 7
const unsigned int shim_dma_bd5_7 = 0x0001810C;
// DMA BD5 8
const unsigned int shim_dma_bd5_8 = 0x00018110;
// DMA BD6 0
const unsigned int shim_dma_bd6_0 = 0x00018120;
// DMA BD6 1
const unsigned int shim_dma_bd6_1 = 0x00018124;
// DMA BD6 2
const unsigned int shim_dma_bd6_2 = 0x00018128;
// DMA BD6 3
const unsigned int shim_dma_bd6_3 = 0x0001812C;
// DMA BD6 4
const unsigned int shim_dma_bd6_4 = 0x00018130;
// DMA BD6 5
const unsigned int shim_dma_bd6_5 = 0x00018134;
// DMA BD6 6
const unsigned int shim_dma_bd6_6 = 0x00018138;
// DMA BD6 7
const unsigned int shim_dma_bd6_7 = 0x0001813C;
// DMA BD6 8
const unsigned int shim_dma_bd6_8 = 0x00018140;
// DMA BD7 0
const unsigned int shim_dma_bd7_0 = 0x00018150;
// DMA BD7 1
const unsigned int shim_dma_bd7_1 = 0x00018154;
// DMA BD7 2
const unsigned int shim_dma_bd7_2 = 0x00018158;
// DMA BD7 3
const unsigned int shim_dma_bd7_3 = 0x0001815C;
// DMA BD7 4
const unsigned int shim_dma_bd7_4 = 0x00018160;
// DMA BD7 5
const unsigned int shim_dma_bd7_5 = 0x00018164;
// DMA BD7 6
const unsigned int shim_dma_bd7_6 = 0x00018168;
// DMA BD7 7
const unsigned int shim_dma_bd7_7 = 0x0001816C;
// DMA BD7 8
const unsigned int shim_dma_bd7_8 = 0x00018170;
// DMA BD8 0
const unsigned int shim_dma_bd8_0 = 0x00018180;
// DMA BD8 1
const unsigned int shim_dma_bd8_1 = 0x00018184;
// DMA BD8 2
const unsigned int shim_dma_bd8_2 = 0x00018188;
// DMA BD8 3
const unsigned int shim_dma_bd8_3 = 0x0001818C;
// DMA BD8 4
const unsigned int shim_dma_bd8_4 = 0x00018190;
// DMA BD8 5
const unsigned int shim_dma_bd8_5 = 0x00018194;
// DMA BD8 6
const unsigned int shim_dma_bd8_6 = 0x00018198;
// DMA BD8 7
const unsigned int shim_dma_bd8_7 = 0x0001819C;
// DMA BD8 8
const unsigned int shim_dma_bd8_8 = 0x000181A0;
// DMA BD9 0
const unsigned int shim_dma_bd9_0 = 0x000181B0;
// DMA BD9 1
const unsigned int shim_dma_bd9_1 = 0x000181B4;
// DMA BD9 2
const unsigned int shim_dma_bd9_2 = 0x000181B8;
// DMA BD9 3
const unsigned int shim_dma_bd9_3 = 0x000181BC;
// DMA BD9 4
const unsigned int shim_dma_bd9_4 = 0x000181C0;
// DMA BD9 5
const unsigned int shim_dma_bd9_5 = 0x000181C4;
// DMA BD9 6
const unsigned int shim_dma_bd9_6 = 0x000181C8;
// DMA BD9 7
const unsigned int shim_dma_bd9_7 = 0x000181CC;
// DMA BD9 8
const unsigned int shim_dma_bd9_8 = 0x000181D0;
// DMA BD10 0
const unsigned int shim_dma_bd10_0 = 0x000181E0;
// DMA BD10 1
const unsigned int shim_dma_bd10_1 = 0x000181E4;
// DMA BD10 2
const unsigned int shim_dma_bd10_2 = 0x000181E8;
// DMA BD10 3
const unsigned int shim_dma_bd10_3 = 0x000181EC;
// DMA BD10 4
const unsigned int shim_dma_bd10_4 = 0x000181F0;
// DMA BD10 5
const unsigned int shim_dma_bd10_5 = 0x000181F4;
// DMA BD10 6
const unsigned int shim_dma_bd10_6 = 0x000181F8;
// DMA BD10 7
const unsigned int shim_dma_bd10_7 = 0x000181FC;
// DMA BD10 8
const unsigned int shim_dma_bd10_8 = 0x00018200;
// DMA BD11 0
const unsigned int shim_dma_bd11_0 = 0x00018210;
// DMA BD11 1
const unsigned int shim_dma_bd11_1 = 0x00018214;
// DMA BD11 2
const unsigned int shim_dma_bd11_2 = 0x00018218;
// DMA BD11 3
const unsigned int shim_dma_bd11_3 = 0x0001821C;
// DMA BD11 4
const unsigned int shim_dma_bd11_4 = 0x00018220;
// DMA BD11 5
const unsigned int shim_dma_bd11_5 = 0x00018224;
// DMA BD11 6
const unsigned int shim_dma_bd11_6 = 0x00018228;
// DMA BD11 7
const unsigned int shim_dma_bd11_7 = 0x0001822C;
// DMA BD11 8
const unsigned int shim_dma_bd11_8 = 0x00018230;
// DMA BD12 0
const unsigned int shim_dma_bd12_0 = 0x00018240;
// DMA BD12 1
const unsigned int shim_dma_bd12_1 = 0x00018244;
// DMA BD12 2
const unsigned int shim_dma_bd12_2 = 0x00018248;
// DMA BD12 3
const unsigned int shim_dma_bd12_3 = 0x0001824C;
// DMA BD12 4
const unsigned int shim_dma_bd12_4 = 0x00018250;
// DMA BD12 5
const unsigned int shim_dma_bd12_5 = 0x00018254;
// DMA BD12 6
const unsigned int shim_dma_bd12_6 = 0x00018258;
// DMA BD12 7
const unsigned int shim_dma_bd12_7 = 0x0001825C;
// DMA BD12 8
const unsigned int shim_dma_bd12_8 = 0x00018260;
// DMA BD13 0
const unsigned int shim_dma_bd13_0 = 0x00018270;
// DMA BD13 1
const unsigned int shim_dma_bd13_1 = 0x00018274;
// DMA BD13 2
const unsigned int shim_dma_bd13_2 = 0x00018278;
// DMA BD13 3
const unsigned int shim_dma_bd13_3 = 0x0001827C;
// DMA BD13 4
const unsigned int shim_dma_bd13_4 = 0x00018280;
// DMA BD13 5
const unsigned int shim_dma_bd13_5 = 0x00018284;
// DMA BD13 6
const unsigned int shim_dma_bd13_6 = 0x00018288;
// DMA BD13 7
const unsigned int shim_dma_bd13_7 = 0x0001828C;
// DMA BD13 8
const unsigned int shim_dma_bd13_8 = 0x00018290;
// DMA BD14 0
const unsigned int shim_dma_bd14_0 = 0x000182A0;
// DMA BD14 1
const unsigned int shim_dma_bd14_1 = 0x000182A4;
// DMA BD14 2
const unsigned int shim_dma_bd14_2 = 0x000182A8;
// DMA BD14 3
const unsigned int shim_dma_bd14_3 = 0x000182AC;
// DMA BD14 4
const unsigned int shim_dma_bd14_4 = 0x000182B0;
// DMA BD14 5
const unsigned int shim_dma_bd14_5 = 0x000182B4;
// DMA BD14 6
const unsigned int shim_dma_bd14_6 = 0x000182B8;
// DMA BD14 7
const unsigned int shim_dma_bd14_7 = 0x000182BC;
// DMA BD14 8
const unsigned int shim_dma_bd14_8 = 0x000182C0;
// DMA BD15 0
const unsigned int shim_dma_bd15_0 = 0x000182D0;
// DMA BD15 1
const unsigned int shim_dma_bd15_1 = 0x000182D4;
// DMA BD15 2
const unsigned int shim_dma_bd15_2 = 0x000182D8;
// DMA BD15 3
const unsigned int shim_dma_bd15_3 = 0x000182DC;
// DMA BD15 4
const unsigned int shim_dma_bd15_4 = 0x000182E0;
// DMA BD15 5
const unsigned int shim_dma_bd15_5 = 0x000182E4;
// DMA BD15 6
const unsigned int shim_dma_bd15_6 = 0x000182E8;
// DMA BD15 7
const unsigned int shim_dma_bd15_7 = 0x000182EC;
// DMA BD15 8
const unsigned int shim_dma_bd15_8 = 0x000182F0;
// DMA Control MM2S 0 BD0 0
const unsigned int shim_dma_control_mm2s_0_bd0_0 = 0x00018300;
// DMA Control MM2S 0 BD0 1
const unsigned int shim_dma_control_mm2s_0_bd0_1 = 0x00018304;
// DMA Control MM2S 0 BD0 2
const unsigned int shim_dma_control_mm2s_0_bd0_2 = 0x00018308;
// DMA Control MM2S 0 BD0 3
const unsigned int shim_dma_control_mm2s_0_bd0_3 = 0x0001830C;
// DMA Control MM2S 0 BD0 5
const unsigned int shim_dma_control_mm2s_0_bd0_5 = 0x00018314;
// DMA Control MM2S 0 BD0 6
const unsigned int shim_dma_control_mm2s_0_bd0_6 = 0x00018318;
// DMA Control MM2S 0 BD0 7
const unsigned int shim_dma_control_mm2s_0_bd0_7 = 0x0001831C;
// DMA Control MM2S 0 BD0 8
const unsigned int shim_dma_control_mm2s_0_bd0_8 = 0x00018320;
// DMA Control MM2S 0 BD1 0
const unsigned int shim_dma_control_mm2s_0_bd1_0 = 0x00018330;
// DMA Control MM2S 0 BD1 1
const unsigned int shim_dma_control_mm2s_0_bd1_1 = 0x00018334;
// DMA Control MM2S 0 BD1 2
const unsigned int shim_dma_control_mm2s_0_bd1_2 = 0x00018338;
// DMA Control MM2S 0 BD1 3
const unsigned int shim_dma_control_mm2s_0_bd1_3 = 0x0001833C;
// DMA Control MM2S 0 BD1 5
const unsigned int shim_dma_control_mm2s_0_bd1_5 = 0x00018344;
// DMA Control MM2S 0 BD1 6
const unsigned int shim_dma_control_mm2s_0_bd1_6 = 0x00018348;
// DMA Control MM2S 0 BD1 7
const unsigned int shim_dma_control_mm2s_0_bd1_7 = 0x0001834C;
// DMA Control MM2S 0 BD1 8
const unsigned int shim_dma_control_mm2s_0_bd1_8 = 0x00018350;
// DMA Control MM2S 0 BD2 0
const unsigned int shim_dma_control_mm2s_0_bd2_0 = 0x00018360;
// DMA Control MM2S 0 BD2 1
const unsigned int shim_dma_control_mm2s_0_bd2_1 = 0x00018364;
// DMA Control MM2S 0 BD2 2
const unsigned int shim_dma_control_mm2s_0_bd2_2 = 0x00018368;
// DMA Control MM2S 0 BD2 3
const unsigned int shim_dma_control_mm2s_0_bd2_3 = 0x0001836C;
// DMA Control MM2S 0 BD2 5
const unsigned int shim_dma_control_mm2s_0_bd2_5 = 0x00018374;
// DMA Control MM2S 0 BD2 6
const unsigned int shim_dma_control_mm2s_0_bd2_6 = 0x00018378;
// DMA Control MM2S 0 BD2 7
const unsigned int shim_dma_control_mm2s_0_bd2_7 = 0x0001837C;
// DMA Control MM2S 0 BD2 8
const unsigned int shim_dma_control_mm2s_0_bd2_8 = 0x00018380;
// DMA Control MM2S 0 BD3 0
const unsigned int shim_dma_control_mm2s_0_bd3_0 = 0x00018390;
// DMA Control MM2S 0 BD3 1
const unsigned int shim_dma_control_mm2s_0_bd3_1 = 0x00018394;
// DMA Control MM2S 0 BD3 2
const unsigned int shim_dma_control_mm2s_0_bd3_2 = 0x00018398;
// DMA Control MM2S 0 BD3 3
const unsigned int shim_dma_control_mm2s_0_bd3_3 = 0x0001839C;
// DMA Control MM2S 0 BD3 5
const unsigned int shim_dma_control_mm2s_0_bd3_5 = 0x000183A4;
// DMA Control MM2S 0 BD3 6
const unsigned int shim_dma_control_mm2s_0_bd3_6 = 0x000183A8;
// DMA Control MM2S 0 BD3 7
const unsigned int shim_dma_control_mm2s_0_bd3_7 = 0x000183AC;
// DMA Control MM2S 0 BD3 8
const unsigned int shim_dma_control_mm2s_0_bd3_8 = 0x000183B0;
// DMA Control MM2S 0 BD4 0
const unsigned int shim_dma_control_mm2s_0_bd4_0 = 0x000183C0;
// DMA Control MM2S 0 BD4 1
const unsigned int shim_dma_control_mm2s_0_bd4_1 = 0x000183C4;
// DMA Control MM2S 0 BD4 2
const unsigned int shim_dma_control_mm2s_0_bd4_2 = 0x000183C8;
// DMA Control MM2S 0 BD4 3
const unsigned int shim_dma_control_mm2s_0_bd4_3 = 0x000183CC;
// DMA Control MM2S 0 BD4 5
const unsigned int shim_dma_control_mm2s_0_bd4_5 = 0x000183D4;
// DMA Control MM2S 0 BD4 6
const unsigned int shim_dma_control_mm2s_0_bd4_6 = 0x000183D8;
// DMA Control MM2S 0 BD4 7
const unsigned int shim_dma_control_mm2s_0_bd4_7 = 0x000183DC;
// DMA Control MM2S 0 BD4 8
const unsigned int shim_dma_control_mm2s_0_bd4_8 = 0x000183E0;
// DMA Control MM2S 0 BD5 0
const unsigned int shim_dma_control_mm2s_0_bd5_0 = 0x000183F0;
// DMA Control MM2S 0 BD5 1
const unsigned int shim_dma_control_mm2s_0_bd5_1 = 0x000183F4;
// DMA Control MM2S 0 BD5 2
const unsigned int shim_dma_control_mm2s_0_bd5_2 = 0x000183F8;
// DMA Control MM2S 0 BD5 3
const unsigned int shim_dma_control_mm2s_0_bd5_3 = 0x000183FC;
// DMA Control MM2S 0 BD5 5
const unsigned int shim_dma_control_mm2s_0_bd5_5 = 0x00018404;
// DMA Control MM2S 0 BD5 6
const unsigned int shim_dma_control_mm2s_0_bd5_6 = 0x00018408;
// DMA Control MM2S 0 BD5 7
const unsigned int shim_dma_control_mm2s_0_bd5_7 = 0x0001840C;
// DMA Control MM2S 0 BD5 8
const unsigned int shim_dma_control_mm2s_0_bd5_8 = 0x00018410;
// DMA Control MM2S 0 BD6 0
const unsigned int shim_dma_control_mm2s_0_bd6_0 = 0x00018420;
// DMA Control MM2S 0 BD6 1
const unsigned int shim_dma_control_mm2s_0_bd6_1 = 0x00018424;
// DMA Control MM2S 0 BD6 2
const unsigned int shim_dma_control_mm2s_0_bd6_2 = 0x00018428;
// DMA Control MM2S 0 BD6 3
const unsigned int shim_dma_control_mm2s_0_bd6_3 = 0x0001842C;
// DMA Control MM2S 0 BD6 5
const unsigned int shim_dma_control_mm2s_0_bd6_5 = 0x00018434;
// DMA Control MM2S 0 BD6 6
const unsigned int shim_dma_control_mm2s_0_bd6_6 = 0x00018438;
// DMA Control MM2S 0 BD6 7
const unsigned int shim_dma_control_mm2s_0_bd6_7 = 0x0001843C;
// DMA Control MM2S 0 BD6 8
const unsigned int shim_dma_control_mm2s_0_bd6_8 = 0x00018440;
// DMA Control MM2S 0 BD7 0
const unsigned int shim_dma_control_mm2s_0_bd7_0 = 0x00018450;
// DMA Control MM2S 0 BD7 1
const unsigned int shim_dma_control_mm2s_0_bd7_1 = 0x00018454;
// DMA Control MM2S 0 BD7 2
const unsigned int shim_dma_control_mm2s_0_bd7_2 = 0x00018458;
// DMA Control MM2S 0 BD7 3
const unsigned int shim_dma_control_mm2s_0_bd7_3 = 0x0001845C;
// DMA Control MM2S 0 BD7 5
const unsigned int shim_dma_control_mm2s_0_bd7_5 = 0x00018464;
// DMA Control MM2S 0 BD7 6
const unsigned int shim_dma_control_mm2s_0_bd7_6 = 0x00018468;
// DMA Control MM2S 0 BD7 7
const unsigned int shim_dma_control_mm2s_0_bd7_7 = 0x0001846C;
// DMA Control MM2S 0 BD7 8
const unsigned int shim_dma_control_mm2s_0_bd7_8 = 0x00018470;
// DMA Control Register S2MM Ch0
const unsigned int shim_dma_s2mm_0_ctrl = 0x00018480;
// DMA Task Queue Insertion S2MM Ch0 (16-deep)
const unsigned int shim_dma_s2mm_0_task_queue = 0x00018484;
// DMA Control Register MM2S Ch0
const unsigned int shim_dma_mm2s_0_ctrl = 0x00018490;
// DMA Task Queue Insertion MM2S Ch0 (16-deep)
const unsigned int shim_dma_mm2s_0_task_queue = 0x00018494;
// DMA Control Register MM2S Ch1
const unsigned int shim_dma_mm2s_1_ctrl = 0x00018498;
// DMA Task Queue Insertion MM2S Ch1 (16-deep)
const unsigned int shim_dma_mm2s_1_task_queue = 0x0001849C;
// DMA Control Register Control MM2S Ch0
const unsigned int shim_dma_control_mm2s_0_ctrl = 0x000184A0;
// DMA Task Queue Insertion Control MM2S Ch0 (8-deep)
const unsigned int shim_dma_control_mm2s_0_task_queue = 0x000184A4;
// DMA S2MM Status Register Ch0
const unsigned int shim_dma_s2mm_status_0 = 0x000184B0;
// DMA MM2S Status Register Ch0
const unsigned int shim_dma_mm2s_status_0 = 0x000184C0;
// DMA MM2S Status Register Ch1
const unsigned int shim_dma_mm2s_status_1 = 0x000184C4;
// DMA Control MM2S Status Register Ch0
const unsigned int shim_dma_control_mm2s_status_0 = 0x000184D0;
// DMA S2MM Current Write Count Ch0
const unsigned int shim_dma_s2mm_current_write_count_0 = 0x000184E0;
// DMA S2MM FoT Count FIFO Pop Ch0
const unsigned int shim_dma_s2mm_fot_count_fifo_pop_0 = 0x000184F0;
// Selection of which MM2S channels will generate events in switch A
const unsigned int shim_dma_event_channel_selection_a = 0x00018500;
// Spare register for application A
const unsigned int shim_spare_reg_a = 0x0001C000;
// Interrupt controller mask (IMR) for application A
const unsigned int shim_interrupt_controller_mask_a = 0x0001C010;
// Interrupt controller enable interrupt (IER) for application A
const unsigned int shim_interrupt_controller_enable_a = 0x0001C014;
// Interrupt controller disable interrupt (IDR) for application A
const unsigned int shim_interrupt_controller_disable_a = 0x0001C018;
// Interrupt controller status register (ISR) for application A
const unsigned int shim_interrupt_controller_status_a = 0x0001C01C;
// Value of lock 16
const unsigned int shim_lock16_value = 0x00050000;
// Value of lock 17
const unsigned int shim_lock17_value = 0x00050010;
// Value of lock 18
const unsigned int shim_lock18_value = 0x00050020;
// Value of lock 19
const unsigned int shim_lock19_value = 0x00050030;
// Value of lock 20
const unsigned int shim_lock20_value = 0x00050040;
// Value of lock 21
const unsigned int shim_lock21_value = 0x00050050;
// Value of lock 22
const unsigned int shim_lock22_value = 0x00050060;
// Value of lock 23
const unsigned int shim_lock23_value = 0x00050070;
// Value of lock 24
const unsigned int shim_lock24_value = 0x00050080;
// Value of lock 25
const unsigned int shim_lock25_value = 0x00050090;
// Value of lock 26
const unsigned int shim_lock26_value = 0x000500A0;
// Value of lock 27
const unsigned int shim_lock27_value = 0x000500B0;
// Value of lock 28
const unsigned int shim_lock28_value = 0x000500C0;
// Value of lock 29
const unsigned int shim_lock29_value = 0x000500D0;
// Value of lock 30
const unsigned int shim_lock30_value = 0x000500E0;
// Value of lock 31
const unsigned int shim_lock31_value = 0x000500F0;
// Select lock for lock event generation 0 for application B
const unsigned int shim_locks_event_selection_b_0 = 0x00050100;
// Select lock for lock event generation 1 for application B
const unsigned int shim_locks_event_selection_b_1 = 0x00050104;
// Select lock for lock event generation 2 for application B
const unsigned int shim_locks_event_selection_b_2 = 0x00050108;
// Select lock for lock event generation 3 for application B
const unsigned int shim_locks_event_selection_b_3 = 0x0005010C;
// Select lock for lock event generation 4 for application B
const unsigned int shim_locks_event_selection_b_4 = 0x00050110;
// Select lock for lock event generation 5 for application B
const unsigned int shim_locks_event_selection_b_5 = 0x00050114;
// Status bits for lock 16-31 overflow, write to clear
const unsigned int shim_locks_overflow_1 = 0x00050120;
// Status bits for lock 16-31 underflow, write to clear
const unsigned int shim_locks_underflow_1 = 0x00050124;
// Lock Request for locks 16-31, encoded via address bits: bits 3:0 of Lock_Id [13:10], Acq/nRel (Acq=1, Rel=0) (9), Change_Value [8:2] (16kB address space)
const unsigned int shim_lock_request_b = 0x00054000;
// DMA BD16 0
const unsigned int shim_dma_bd16_0 = 0x00058000;
// DMA BD16 1
const unsigned int shim_dma_bd16_1 = 0x00058004;
// DMA BD16 2
const unsigned int shim_dma_bd16_2 = 0x00058008;
// DMA BD16 3
const unsigned int shim_dma_bd16_3 = 0x0005800C;
// DMA BD16 4
const unsigned int shim_dma_bd16_4 = 0x00058010;
// DMA BD16 5
const unsigned int shim_dma_bd16_5 = 0x00058014;
// DMA BD16 6
const unsigned int shim_dma_bd16_6 = 0x00058018;
// DMA BD16 7
const unsigned int shim_dma_bd16_7 = 0x0005801C;
// DMA BD16 8
const unsigned int shim_dma_bd16_8 = 0x00058020;
// DMA BD17 0
const unsigned int shim_dma_bd17_0 = 0x00058030;
// DMA BD17 1
const unsigned int shim_dma_bd17_1 = 0x00058034;
// DMA BD17 2
const unsigned int shim_dma_bd17_2 = 0x00058038;
// DMA BD17 3
const unsigned int shim_dma_bd17_3 = 0x0005803C;
// DMA BD17 4
const unsigned int shim_dma_bd17_4 = 0x00058040;
// DMA BD17 5
const unsigned int shim_dma_bd17_5 = 0x00058044;
// DMA BD17 6
const unsigned int shim_dma_bd17_6 = 0x00058048;
// DMA BD17 7
const unsigned int shim_dma_bd17_7 = 0x0005804C;
// DMA BD17 8
const unsigned int shim_dma_bd17_8 = 0x00058050;
// DMA BD18 0
const unsigned int shim_dma_bd18_0 = 0x00058060;
// DMA BD18 1
const unsigned int shim_dma_bd18_1 = 0x00058064;
// DMA BD18 2
const unsigned int shim_dma_bd18_2 = 0x00058068;
// DMA BD18 3
const unsigned int shim_dma_bd18_3 = 0x0005806C;
// DMA BD18 4
const unsigned int shim_dma_bd18_4 = 0x00058070;
// DMA BD18 5
const unsigned int shim_dma_bd18_5 = 0x00058074;
// DMA BD18 6
const unsigned int shim_dma_bd18_6 = 0x00058078;
// DMA BD18 7
const unsigned int shim_dma_bd18_7 = 0x0005807C;
// DMA BD18 8
const unsigned int shim_dma_bd18_8 = 0x00058080;
// DMA BD19 0
const unsigned int shim_dma_bd19_0 = 0x00058090;
// DMA BD19 1
const unsigned int shim_dma_bd19_1 = 0x00058094;
// DMA BD19 2
const unsigned int shim_dma_bd19_2 = 0x00058098;
// DMA BD19 3
const unsigned int shim_dma_bd19_3 = 0x0005809C;
// DMA BD19 4
const unsigned int shim_dma_bd19_4 = 0x000580A0;
// DMA BD19 5
const unsigned int shim_dma_bd19_5 = 0x000580A4;
// DMA BD19 6
const unsigned int shim_dma_bd19_6 = 0x000580A8;
// DMA BD19 7
const unsigned int shim_dma_bd19_7 = 0x000580AC;
// DMA BD19 8
const unsigned int shim_dma_bd19_8 = 0x000580B0;
// DMA BD20 0
const unsigned int shim_dma_bd20_0 = 0x000580C0;
// DMA BD20 1
const unsigned int shim_dma_bd20_1 = 0x000580C4;
// DMA BD20 2
const unsigned int shim_dma_bd20_2 = 0x000580C8;
// DMA BD20 3
const unsigned int shim_dma_bd20_3 = 0x000580CC;
// DMA BD20 4
const unsigned int shim_dma_bd20_4 = 0x000580D0;
// DMA BD20 5
const unsigned int shim_dma_bd20_5 = 0x000580D4;
// DMA BD20 6
const unsigned int shim_dma_bd20_6 = 0x000580D8;
// DMA BD20 7
const unsigned int shim_dma_bd20_7 = 0x000580DC;
// DMA BD20 8
const unsigned int shim_dma_bd20_8 = 0x000580E0;
// DMA BD21 0
const unsigned int shim_dma_bd21_0 = 0x000580F0;
// DMA BD21 1
const unsigned int shim_dma_bd21_1 = 0x000580F4;
// DMA BD21 2
const unsigned int shim_dma_bd21_2 = 0x000580F8;
// DMA BD21 3
const unsigned int shim_dma_bd21_3 = 0x000580FC;
// DMA BD21 4
const unsigned int shim_dma_bd21_4 = 0x00058100;
// DMA BD21 5
const unsigned int shim_dma_bd21_5 = 0x00058104;
// DMA BD21 6
const unsigned int shim_dma_bd21_6 = 0x00058108;
// DMA BD21 7
const unsigned int shim_dma_bd21_7 = 0x0005810C;
// DMA BD21 8
const unsigned int shim_dma_bd21_8 = 0x00058110;
// DMA BD22 0
const unsigned int shim_dma_bd22_0 = 0x00058120;
// DMA BD22 1
const unsigned int shim_dma_bd22_1 = 0x00058124;
// DMA BD22 2
const unsigned int shim_dma_bd22_2 = 0x00058128;
// DMA BD22 3
const unsigned int shim_dma_bd22_3 = 0x0005812C;
// DMA BD22 4
const unsigned int shim_dma_bd22_4 = 0x00058130;
// DMA BD22 5
const unsigned int shim_dma_bd22_5 = 0x00058134;
// DMA BD22 6
const unsigned int shim_dma_bd22_6 = 0x00058138;
// DMA BD22 7
const unsigned int shim_dma_bd22_7 = 0x0005813C;
// DMA BD22 8
const unsigned int shim_dma_bd22_8 = 0x00058140;
// DMA BD23 0
const unsigned int shim_dma_bd23_0 = 0x00058150;
// DMA BD23 1
const unsigned int shim_dma_bd23_1 = 0x00058154;
// DMA BD23 2
const unsigned int shim_dma_bd23_2 = 0x00058158;
// DMA BD23 3
const unsigned int shim_dma_bd23_3 = 0x0005815C;
// DMA BD23 4
const unsigned int shim_dma_bd23_4 = 0x00058160;
// DMA BD23 5
const unsigned int shim_dma_bd23_5 = 0x00058164;
// DMA BD23 6
const unsigned int shim_dma_bd23_6 = 0x00058168;
// DMA BD23 7
const unsigned int shim_dma_bd23_7 = 0x0005816C;
// DMA BD23 8
const unsigned int shim_dma_bd23_8 = 0x00058170;
// DMA BD24 0
const unsigned int shim_dma_bd24_0 = 0x00058180;
// DMA BD24 1
const unsigned int shim_dma_bd24_1 = 0x00058184;
// DMA BD24 2
const unsigned int shim_dma_bd24_2 = 0x00058188;
// DMA BD24 3
const unsigned int shim_dma_bd24_3 = 0x0005818C;
// DMA BD24 4
const unsigned int shim_dma_bd24_4 = 0x00058190;
// DMA BD24 5
const unsigned int shim_dma_bd24_5 = 0x00058194;
// DMA BD24 6
const unsigned int shim_dma_bd24_6 = 0x00058198;
// DMA BD24 7
const unsigned int shim_dma_bd24_7 = 0x0005819C;
// DMA BD24 8
const unsigned int shim_dma_bd24_8 = 0x000581A0;
// DMA BD25 0
const unsigned int shim_dma_bd25_0 = 0x000581B0;
// DMA BD25 1
const unsigned int shim_dma_bd25_1 = 0x000581B4;
// DMA BD25 2
const unsigned int shim_dma_bd25_2 = 0x000581B8;
// DMA BD25 3
const unsigned int shim_dma_bd25_3 = 0x000581BC;
// DMA BD25 4
const unsigned int shim_dma_bd25_4 = 0x000581C0;
// DMA BD25 5
const unsigned int shim_dma_bd25_5 = 0x000581C4;
// DMA BD25 6
const unsigned int shim_dma_bd25_6 = 0x000581C8;
// DMA BD25 7
const unsigned int shim_dma_bd25_7 = 0x000581CC;
// DMA BD25 8
const unsigned int shim_dma_bd25_8 = 0x000581D0;
// DMA BD26 0
const unsigned int shim_dma_bd26_0 = 0x000581E0;
// DMA BD26 1
const unsigned int shim_dma_bd26_1 = 0x000581E4;
// DMA BD26 2
const unsigned int shim_dma_bd26_2 = 0x000581E8;
// DMA BD26 3
const unsigned int shim_dma_bd26_3 = 0x000581EC;
// DMA BD26 4
const unsigned int shim_dma_bd26_4 = 0x000581F0;
// DMA BD26 5
const unsigned int shim_dma_bd26_5 = 0x000581F4;
// DMA BD26 6
const unsigned int shim_dma_bd26_6 = 0x000581F8;
// DMA BD26 7
const unsigned int shim_dma_bd26_7 = 0x000581FC;
// DMA BD26 8
const unsigned int shim_dma_bd26_8 = 0x00058200;
// DMA BD27 0
const unsigned int shim_dma_bd27_0 = 0x00058210;
// DMA BD27 1
const unsigned int shim_dma_bd27_1 = 0x00058214;
// DMA BD27 2
const unsigned int shim_dma_bd27_2 = 0x00058218;
// DMA BD27 3
const unsigned int shim_dma_bd27_3 = 0x0005821C;
// DMA BD27 4
const unsigned int shim_dma_bd27_4 = 0x00058220;
// DMA BD27 5
const unsigned int shim_dma_bd27_5 = 0x00058224;
// DMA BD27 6
const unsigned int shim_dma_bd27_6 = 0x00058228;
// DMA BD27 7
const unsigned int shim_dma_bd27_7 = 0x0005822C;
// DMA BD27 8
const unsigned int shim_dma_bd27_8 = 0x00058230;
// DMA BD28 0
const unsigned int shim_dma_bd28_0 = 0x00058240;
// DMA BD28 1
const unsigned int shim_dma_bd28_1 = 0x00058244;
// DMA BD28 2
const unsigned int shim_dma_bd28_2 = 0x00058248;
// DMA BD28 3
const unsigned int shim_dma_bd28_3 = 0x0005824C;
// DMA BD28 4
const unsigned int shim_dma_bd28_4 = 0x00058250;
// DMA BD28 5
const unsigned int shim_dma_bd28_5 = 0x00058254;
// DMA BD28 6
const unsigned int shim_dma_bd28_6 = 0x00058258;
// DMA BD28 7
const unsigned int shim_dma_bd28_7 = 0x0005825C;
// DMA BD28 8
const unsigned int shim_dma_bd28_8 = 0x00058260;
// DMA BD29 0
const unsigned int shim_dma_bd29_0 = 0x00058270;
// DMA BD29 1
const unsigned int shim_dma_bd29_1 = 0x00058274;
// DMA BD29 2
const unsigned int shim_dma_bd29_2 = 0x00058278;
// DMA BD29 3
const unsigned int shim_dma_bd29_3 = 0x0005827C;
// DMA BD29 4
const unsigned int shim_dma_bd29_4 = 0x00058280;
// DMA BD29 5
const unsigned int shim_dma_bd29_5 = 0x00058284;
// DMA BD29 6
const unsigned int shim_dma_bd29_6 = 0x00058288;
// DMA BD29 7
const unsigned int shim_dma_bd29_7 = 0x0005828C;
// DMA BD29 8
const unsigned int shim_dma_bd29_8 = 0x00058290;
// DMA BD30 0
const unsigned int shim_dma_bd30_0 = 0x000582A0;
// DMA BD30 1
const unsigned int shim_dma_bd30_1 = 0x000582A4;
// DMA BD30 2
const unsigned int shim_dma_bd30_2 = 0x000582A8;
// DMA BD30 3
const unsigned int shim_dma_bd30_3 = 0x000582AC;
// DMA BD30 4
const unsigned int shim_dma_bd30_4 = 0x000582B0;
// DMA BD30 5
const unsigned int shim_dma_bd30_5 = 0x000582B4;
// DMA BD30 6
const unsigned int shim_dma_bd30_6 = 0x000582B8;
// DMA BD30 7
const unsigned int shim_dma_bd30_7 = 0x000582BC;
// DMA BD30 8
const unsigned int shim_dma_bd30_8 = 0x000582C0;
// DMA BD31 0
const unsigned int shim_dma_bd31_0 = 0x000582D0;
// DMA BD31 1
const unsigned int shim_dma_bd31_1 = 0x000582D4;
// DMA BD31 2
const unsigned int shim_dma_bd31_2 = 0x000582D8;
// DMA BD31 3
const unsigned int shim_dma_bd31_3 = 0x000582DC;
// DMA BD31 4
const unsigned int shim_dma_bd31_4 = 0x000582E0;
// DMA BD31 5
const unsigned int shim_dma_bd31_5 = 0x000582E4;
// DMA BD31 6
const unsigned int shim_dma_bd31_6 = 0x000582E8;
// DMA BD31 7
const unsigned int shim_dma_bd31_7 = 0x000582EC;
// DMA BD31 8
const unsigned int shim_dma_bd31_8 = 0x000582F0;
// DMA Control MM2S 1 BD0 0
const unsigned int shim_dma_control_mm2s_1_bd0_0 = 0x00058300;
// DMA Control MM2S 1 BD0 1
const unsigned int shim_dma_control_mm2s_1_bd0_1 = 0x00058304;
// DMA Control MM2S 1 BD0 2
const unsigned int shim_dma_control_mm2s_1_bd0_2 = 0x00058308;
// DMA Control MM2S 1 BD0 3
const unsigned int shim_dma_control_mm2s_1_bd0_3 = 0x0005830C;
// DMA Control MM2S 1 BD0 5
const unsigned int shim_dma_control_mm2s_1_bd0_5 = 0x00058314;
// DMA Control MM2S 1 BD0 6
const unsigned int shim_dma_control_mm2s_1_bd0_6 = 0x00058318;
// DMA Control MM2S 1 BD0 7
const unsigned int shim_dma_control_mm2s_1_bd0_7 = 0x0005831C;
// DMA Control MM2S 1 BD0 8
const unsigned int shim_dma_control_mm2s_1_bd0_8 = 0x00058320;
// DMA Control MM2S 1 BD1 0
const unsigned int shim_dma_control_mm2s_1_bd1_0 = 0x00058330;
// DMA Control MM2S 1 BD1 1
const unsigned int shim_dma_control_mm2s_1_bd1_1 = 0x00058334;
// DMA Control MM2S 1 BD1 2
const unsigned int shim_dma_control_mm2s_1_bd1_2 = 0x00058338;
// DMA Control MM2S 1 BD1 3
const unsigned int shim_dma_control_mm2s_1_bd1_3 = 0x0005833C;
// DMA Control MM2S 1 BD1 5
const unsigned int shim_dma_control_mm2s_1_bd1_5 = 0x00058344;
// DMA Control MM2S 1 BD1 6
const unsigned int shim_dma_control_mm2s_1_bd1_6 = 0x00058348;
// DMA Control MM2S 1 BD1 7
const unsigned int shim_dma_control_mm2s_1_bd1_7 = 0x0005834C;
// DMA Control MM2S 1 BD1 8
const unsigned int shim_dma_control_mm2s_1_bd1_8 = 0x00058350;
// DMA Control MM2S 1 BD2 0
const unsigned int shim_dma_control_mm2s_1_bd2_0 = 0x00058360;
// DMA Control MM2S 1 BD2 1
const unsigned int shim_dma_control_mm2s_1_bd2_1 = 0x00058364;
// DMA Control MM2S 1 BD2 2
const unsigned int shim_dma_control_mm2s_1_bd2_2 = 0x00058368;
// DMA Control MM2S 1 BD2 3
const unsigned int shim_dma_control_mm2s_1_bd2_3 = 0x0005836C;
// DMA Control MM2S 1 BD2 5
const unsigned int shim_dma_control_mm2s_1_bd2_5 = 0x00058374;
// DMA Control MM2S 1 BD2 6
const unsigned int shim_dma_control_mm2s_1_bd2_6 = 0x00058378;
// DMA Control MM2S 1 BD2 7
const unsigned int shim_dma_control_mm2s_1_bd2_7 = 0x0005837C;
// DMA Control MM2S 1 BD2 8
const unsigned int shim_dma_control_mm2s_1_bd2_8 = 0x00058380;
// DMA Control MM2S 1 BD3 0
const unsigned int shim_dma_control_mm2s_1_bd3_0 = 0x00058390;
// DMA Control MM2S 1 BD3 1
const unsigned int shim_dma_control_mm2s_1_bd3_1 = 0x00058394;
// DMA Control MM2S 1 BD3 2
const unsigned int shim_dma_control_mm2s_1_bd3_2 = 0x00058398;
// DMA Control MM2S 1 BD3 3
const unsigned int shim_dma_control_mm2s_1_bd3_3 = 0x0005839C;
// DMA Control MM2S 1 BD3 5
const unsigned int shim_dma_control_mm2s_1_bd3_5 = 0x000583A4;
// DMA Control MM2S 1 BD3 6
const unsigned int shim_dma_control_mm2s_1_bd3_6 = 0x000583A8;
// DMA Control MM2S 1 BD3 7
const unsigned int shim_dma_control_mm2s_1_bd3_7 = 0x000583AC;
// DMA Control MM2S 1 BD3 8
const unsigned int shim_dma_control_mm2s_1_bd3_8 = 0x000583B0;
// DMA Control MM2S 1 BD4 0
const unsigned int shim_dma_control_mm2s_1_bd4_0 = 0x000583C0;
// DMA Control MM2S 1 BD4 1
const unsigned int shim_dma_control_mm2s_1_bd4_1 = 0x000583C4;
// DMA Control MM2S 1 BD4 2
const unsigned int shim_dma_control_mm2s_1_bd4_2 = 0x000583C8;
// DMA Control MM2S 1 BD4 3
const unsigned int shim_dma_control_mm2s_1_bd4_3 = 0x000583CC;
// DMA Control MM2S 1 BD4 5
const unsigned int shim_dma_control_mm2s_1_bd4_5 = 0x000583D4;
// DMA Control MM2S 1 BD4 6
const unsigned int shim_dma_control_mm2s_1_bd4_6 = 0x000583D8;
// DMA Control MM2S 1 BD4 7
const unsigned int shim_dma_control_mm2s_1_bd4_7 = 0x000583DC;
// DMA Control MM2S 1 BD4 8
const unsigned int shim_dma_control_mm2s_1_bd4_8 = 0x000583E0;
// DMA Control MM2S 1 BD5 0
const unsigned int shim_dma_control_mm2s_1_bd5_0 = 0x000583F0;
// DMA Control MM2S 1 BD5 1
const unsigned int shim_dma_control_mm2s_1_bd5_1 = 0x000583F4;
// DMA Control MM2S 1 BD5 2
const unsigned int shim_dma_control_mm2s_1_bd5_2 = 0x000583F8;
// DMA Control MM2S 1 BD5 3
const unsigned int shim_dma_control_mm2s_1_bd5_3 = 0x000583FC;
// DMA Control MM2S 1 BD5 5
const unsigned int shim_dma_control_mm2s_1_bd5_5 = 0x00058404;
// DMA Control MM2S 1 BD5 6
const unsigned int shim_dma_control_mm2s_1_bd5_6 = 0x00058408;
// DMA Control MM2S 1 BD5 7
const unsigned int shim_dma_control_mm2s_1_bd5_7 = 0x0005840C;
// DMA Control MM2S 1 BD5 8
const unsigned int shim_dma_control_mm2s_1_bd5_8 = 0x00058410;
// DMA Control MM2S 1 BD6 0
const unsigned int shim_dma_control_mm2s_1_bd6_0 = 0x00058420;
// DMA Control MM2S 1 BD6 1
const unsigned int shim_dma_control_mm2s_1_bd6_1 = 0x00058424;
// DMA Control MM2S 1 BD6 2
const unsigned int shim_dma_control_mm2s_1_bd6_2 = 0x00058428;
// DMA Control MM2S 1 BD6 3
const unsigned int shim_dma_control_mm2s_1_bd6_3 = 0x0005842C;
// DMA Control MM2S 1 BD6 5
const unsigned int shim_dma_control_mm2s_1_bd6_5 = 0x00058434;
// DMA Control MM2S 1 BD6 6
const unsigned int shim_dma_control_mm2s_1_bd6_6 = 0x00058438;
// DMA Control MM2S 1 BD6 7
const unsigned int shim_dma_control_mm2s_1_bd6_7 = 0x0005843C;
// DMA Control MM2S 1 BD6 8
const unsigned int shim_dma_control_mm2s_1_bd6_8 = 0x00058440;
// DMA Control MM2S 1 BD7 0
const unsigned int shim_dma_control_mm2s_1_bd7_0 = 0x00058450;
// DMA Control MM2S 1 BD7 1
const unsigned int shim_dma_control_mm2s_1_bd7_1 = 0x00058454;
// DMA Control MM2S 1 BD7 2
const unsigned int shim_dma_control_mm2s_1_bd7_2 = 0x00058458;
// DMA Control MM2S 1 BD7 3
const unsigned int shim_dma_control_mm2s_1_bd7_3 = 0x0005845C;
// DMA Control MM2S 1 BD7 5
const unsigned int shim_dma_control_mm2s_1_bd7_5 = 0x00058464;
// DMA Control MM2S 1 BD7 6
const unsigned int shim_dma_control_mm2s_1_bd7_6 = 0x00058468;
// DMA Control MM2S 1 BD7 7
const unsigned int shim_dma_control_mm2s_1_bd7_7 = 0x0005846C;
// DMA Control MM2S 1 BD7 8
const unsigned int shim_dma_control_mm2s_1_bd7_8 = 0x00058470;
// DMA Control Register S2MM Ch2
const unsigned int shim_dma_s2mm_2_ctrl = 0x00058480;
// DMA Task Queue Insertion S2MM Ch2 (16-deep)
const unsigned int shim_dma_s2mm_2_task_queue = 0x00058484;
// DMA Control Register MM2S Ch2
const unsigned int shim_dma_mm2s_2_ctrl = 0x00058490;
// DMA Task Queue Insertion MM2S Ch2 (16-deep)
const unsigned int shim_dma_mm2s_2_task_queue = 0x00058494;
// DMA Control Register MM2S Ch3
const unsigned int shim_dma_mm2s_3_ctrl = 0x00058498;
// DMA Task Queue Insertion MM2S Ch3 (16-deep)
const unsigned int shim_dma_mm2s_3_task_queue = 0x0005849C;
// DMA Control Register Control MM2S Ch1
const unsigned int shim_dma_control_mm2s_1_ctrl = 0x000584A0;
// DMA Task Queue Insertion Control MM2S Ch1 (8-deep)
const unsigned int shim_dma_control_mm2s_1_task_queue = 0x000584A4;
// DMA S2MM Status Register Ch2
const unsigned int shim_dma_s2mm_status_2 = 0x000584B0;
// DMA MM2S Status Register Ch2
const unsigned int shim_dma_mm2s_status_2 = 0x000584C0;
// DMA MM2S Status Register Ch3
const unsigned int shim_dma_mm2s_status_3 = 0x000584C4;
// DMA Control MM2S Status Register Ch1
const unsigned int shim_dma_control_mm2s_status_1 = 0x000584D0;
// DMA S2MM Current Write Count Ch2
const unsigned int shim_dma_s2mm_current_write_count_2 = 0x000584E0;
// DMA S2MM FoT Count FIFO Pop Ch2
const unsigned int shim_dma_s2mm_fot_count_fifo_pop_2 = 0x000584F0;
// Selection of which MM2S channels will generate events in switch B
const unsigned int shim_dma_event_channel_selection_b = 0x00058500;
// Spare register for application B
//const unsigned int shim_spare_reg_b = 0x0005C000;
// Interrupt controller mask (IMR) for application B
const unsigned int shim_interrupt_controller_mask_b = 0x0005C010;
// Interrupt controller enable interrupt (IER) for application B
const unsigned int shim_interrupt_controller_enable_b = 0x0005C014;
// Interrupt controller disable interrupt (IDR) for application B
const unsigned int shim_interrupt_controller_disable_b = 0x0005C018;
// Interrupt controller status register (ISR) for application B
const unsigned int shim_interrupt_controller_status_b = 0x0005C01C;
// SMID/PASID bits for DMA channels 0 and 1 and uC-Module A (privileged)
const unsigned int shim_smid_a = 0x000E8000;
// SMID/PASID bits for DMA channels 2 and 3 and uC-Module B (privileged)
const unsigned int shim_smid_b = 0x000E8004;
// AxUSER[36:27] bits for DMA channels 0 and 1 and uC-Module A (privileged)
const unsigned int shim_axuser_a = 0x000E8008;
// AxUSER[36:27] bits for DMA channels 2 and 3 and uC-Module B (privileged)
const unsigned int shim_axuser_b = 0x000E800C;
// Trusted memory KeyID (AxUSER[26:23]) for DMA channels 0 and 1 and uC-Module A (privileged)
const unsigned int shim_trusted_keys_a = 0x000E8010;
// Trusted memory KeyID (AxUSER[26:23]) for DMA channels 2 and 3 and uC-Module B (privileged)
const unsigned int shim_trusted_keys_b = 0x000E8014;
// DMA MM2S Response FIFO Parity Error Injection Ch0 (privileged)
const unsigned int shim_dma_mm2s_0_response_fifo_parity_error_injection = 0x000E8020;
// DMA MM2S Response FIFO Parity Error Injection Ch1 (privileged)
const unsigned int shim_dma_mm2s_1_response_fifo_parity_error_injection = 0x000E8024;
// DMA MM2S Response FIFO Parity Error Injection Ch2 (privileged)
const unsigned int shim_dma_mm2s_2_response_fifo_parity_error_injection = 0x000E8028;
// DMA MM2S Response FIFO Parity Error Injection Ch3 (privileged)
const unsigned int shim_dma_mm2s_3_response_fifo_parity_error_injection = 0x000E802C;
// DMA Control MM2S Response FIFO Parity Error Injection Ch0 (privileged)
const unsigned int shim_dma_control_mm2s_0_response_fifo_parity_error_injection = 0x000E8030;
// DMA Control MM2S Response FIFO Parity Error Injection Ch1 (privileged)
const unsigned int shim_dma_control_mm2s_1_response_fifo_parity_error_injection = 0x000E8034;
// DMA Pause (privileged)
const unsigned int shim_dma_pause = 0x000E8040;
// AXI-MM NSU Bridge configuration (privileged)
const unsigned int shim_me_aximm_config = 0x000E8050;
// AXI-MM outstanding transactions monitor (privileged)
const unsigned int shim_axi_mm_outstanding_transactions = 0x000E8060;
// Interrupt controller privileged enable bit (privileged)
const unsigned int shim_interrupt_controller_global_enable = 0x000E8070;
// Interrupt controller interrupt line and enable (privileged)
const unsigned int shim_interrupt_controller_interrupt_line = 0x000E8074;
// AIE to PL Interface Configuration (downsizing and/or upsizing) (to be updated)
const unsigned int shim_pl_interface_upsizer_config = 0x00000000;
// PL to AIE Interface Configuration (downsizing and/or upsizing) (to be updated)
const unsigned int shim_pl_interface_downsizer_config = 0x00000004;
// PL Interface Downsizer Enable (to be updated)
const unsigned int shim_pl_interface_downsizer_enable = 0x00000008;
// PL Interface Downsizer Bypass of register (to be updated)
const unsigned int shim_pl_interface_downsizer_bypass = 0x0000000C;
// Performance Counters 1-0 Start and Stop Event
const unsigned int shim_performance_control0 = 0x00004000;
const unsigned int shim_performance_start_stop_0_1 = 0x00004000;
// Performance Counters 3-2 Start and Stop Event
const unsigned int shim_performance_control1 = 0x00004004;
const unsigned int shim_performance_start_stop_2_3 = 0x00004004;
// Performance Counters 5-4 Start and Stop Event
const unsigned int shim_performance_control2 = 0x00004008;
const unsigned int shim_performance_start_stop_4_5 = 0x00004008;
// Performance Counters 3-0 Reset Events
const unsigned int shim_performance_control6 = 0x0000400C;
const unsigned int shim_performance_reset_0_3 = 0x0000400C;
// Performance Counters 5-4 Reset Events
const unsigned int shim_performance_control7 = 0x00004010;
const unsigned int shim_performance_reset_4_5 = 0x00004010;
// Performance Counter0
const unsigned int shim_performance_counter0 = 0x00004020;
// Performance Counter1
const unsigned int shim_performance_counter1 = 0x00004024;
// Performance Counter2
const unsigned int shim_performance_counter2 = 0x00004028;
// Performance Counter3
const unsigned int shim_performance_counter3 = 0x0000402C;
// Performance Counter4
const unsigned int shim_performance_counter4 = 0x00004030;
// Performance Counter5
const unsigned int shim_performance_counter5 = 0x00004034;
// Performance Counter0 Snapshot
const unsigned int shim_performance_counter0_snapshot = 0x00004040;
// Performance Counter1 Snapshot
const unsigned int shim_performance_counter1_snapshot = 0x00004044;
// Performance Counter2 Snapshot
const unsigned int shim_performance_counter2_snapshot = 0x00004048;
// Performance Counter3 Snapshot
const unsigned int shim_performance_counter3_snapshot = 0x0000404C;
// Performance Counter4 Snapshot
const unsigned int shim_performance_counter4_snapshot = 0x00004050;
// Performance Counter5 Snapshot
const unsigned int shim_performance_counter5_snapshot = 0x00004054;
// Performance Counter0 Event Value.
const unsigned int shim_performance_counter0_event_value = 0x00004060;
// Performance Counter1 Event Value.
const unsigned int shim_performance_counter1_event_value = 0x00004064;
// Performance Counter2 Event Value.
const unsigned int shim_performance_counter2_event_value = 0x00004068;
// Performance Counter3 Event Value.
const unsigned int shim_performance_counter3_event_value = 0x0000406C;
// Performance Counter4 Event Value.
const unsigned int shim_performance_counter4_event_value = 0x00004070;
// Performance Counter5 Event Value.
const unsigned int shim_performance_counter5_event_value = 0x00004074;
// Set performance counter snapshot load event for application A
const unsigned int shim_performance_counter_snapshots_load_event_a = 0x00004080;
// Control of Internal Timer A
const unsigned int shim_timer_a_control = 0x00004090;
// Internal Timer A Event Value.
const unsigned int shim_timer_a_trig_event_low_value = 0x00004094;
// Internal Timer A Event Value.
const unsigned int shim_timer_a_trig_event_high_value = 0x00004098;
// Generate an internal event in switch A
const unsigned int shim_event_generate_a = 0x000040A0;
// Control of which Internal Event to Broadcast0 in switch A
const unsigned int shim_event_broadcast_a_0 = 0x000040B0;
// Control of which Internal Event to Broadcast1 for switch A
const unsigned int shim_event_broadcast_a_1 = 0x000040B4;
// Control of which Internal Event to Broadcast2 for switch A
const unsigned int shim_event_broadcast_a_2 = 0x000040B8;
// Control of which Internal Event to Broadcast3 for switch A
const unsigned int shim_event_broadcast_a_3 = 0x000040BC;
// Control of which Internal Event to Broadcast4 for switch A
const unsigned int shim_event_broadcast_a_4 = 0x000040C0;
// Control of which Internal Event to Broadcast5 for switch A
const unsigned int shim_event_broadcast_a_5 = 0x000040C4;
// Control of which Internal Event to Broadcast6 for switch A
const unsigned int shim_event_broadcast_a_6 = 0x000040C8;
// Control of which Internal Event to Broadcast7 for switch A
const unsigned int shim_event_broadcast_a_7 = 0x000040CC;
// Control of which Internal Event to Broadcast8 for switch A
const unsigned int shim_event_broadcast_a_8 = 0x000040D0;
// Control of which Internal Event to Broadcast9 for switch A
const unsigned int shim_event_broadcast_a_9 = 0x000040D4;
// Control of which Internal Event to Broadcast10 for switch A
const unsigned int shim_event_broadcast_a_10 = 0x000040D8;
// Control of which Internal Event to Broadcast11 for switch A
const unsigned int shim_event_broadcast_a_11 = 0x000040DC;
// Control of which Internal Event to Broadcast12 for switch A
const unsigned int shim_event_broadcast_a_12 = 0x000040E0;
// Control of which Internal Event to Broadcast13 for switch A
const unsigned int shim_event_broadcast_a_13 = 0x000040E4;
// Control of which Internal Event to Broadcast14 for switch A
const unsigned int shim_event_broadcast_a_14 = 0x000040E8;
// Control of which Internal Event to Broadcast15 for switch A
const unsigned int shim_event_broadcast_a_15 = 0x000040EC;
// Set block of broadcast signals to South in switch A
const unsigned int shim_event_broadcast_a_block_south_set = 0x000040F0;
// Clear block of broadcast signals to South in switch A
const unsigned int shim_event_broadcast_a_block_south_clr = 0x000040F4;
// Current value of block for broadcast signals to South in switch A
const unsigned int shim_event_broadcast_a_block_south_value = 0x000040F8;
// Set block of broadcast switch A signals to West in switch A
const unsigned int shim_event_broadcast_a_block_west_set = 0x000040FC;
// Clear block of broadcast switch A signals to West in switch A
const unsigned int shim_event_broadcast_a_block_west_clr = 0x00004100;
// Current value of block for broadcast switch A signals to West in switch A
const unsigned int shim_event_broadcast_a_block_west_value = 0x00004104;
// Set block of broadcast switch A signals to North in switch A
const unsigned int shim_event_broadcast_a_block_north_set = 0x00004108;
// Clear block of broadcast switch A signals to North in switch A
const unsigned int shim_event_broadcast_a_block_north_clr = 0x0000410C;
// Current value of block for broadcast switch A signals to North in switch A
const unsigned int shim_event_broadcast_a_block_north_value = 0x00004110;
// Set block of broadcast switch A signals to East
const unsigned int shim_event_broadcast_a_block_east_set = 0x00004114;
// Clear block of broadcast switch A signals to East
const unsigned int shim_event_broadcast_a_block_east_clr = 0x00004118;
// Current value of block for broadcast switch A signals to East
const unsigned int shim_event_broadcast_a_block_east_value = 0x0000411C;
// Control of Trace A
const unsigned int shim_trace_a_control0 = 0x00004120;
// Control of Trace A: packet configuration
const unsigned int shim_trace_a_control1 = 0x00004124;
// Status of trace engine A
const unsigned int shim_trace_a_status = 0x00004128;
// Control of which Internal Event to Trace A
const unsigned int shim_trace_a_event0 = 0x00004130;
// Control of which Internal Event to Trace A
const unsigned int shim_trace_a_event1 = 0x00004134;
// Internal Timer A Low part Value.
const unsigned int shim_timer_a_low = 0x00004140;
// Internal Timer A High part Value.
const unsigned int shim_timer_a_high = 0x00004144;
// Internal event status register0 application A
const unsigned int shim_event_status_a_0 = 0x00004150;
// Internal event status register1 application A
const unsigned int shim_event_status_a_1 = 0x00004154;
// Internal event status register2 application A
const unsigned int shim_event_status_a_2 = 0x00004158;
// Internal event status register3 application A
const unsigned int shim_event_status_a_3 = 0x0000415C;
// Internal event status register4 application A
const unsigned int shim_event_status_a_4 = 0x00004160;
// Internal event status register5 application A
const unsigned int shim_event_status_a_5 = 0x00004164;
// Internal event status register6 application A
const unsigned int shim_event_status_a_6 = 0x00004168;
// Internal event status register7 application A
const unsigned int shim_event_status_a_7 = 0x0000416C;
// Combo events input events A-D application A
const unsigned int shim_combo_event_inputs0 = 0x00004170;
// Combo events input events E-H application A
const unsigned int shim_combo_event_inputs1 = 0x00004174;
// Combo events control bits for combo 0-2 application A
const unsigned int shim_combo_event_control2 = 0x00004178;
// Combo events control bits for combo 4-6 application A
const unsigned int shim_combo_event_control3 = 0x0000417C;
// Configuration for edge detection events 0-1 application A
const unsigned int shim_edge_detection_event_control0 = 0x00004180;
// Configuration for edge detection events 2-3 application A
const unsigned int shim_edge_detection_event_control1 = 0x00004184;
// Configuration for edge detection events 4-5 application A
const unsigned int shim_edge_detection_event_control2 = 0x00004188;
// Configuration for edge detection events 6-7 application A
const unsigned int shim_edge_detection_event_control3 = 0x0000418C;
// Event enable for Group 0 application A
const unsigned int shim_event_group_0_enable_a = 0x00004190;
// Event enable 0 for DMA Activity Group application A
const unsigned int shim_event_group_dma_activity_enable_0_a = 0x00004194;
// Event enable 1 for DMA Activity Group application A
const unsigned int shim_event_group_dma_activity_enable_1_a = 0x00004198;
// Event enable for uC-DMA Activity group application A
const unsigned int shim_event_group_uc_dma_activity_enable_a = 0x0000419C;
// Event enable for NoC Module 0 Lock group application A
const unsigned int shim_event_group_lock_enable_a = 0x000041A0;
// Event enable for Errors group application A
const unsigned int shim_event_group_errors_enable_a = 0x000041A4;
// Event enable for Stream Switch group application A
const unsigned int shim_event_group_stream_switch_enable_a = 0x000041A8;
// Event enable for uC-Core Program Flow group application A
const unsigned int shim_event_group_uc_core_program_flow_enable_a = 0x000041AC;
// Event enable for uC-Core PC and status event group application A
const unsigned int shim_event_group_uc_core_pc_status_event_enable_a = 0x000041B0;
// Event enable for Broadcast A group application A
const unsigned int shim_event_group_broadcast_enable_a = 0x000041B4;
// uC-Core A Interrupt Event Action
const unsigned int shim_uc_core_a_interrupt_event = 0x000041C0;
// Latching status bits for AXI-MM NSU errors for requests from application A (captured by NSU_Error event)
const unsigned int shim_nsu_errors_a = 0x000041D0;
// In single-app mode, select uC-Module that triggers events in Group_uC_Core_Program_Flow, Group_uC_Core_PC_Event, and Group_uC_Core_Status. In dual-app mode, the value set in this register has no effect.
const unsigned int shim_uc_module_event_select = 0x000041E0;
// Spare register for application A
//const unsigned int shim_spare_reg_a = 0x000041F0;
// Stream Switch Manager Configuration DMA 0
const unsigned int shim_stream_switch_manager_config_dma_0 = 0x00008000;
// Stream Switch Manager Configuration DMA 1
const unsigned int shim_stream_switch_manager_config_dma_1 = 0x00008004;
// Stream Switch Manager Configuration FIFO 0
const unsigned int shim_stream_switch_manager_config_fifo_0 = 0x00008008;
// Stream Switch Manager Configuration PL 0
const unsigned int shim_stream_switch_manager_config_pl_0 = 0x0000800C;
// Stream Switch Manager Configuration PL 1
const unsigned int shim_stream_switch_manager_config_pl_1 = 0x00008010;
// Stream Switch Manager Configuration PL 2
const unsigned int shim_stream_switch_manager_config_pl_2 = 0x00008014;
// Stream Switch Manager Configuration West 0
const unsigned int shim_stream_switch_manager_config_west_0 = 0x00008018;
// Stream Switch Manager Configuration West 1
const unsigned int shim_stream_switch_manager_config_west_1 = 0x0000801C;
// Stream Switch Manager Configuration North 0
const unsigned int shim_stream_switch_manager_config_north_0 = 0x00008020;
// Stream Switch Manager Configuration North 1
const unsigned int shim_stream_switch_manager_config_north_1 = 0x00008024;
// Stream Switch Manager Configuration North X
const unsigned int shim_stream_switch_manager_config_north_x = 0x00008028;
// Stream Switch Manager Configuration East 0
const unsigned int shim_stream_switch_manager_config_east_0 = 0x0000802C;
// Stream Switch Manager Configuration East 1
const unsigned int shim_stream_switch_manager_config_east_1 = 0x00008030;
// Stream Switch Manager Configuration North_Control 0
const unsigned int shim_stream_switch_manager_config_north_control_0 = 0x00008034;
// Stream Switch Manager Configuration Tile Ctrl 0
const unsigned int shim_stream_switch_manager_config_tile_ctrl_0 = 0x00008038;
// Stream Switch Manager Configuration 32b_Switch 0
const unsigned int shim_stream_switch_manager_config_32b_switch_0 = 0x0000803C;
// Stream Switch Subordinate Configuration DMA 0
const unsigned int shim_stream_switch_subordinate_config_dma_0 = 0x00008040;
// Stream Switch Subordinate Configuration DMA 1
const unsigned int shim_stream_switch_subordinate_config_dma_1 = 0x00008044;
// Stream Switch Subordinate Configuration FIFO 0
const unsigned int shim_stream_switch_subordinate_config_fifo_0 = 0x00008048;
// Stream Switch Subordinate Configuration PL 0
const unsigned int shim_stream_switch_subordinate_config_pl_0 = 0x0000804C;
// Stream Switch Subordinate Configuration PL 1
const unsigned int shim_stream_switch_subordinate_config_pl_1 = 0x00008050;
// Stream Switch Subordinate Configuration PL 2
const unsigned int shim_stream_switch_subordinate_config_pl_2 = 0x00008054;
// Stream Switch Subordinate Configuration PL 3
const unsigned int shim_stream_switch_subordinate_config_pl_3 = 0x00008058;
// Stream Switch Subordinate Configuration West 0
const unsigned int shim_stream_switch_subordinate_config_west_0 = 0x0000805C;
// Stream Switch Subordinate Configuration West 1
const unsigned int shim_stream_switch_subordinate_config_west_1 = 0x00008060;
// Stream Switch Subordinate Configuration North 0
const unsigned int shim_stream_switch_subordinate_config_north_0 = 0x00008064;
// Stream Switch Subordinate Configuration North 1
const unsigned int shim_stream_switch_subordinate_config_north_1 = 0x00008068;
// Stream Switch Subordinate Configuration East 0
const unsigned int shim_stream_switch_subordinate_config_east_0 = 0x0000806C;
// Stream Switch Subordinate Configuration East 1
const unsigned int shim_stream_switch_subordinate_config_east_1 = 0x00008070;
// Stream Switch Subordinate Configuration DMA_Control 0
const unsigned int shim_stream_switch_subordinate_config_dma_control_0 = 0x00008074;
// Stream Switch Subordinate Configuration 32b_Switch 0
const unsigned int shim_stream_switch_subordinate_config_32b_switch_0 = 0x00008078;
// Stream Switch Subordinate Configuration DMA 0
const unsigned int shim_stream_switch_subordinate_dma_0_slot0 = 0x00008080;
// Stream Switch Subordinate Configuration DMA 0
const unsigned int shim_stream_switch_subordinate_dma_0_slot1 = 0x00008084;
// Stream Switch Subordinate Configuration DMA 0
const unsigned int shim_stream_switch_subordinate_dma_0_slot2 = 0x00008088;
// Stream Switch Subordinate Configuration DMA 0
const unsigned int shim_stream_switch_subordinate_dma_0_slot3 = 0x0000808C;
// Stream Switch Subordinate Configuration DMA 1
const unsigned int shim_stream_switch_subordinate_dma_1_slot0 = 0x00008090;
// Stream Switch Subordinate Configuration DMA 1
const unsigned int shim_stream_switch_subordinate_dma_1_slot1 = 0x00008094;
// Stream Switch Subordinate Configuration DMA 1
const unsigned int shim_stream_switch_subordinate_dma_1_slot2 = 0x00008098;
// Stream Switch Subordinate Configuration DMA 1
const unsigned int shim_stream_switch_subordinate_dma_1_slot3 = 0x0000809C;
// Stream Switch Subordinate Configuration FIFO 0
const unsigned int shim_stream_switch_subordinate_fifo_0_slot0 = 0x000080A0;
// Stream Switch Subordinate Configuration FIFO 0
const unsigned int shim_stream_switch_subordinate_fifo_0_slot1 = 0x000080A4;
// Stream Switch Subordinate Configuration FIFO 0
const unsigned int shim_stream_switch_subordinate_fifo_0_slot2 = 0x000080A8;
// Stream Switch Subordinate Configuration FIFO 0
const unsigned int shim_stream_switch_subordinate_fifo_0_slot3 = 0x000080AC;
// Stream Switch Subordinate Configuration PL 0
const unsigned int shim_stream_switch_subordinate_pl_0_slot0 = 0x000080B0;
// Stream Switch Subordinate Configuration PL 0
const unsigned int shim_stream_switch_subordinate_pl_0_slot1 = 0x000080B4;
// Stream Switch Subordinate Configuration PL 0
const unsigned int shim_stream_switch_subordinate_pl_0_slot2 = 0x000080B8;
// Stream Switch Subordinate Configuration PL 0
const unsigned int shim_stream_switch_subordinate_pl_0_slot3 = 0x000080BC;
// Stream Switch Subordinate Configuration PL 1
const unsigned int shim_stream_switch_subordinate_pl_1_slot0 = 0x000080C0;
// Stream Switch Subordinate Configuration PL 1
const unsigned int shim_stream_switch_subordinate_pl_1_slot1 = 0x000080C4;
// Stream Switch Subordinate Configuration PL 1
const unsigned int shim_stream_switch_subordinate_pl_1_slot2 = 0x000080C8;
// Stream Switch Subordinate Configuration PL 1
const unsigned int shim_stream_switch_subordinate_pl_1_slot3 = 0x000080CC;
// Stream Switch Subordinate Configuration PL 2
const unsigned int shim_stream_switch_subordinate_pl_2_slot0 = 0x000080D0;
// Stream Switch Subordinate Configuration PL 2
const unsigned int shim_stream_switch_subordinate_pl_2_slot1 = 0x000080D4;
// Stream Switch Subordinate Configuration PL 2
const unsigned int shim_stream_switch_subordinate_pl_2_slot2 = 0x000080D8;
// Stream Switch Subordinate Configuration PL 2
const unsigned int shim_stream_switch_subordinate_pl_2_slot3 = 0x000080DC;
// Stream Switch Subordinate Configuration PL 3
const unsigned int shim_stream_switch_subordinate_pl_3_slot0 = 0x000080E0;
// Stream Switch Subordinate Configuration PL 3
const unsigned int shim_stream_switch_subordinate_pl_3_slot1 = 0x000080E4;
// Stream Switch Subordinate Configuration PL 3
const unsigned int shim_stream_switch_subordinate_pl_3_slot2 = 0x000080E8;
// Stream Switch Subordinate Configuration PL 3
const unsigned int shim_stream_switch_subordinate_pl_3_slot3 = 0x000080EC;
// Stream Switch Subordinate Configuration West 0
const unsigned int shim_stream_switch_subordinate_west_0_slot0 = 0x000080F0;
// Stream Switch Subordinate Configuration West 0
const unsigned int shim_stream_switch_subordinate_west_0_slot1 = 0x000080F4;
// Stream Switch Subordinate Configuration West 0
const unsigned int shim_stream_switch_subordinate_west_0_slot2 = 0x000080F8;
// Stream Switch Subordinate Configuration West 0
const unsigned int shim_stream_switch_subordinate_west_0_slot3 = 0x000080FC;
// Stream Switch Subordinate Configuration West 1
const unsigned int shim_stream_switch_subordinate_west_1_slot0 = 0x00008100;
// Stream Switch Subordinate Configuration West 1
const unsigned int shim_stream_switch_subordinate_west_1_slot1 = 0x00008104;
// Stream Switch Subordinate Configuration West 1
const unsigned int shim_stream_switch_subordinate_west_1_slot2 = 0x00008108;
// Stream Switch Subordinate Configuration West 1
const unsigned int shim_stream_switch_subordinate_west_1_slot3 = 0x0000810C;
// Stream Switch Subordinate Configuration North 0
const unsigned int shim_stream_switch_subordinate_north_0_slot0 = 0x00008110;
// Stream Switch Subordinate Configuration North 0
const unsigned int shim_stream_switch_subordinate_north_0_slot1 = 0x00008114;
// Stream Switch Subordinate Configuration North 0
const unsigned int shim_stream_switch_subordinate_north_0_slot2 = 0x00008118;
// Stream Switch Subordinate Configuration North 0
const unsigned int shim_stream_switch_subordinate_north_0_slot3 = 0x0000811C;
// Stream Switch Subordinate Configuration North 1
const unsigned int shim_stream_switch_subordinate_north_1_slot0 = 0x00008120;
// Stream Switch Subordinate Configuration North 1
const unsigned int shim_stream_switch_subordinate_north_1_slot1 = 0x00008124;
// Stream Switch Subordinate Configuration North 1
const unsigned int shim_stream_switch_subordinate_north_1_slot2 = 0x00008128;
// Stream Switch Subordinate Configuration North 1
const unsigned int shim_stream_switch_subordinate_north_1_slot3 = 0x0000812C;
// Stream Switch Subordinate Configuration East 0
const unsigned int shim_stream_switch_subordinate_east_0_slot0 = 0x00008130;
// Stream Switch Subordinate Configuration East 0
const unsigned int shim_stream_switch_subordinate_east_0_slot1 = 0x00008134;
// Stream Switch Subordinate Configuration East 0
const unsigned int shim_stream_switch_subordinate_east_0_slot2 = 0x00008138;
// Stream Switch Subordinate Configuration East 0
const unsigned int shim_stream_switch_subordinate_east_0_slot3 = 0x0000813C;
// Stream Switch Subordinate Configuration East 1
const unsigned int shim_stream_switch_subordinate_east_1_slot0 = 0x00008140;
// Stream Switch Subordinate Configuration East 1
const unsigned int shim_stream_switch_subordinate_east_1_slot1 = 0x00008144;
// Stream Switch Subordinate Configuration East 1
const unsigned int shim_stream_switch_subordinate_east_1_slot2 = 0x00008148;
// Stream Switch Subordinate Configuration East 1
const unsigned int shim_stream_switch_subordinate_east_1_slot3 = 0x0000814C;
// Stream Switch Subordinate Configuration DMA_Control 0
const unsigned int shim_stream_switch_subordinate_dma_control_0_slot0 = 0x00008150;
// Stream Switch Subordinate Configuration DMA_Control 0
const unsigned int shim_stream_switch_subordinate_dma_control_0_slot1 = 0x00008154;
// Stream Switch Subordinate Configuration DMA_Control 0
const unsigned int shim_stream_switch_subordinate_dma_control_0_slot2 = 0x00008158;
// Stream Switch Subordinate Configuration DMA_Control 0
const unsigned int shim_stream_switch_subordinate_dma_control_0_slot3 = 0x0000815C;
// Stream Switch Subordinate Configuration 32b_Switch 0
const unsigned int shim_stream_switch_subordinate_32b_switch_0_slot0 = 0x00008160;
// Stream Switch Subordinate Configuration 32b_Switch 0
const unsigned int shim_stream_switch_subordinate_32b_switch_0_slot1 = 0x00008164;
// Stream Switch Subordinate Configuration 32b_Switch 0
const unsigned int shim_stream_switch_subordinate_32b_switch_0_slot2 = 0x00008168;
// Stream Switch Subordinate Configuration 32b_Switch 0
const unsigned int shim_stream_switch_subordinate_32b_switch_0_slot3 = 0x0000816C;
// Stream Switch Deterministic Merge Arbiter:0 Subordinate:0,1
const unsigned int shim_stream_switch_deterministic_merge_arb0_subordinate0_1 = 0x00008170;
// Stream Switch Deterministic Merge Arbiter:0 Subordinate:2,3
const unsigned int shim_stream_switch_deterministic_merge_arb0_subordinate2_3 = 0x00008174;
// Stream Switch Deterministic Merge Arbiter:0 Control
const unsigned int shim_stream_switch_deterministic_merge_arb0_ctrl = 0x00008178;
// Stream Switch Deterministic Merge Arbiter:1 Subordinate:0,1
const unsigned int shim_stream_switch_deterministic_merge_arb1_subordinate0_1 = 0x0000817C;
// Stream Switch Deterministic Merge Arbiter:1 Subordinate:2,3
const unsigned int shim_stream_switch_deterministic_merge_arb1_subordinate2_3 = 0x00008180;
// Stream Switch Deterministic Merge Arbiter:1 Control
const unsigned int shim_stream_switch_deterministic_merge_arb1_ctrl = 0x00008184;
// 32-bit Stream Switch Manager Configuration uController 0
const unsigned int shim_stream_switch_32b_manager_config_ucontroller_0 = 0x00008190;
// 32-bit Stream Switch Manager Configuration West 0
const unsigned int shim_stream_switch_32b_manager_config_west_0 = 0x00008194;
// 32-bit Stream Switch Manager Configuration North 0
const unsigned int shim_stream_switch_32b_manager_config_north_0 = 0x00008198;
// 32-bit Stream Switch Manager Configuration East 0
const unsigned int shim_stream_switch_32b_manager_config_east_0 = 0x0000819C;
// 32-bit Stream Switch Manager Configuration 512-bit Switch 0
const unsigned int shim_stream_switch_32b_manager_config_512b_switch_0 = 0x000081A0;
// 32-bit Stream Switch Manager Configuration PL 0
const unsigned int shim_stream_switch_32b_manager_config_pl_0 = 0x000081A4;
// 32-bit Stream Switch Manager Configuration Tile Ctrl 0 (to be removed)
const unsigned int shim_stream_switch_32b_manager_config_tile_ctrl_0 = 0x000081A8;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 0
const unsigned int shim_stream_switch_32b_subordinate_config_tile_ctrl_0 = 0x000081B0;
// 32-bit Stream Switch Subordinate Configuration Trace 0
const unsigned int shim_stream_switch_32b_subordinate_config_trace_0 = 0x000081B4;
// 32-bit Stream Switch Subordinate Configuration uController 0
const unsigned int shim_stream_switch_32b_subordinate_config_ucontroller_0 = 0x000081B8;
// 32-bit Stream Switch Subordinate Configuration West 0
const unsigned int shim_stream_switch_32b_subordinate_config_west_0 = 0x000081BC;
// 32-bit Stream Switch Subordinate Configuration North 0
const unsigned int shim_stream_switch_32b_subordinate_config_north_0 = 0x000081C0;
// 32-bit Stream Switch Subordinate Configuration East 0
const unsigned int shim_stream_switch_32b_subordinate_config_east_0 = 0x000081C4;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 0
const unsigned int shim_stream_switch_32b_subordinate_config_512b_switch_0 = 0x000081C8;
// 32-bit Stream Switch Subordinate Configuration PL 0
const unsigned int shim_stream_switch_32b_subordinate_config_pl_0 = 0x000081CC;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 0
const unsigned int shim_stream_switch_32b_subordinate_tile_ctrl_0_slot0 = 0x000081D0;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 0
const unsigned int shim_stream_switch_32b_subordinate_tile_ctrl_0_slot1 = 0x000081D4;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 0
const unsigned int shim_stream_switch_32b_subordinate_tile_ctrl_0_slot2 = 0x000081D8;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 0
const unsigned int shim_stream_switch_32b_subordinate_tile_ctrl_0_slot3 = 0x000081DC;
// 32-bit Stream Switch Subordinate Configuration Trace 0
const unsigned int shim_stream_switch_32b_subordinate_trace_0_slot0 = 0x000081E0;
// 32-bit Stream Switch Subordinate Configuration Trace 0
const unsigned int shim_stream_switch_32b_subordinate_trace_0_slot1 = 0x000081E4;
// 32-bit Stream Switch Subordinate Configuration Trace 0
const unsigned int shim_stream_switch_32b_subordinate_trace_0_slot2 = 0x000081E8;
// 32-bit Stream Switch Subordinate Configuration Trace 0
const unsigned int shim_stream_switch_32b_subordinate_trace_0_slot3 = 0x000081EC;
// 32-bit Stream Switch Subordinate Configuration uController 0
const unsigned int shim_stream_switch_32b_subordinate_ucontroller_0_slot0 = 0x000081F0;
// 32-bit Stream Switch Subordinate Configuration uController 0
const unsigned int shim_stream_switch_32b_subordinate_ucontroller_0_slot1 = 0x000081F4;
// 32-bit Stream Switch Subordinate Configuration uController 0
const unsigned int shim_stream_switch_32b_subordinate_ucontroller_0_slot2 = 0x000081F8;
// 32-bit Stream Switch Subordinate Configuration uController 0
const unsigned int shim_stream_switch_32b_subordinate_ucontroller_0_slot3 = 0x000081FC;
// 32-bit Stream Switch Subordinate Configuration West 0
const unsigned int shim_stream_switch_32b_subordinate_west_0_slot0 = 0x00008200;
// 32-bit Stream Switch Subordinate Configuration West 0
const unsigned int shim_stream_switch_32b_subordinate_west_0_slot1 = 0x00008204;
// 32-bit Stream Switch Subordinate Configuration West 0
const unsigned int shim_stream_switch_32b_subordinate_west_0_slot2 = 0x00008208;
// 32-bit Stream Switch Subordinate Configuration West 0
const unsigned int shim_stream_switch_32b_subordinate_west_0_slot3 = 0x0000820C;
// 32-bit Stream Switch Subordinate Configuration North 0
const unsigned int shim_stream_switch_32b_subordinate_north_0_slot0 = 0x00008210;
// 32-bit Stream Switch Subordinate Configuration North 0
const unsigned int shim_stream_switch_32b_subordinate_north_0_slot1 = 0x00008214;
// 32-bit Stream Switch Subordinate Configuration North 0
const unsigned int shim_stream_switch_32b_subordinate_north_0_slot2 = 0x00008218;
// 32-bit Stream Switch Subordinate Configuration North 0
const unsigned int shim_stream_switch_32b_subordinate_north_0_slot3 = 0x0000821C;
// 32-bit Stream Switch Subordinate Configuration East 0
const unsigned int shim_stream_switch_32b_subordinate_east_0_slot0 = 0x00008220;
// 32-bit Stream Switch Subordinate Configuration East 0
const unsigned int shim_stream_switch_32b_subordinate_east_0_slot1 = 0x00008224;
// 32-bit Stream Switch Subordinate Configuration East 0
const unsigned int shim_stream_switch_32b_subordinate_east_0_slot2 = 0x00008228;
// 32-bit Stream Switch Subordinate Configuration East 0
const unsigned int shim_stream_switch_32b_subordinate_east_0_slot3 = 0x0000822C;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 0
const unsigned int shim_stream_switch_32b_subordinate_512b_switch_0_slot0 = 0x00008230;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 0
const unsigned int shim_stream_switch_32b_subordinate_512b_switch_0_slot1 = 0x00008234;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 0
const unsigned int shim_stream_switch_32b_subordinate_512b_switch_0_slot2 = 0x00008238;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 0
const unsigned int shim_stream_switch_32b_subordinate_512b_switch_0_slot3 = 0x0000823C;
// 32-bit Stream Switch Subordinate Configuration PL 0
const unsigned int shim_stream_switch_32b_subordinate_pl_0_slot0 = 0x00008240;
// 32-bit Stream Switch Subordinate Configuration PL 0
const unsigned int shim_stream_switch_32b_subordinate_pl_0_slot1 = 0x00008244;
// 32-bit Stream Switch Subordinate Configuration PL 0
const unsigned int shim_stream_switch_32b_subordinate_pl_0_slot2 = 0x00008248;
// 32-bit Stream Switch Subordinate Configuration PL 0
const unsigned int shim_stream_switch_32b_subordinate_pl_0_slot3 = 0x0000824C;
// Stream Switch Ports 0-3 for event generation in switch A
const unsigned int shim_stream_switch_event_port_selection_a_0 = 0x00008250;
// Stream Switch Ports 4-7 for event generation in switch A
const unsigned int shim_stream_switch_event_port_selection_a_1 = 0x00008254;
// Status of control packet handling for application A
const unsigned int shim_control_packet_handler_status_a = 0x00008260;
// Performance Counters 7-6 Start and Stop Event
const unsigned int shim_performance_control3 = 0x00044000;
// Performance Counters 9-8 Start and Stop Event
const unsigned int shim_performance_control4 = 0x00044004;
// Performance Counters 11-10 Start and Stop Event
const unsigned int shim_performance_control5 = 0x00044008;
// Performance Counters 9-6 Reset Events
const unsigned int shim_performance_control8 = 0x0004400C;
// Performance Counters 11-10 Reset Events
const unsigned int shim_performance_control9 = 0x00044010;
// Performance Counter6
const unsigned int shim_performance_counter6 = 0x00044020;
// Performance Counter7
const unsigned int shim_performance_counter7 = 0x00044024;
// Performance Counter8
const unsigned int shim_performance_counter8 = 0x00044028;
// Performance Counter9
const unsigned int shim_performance_counter9 = 0x0004402C;
// Performance Counter10
const unsigned int shim_performance_counter10 = 0x00044030;
// Performance Counter11
const unsigned int shim_performance_counter11 = 0x00044034;
// Performance Counter6 Snapshot
const unsigned int shim_performance_counter6_snapshot = 0x00044040;
// Performance Counter7 Snapshot
const unsigned int shim_performance_counter7_snapshot = 0x00044044;
// Performance Counter8 Snapshot
const unsigned int shim_performance_counter8_snapshot = 0x00044048;
// Performance Counter9 Snapshot
const unsigned int shim_performance_counter9_snapshot = 0x0004404C;
// Performance Counter10 Snapshot
const unsigned int shim_performance_counter10_snapshot = 0x00044050;
// Performance Counter11 Snapshot
const unsigned int shim_performance_counter11_snapshot = 0x00044054;
// Performance Counter6 Event Value.
const unsigned int shim_performance_counter6_event_value = 0x00044060;
// Performance Counter7 Event Value.
const unsigned int shim_performance_counter7_event_value = 0x00044064;
// Performance Counter8 Event Value.
const unsigned int shim_performance_counter8_event_value = 0x00044068;
// Performance Counter9 Event Value.
const unsigned int shim_performance_counter9_event_value = 0x0004406C;
// Performance Counter10 Event Value.
const unsigned int shim_performance_counter10_event_value = 0x00044070;
// Performance Counter11 Event Value.
const unsigned int shim_performance_counter11_event_value = 0x00044074;
// Set performance counter snapshot load event for application B
const unsigned int shim_performance_counter_snapshots_load_event_b = 0x00044080;
// Control of Internal Timer B
const unsigned int shim_timer_b_control = 0x00044090;
// Internal Timer B Event Value.
const unsigned int shim_timer_b_trig_event_low_value = 0x00044094;
// Internal Timer B Event Value.
const unsigned int shim_timer_b_trig_event_high_value = 0x00044098;
// Generate an internal event in switch B
const unsigned int shim_event_generate_b = 0x000440A0;
// Control of which Internal Event to Broadcast0 in switch B
const unsigned int shim_event_broadcast_b_0 = 0x000440B0;
// Control of which Internal Event to Broadcast1 for switch B
const unsigned int shim_event_broadcast_b_1 = 0x000440B4;
// Control of which Internal Event to Broadcast2 for switch B
const unsigned int shim_event_broadcast_b_2 = 0x000440B8;
// Control of which Internal Event to Broadcast3 for switch B
const unsigned int shim_event_broadcast_b_3 = 0x000440BC;
// Control of which Internal Event to Broadcast4 for switch B
const unsigned int shim_event_broadcast_b_4 = 0x000440C0;
// Control of which Internal Event to Broadcast5 for switch B
const unsigned int shim_event_broadcast_b_5 = 0x000440C4;
// Control of which Internal Event to Broadcast6 for switch B
const unsigned int shim_event_broadcast_b_6 = 0x000440C8;
// Control of which Internal Event to Broadcast7 for switch B
const unsigned int shim_event_broadcast_b_7 = 0x000440CC;
// Control of which Internal Event to Broadcast8 for switch B
const unsigned int shim_event_broadcast_b_8 = 0x000440D0;
// Control of which Internal Event to Broadcast9 for switch B
const unsigned int shim_event_broadcast_b_9 = 0x000440D4;
// Control of which Internal Event to Broadcast10 for switch B
const unsigned int shim_event_broadcast_b_10 = 0x000440D8;
// Control of which Internal Event to Broadcast11 for switch B
const unsigned int shim_event_broadcast_b_11 = 0x000440DC;
// Control of which Internal Event to Broadcast12 for switch B
const unsigned int shim_event_broadcast_b_12 = 0x000440E0;
// Control of which Internal Event to Broadcast13 for switch B
const unsigned int shim_event_broadcast_b_13 = 0x000440E4;
// Control of which Internal Event to Broadcast14 for switch B
const unsigned int shim_event_broadcast_b_14 = 0x000440E8;
// Control of which Internal Event to Broadcast15 for switch B
const unsigned int shim_event_broadcast_b_15 = 0x000440EC;
// Set block of broadcast signals to South in switch B
const unsigned int shim_event_broadcast_b_block_south_set = 0x000440F0;
// Clear block of broadcast signals to South in switch B
const unsigned int shim_event_broadcast_b_block_south_clr = 0x000440F4;
// Current value of block for broadcast signals to South in switch B
const unsigned int shim_event_broadcast_b_block_south_value = 0x000440F8;
// Set block of broadcast switch A signals to North in switch B
const unsigned int shim_event_broadcast_b_block_north_set = 0x00044108;
// Clear block of broadcast switch A signals to North in switch B
const unsigned int shim_event_broadcast_b_block_north_clr = 0x0004410C;
// Current value of block for broadcast switch A signals to North in switch B
const unsigned int shim_event_broadcast_b_block_north_value = 0x00044110;
// Control of Trace B
const unsigned int shim_trace_b_control0 = 0x00044120;
// Control of Trace B: packet configuration
const unsigned int shim_trace_b_control1 = 0x00044124;
// Status of trace engine B
const unsigned int shim_trace_b_status = 0x00044128;
// Control of which Internal Event to Trace B
const unsigned int shim_trace_b_event0 = 0x00044130;
// Control of which Internal Event to Trace B
const unsigned int shim_trace_b_event1 = 0x00044134;
// Internal Timer B Low part Value.
const unsigned int shim_timer_b_low = 0x00044140;
// Internal Timer B High part Value.
const unsigned int shim_timer_b_high = 0x00044144;
// Internal event status register0 application B
const unsigned int shim_event_status_b_0 = 0x00044150;
// Internal event status register1 application B
const unsigned int shim_event_status_b_1 = 0x00044154;
// Internal event status register2 application B
const unsigned int shim_event_status_b_2 = 0x00044158;
// Internal event status register3 application B
const unsigned int shim_event_status_b_3 = 0x0004415C;
// Internal event status register4 application B
const unsigned int shim_event_status_b_4 = 0x00044160;
// Internal event status register5 application B
const unsigned int shim_event_status_b_5 = 0x00044164;
// Internal event status register6 application B
const unsigned int shim_event_status_b_6 = 0x00044168;
// Internal event status register7 application B
const unsigned int shim_event_status_b_7 = 0x0004416C;
// Combo events input events A-D application B
const unsigned int shim_combo_event_inputs0_b = 0x00044170;
// Combo events input events E-H application B
const unsigned int shim_combo_event_inputs1_b = 0x00044174;
// Combo events control bits for combo 0-2 application B
const unsigned int shim_combo_event_control2_b = 0x00044178;
// Combo events control bits for combo 4-6 application B
const unsigned int shim_combo_event_control3_b = 0x0004417C;
// Configuration for edge detection events 0-1 application B
const unsigned int shim_edge_detection_event_control0_b = 0x00044180;
// Configuration for edge detection events 2-3 application B
const unsigned int shim_edge_detection_event_control1_b = 0x00044184;
// Configuration for edge detection events 4-5 application B
const unsigned int shim_edge_detection_event_control2_b = 0x00044188;
// Configuration for edge detection events 6-7 application B
const unsigned int shim_edge_detection_event_control3_b = 0x0004418C;
// Event enable for Group 0 application B
const unsigned int shim_event_group_0_enable_b = 0x00044190;
// Event enable 0 for DMA Activity Group application B
const unsigned int shim_event_group_dma_activity_enable_0_b = 0x00044194;
// Event enable 1 for DMA Activity Group application B
const unsigned int shim_event_group_dma_activity_enable_1_b = 0x00044198;
// Event enable for uC-DMA Activity group application B
const unsigned int shim_event_group_uc_dma_activity_enable_b = 0x0004419C;
// Event enable for NoC Module 0 Lock group application B
const unsigned int shim_event_group_lock_enable_b = 0x000441A0;
// Event enable for Errors group application B
const unsigned int shim_event_group_errors_enable_b = 0x000441A4;
// Event enable for Stream Switch group application B
const unsigned int shim_event_group_stream_switch_enable_b = 0x000441A8;
// Event enable for uC-Core Program Flow group application B
const unsigned int shim_event_group_uc_core_program_flow_enable_b = 0x000441AC;
// Event enable for uC-Core PC and status event group application B
const unsigned int shim_event_group_uc_core_pc_status_event_enable_b = 0x000441B0;
// Event enable for Broadcast A group application B
const unsigned int shim_event_group_broadcast_enable_b = 0x000441B4;
// uC-Core B Interrupt Event Action
const unsigned int shim_uc_core_b_interrupt_event = 0x000441C0;
// Latching status bits for AXI-MM NSU errors for requests from application B (captured by NSU_Error event)
const unsigned int shim_nsu_errors_b = 0x000441D0;
// Spare register for application B
const unsigned int shim_spare_reg_b = 0x000441F0;
// Stream Switch Manager Configuration DMA 2
const unsigned int shim_stream_switch_manager_config_dma_2 = 0x00048000;
// Stream Switch Manager Configuration DMA 3
const unsigned int shim_stream_switch_manager_config_dma_3 = 0x00048004;
// Stream Switch Manager Configuration FIFO 1
const unsigned int shim_stream_switch_manager_config_fifo_1 = 0x00048008;
// Stream Switch Manager Configuration PL 3
const unsigned int shim_stream_switch_manager_config_pl_3 = 0x0004800C;
// Stream Switch Manager Configuration PL 4
const unsigned int shim_stream_switch_manager_config_pl_4 = 0x00048010;
// Stream Switch Manager Configuration PL 5
const unsigned int shim_stream_switch_manager_config_pl_5 = 0x00048014;
// Stream Switch Manager Configuration West 2
const unsigned int shim_stream_switch_manager_config_west_2 = 0x00048018;
// Stream Switch Manager Configuration West 3
const unsigned int shim_stream_switch_manager_config_west_3 = 0x0004801C;
// Stream Switch Manager Configuration North 2
const unsigned int shim_stream_switch_manager_config_north_2 = 0x00048020;
// Stream Switch Manager Configuration North 3
const unsigned int shim_stream_switch_manager_config_north_3 = 0x00048024;
// Stream Switch Manager Configuration North Y
const unsigned int shim_stream_switch_manager_config_north_y = 0x00048028;
// Stream Switch Manager Configuration East 2
const unsigned int shim_stream_switch_manager_config_east_2 = 0x0004802C;
// Stream Switch Manager Configuration East 3
const unsigned int shim_stream_switch_manager_config_east_3 = 0x00048030;
// Stream Switch Manager Configuration North_Control 1
const unsigned int shim_stream_switch_manager_config_north_control_1 = 0x00048034;
// Stream Switch Manager Configuration Tile Ctrl 1
const unsigned int shim_stream_switch_manager_config_tile_ctrl_1 = 0x00048038;
// Stream Switch Manager Configuration 32b_Switch 1
const unsigned int shim_stream_switch_manager_config_32b_switch_1 = 0x0004803C;
// Stream Switch Subordinate Configuration DMA 2
const unsigned int shim_stream_switch_subordinate_config_dma_2 = 0x00048040;
// Stream Switch Subordinate Configuration DMA 3
const unsigned int shim_stream_switch_subordinate_config_dma_3 = 0x00048044;
// Stream Switch Subordinate Configuration FIFO 1
const unsigned int shim_stream_switch_subordinate_config_fifo_1 = 0x00048048;
// Stream Switch Subordinate Configuration PL 4
const unsigned int shim_stream_switch_subordinate_config_pl_4 = 0x0004804C;
// Stream Switch Subordinate Configuration PL 5
const unsigned int shim_stream_switch_subordinate_config_pl_5 = 0x00048050;
// Stream Switch Subordinate Configuration PL 6
const unsigned int shim_stream_switch_subordinate_config_pl_6 = 0x00048054;
// Stream Switch Subordinate Configuration PL 7
const unsigned int shim_stream_switch_subordinate_config_pl_7 = 0x00048058;
// Stream Switch Subordinate Configuration West 2
const unsigned int shim_stream_switch_subordinate_config_west_2 = 0x0004805C;
// Stream Switch Subordinate Configuration West 3
const unsigned int shim_stream_switch_subordinate_config_west_3 = 0x00048060;
// Stream Switch Subordinate Configuration North 2
const unsigned int shim_stream_switch_subordinate_config_north_2 = 0x00048064;
// Stream Switch Subordinate Configuration North 3
const unsigned int shim_stream_switch_subordinate_config_north_3 = 0x00048068;
// Stream Switch Subordinate Configuration East 2
const unsigned int shim_stream_switch_subordinate_config_east_2 = 0x0004806C;
// Stream Switch Subordinate Configuration East 3
const unsigned int shim_stream_switch_subordinate_config_east_3 = 0x00048070;
// Stream Switch Subordinate Configuration DMA_Control 1
const unsigned int shim_stream_switch_subordinate_config_dma_control_1 = 0x00048074;
// Stream Switch Subordinate Configuration 32b_Switch 1
const unsigned int shim_stream_switch_subordinate_config_32b_switch_1 = 0x00048078;
// Stream Switch Subordinate Configuration DMA 2
const unsigned int shim_stream_switch_subordinate_dma_2_slot0 = 0x00048080;
// Stream Switch Subordinate Configuration DMA 2
const unsigned int shim_stream_switch_subordinate_dma_2_slot1 = 0x00048084;
// Stream Switch Subordinate Configuration DMA 2
const unsigned int shim_stream_switch_subordinate_dma_2_slot2 = 0x00048088;
// Stream Switch Subordinate Configuration DMA 2
const unsigned int shim_stream_switch_subordinate_dma_2_slot3 = 0x0004808C;
// Stream Switch Subordinate Configuration DMA 3
const unsigned int shim_stream_switch_subordinate_dma_3_slot0 = 0x00048090;
// Stream Switch Subordinate Configuration DMA 3
const unsigned int shim_stream_switch_subordinate_dma_3_slot1 = 0x00048094;
// Stream Switch Subordinate Configuration DMA 3
const unsigned int shim_stream_switch_subordinate_dma_3_slot2 = 0x00048098;
// Stream Switch Subordinate Configuration DMA 3
const unsigned int shim_stream_switch_subordinate_dma_3_slot3 = 0x0004809C;
// Stream Switch Subordinate Configuration FIFO 1
const unsigned int shim_stream_switch_subordinate_fifo_1_slot0 = 0x000480A0;
// Stream Switch Subordinate Configuration FIFO 1
const unsigned int shim_stream_switch_subordinate_fifo_1_slot1 = 0x000480A4;
// Stream Switch Subordinate Configuration FIFO 1
const unsigned int shim_stream_switch_subordinate_fifo_1_slot2 = 0x000480A8;
// Stream Switch Subordinate Configuration FIFO 1
const unsigned int shim_stream_switch_subordinate_fifo_1_slot3 = 0x000480AC;
// Stream Switch Subordinate Configuration PL 4
const unsigned int shim_stream_switch_subordinate_pl_4_slot0 = 0x000480B0;
// Stream Switch Subordinate Configuration PL 4
const unsigned int shim_stream_switch_subordinate_pl_4_slot1 = 0x000480B4;
// Stream Switch Subordinate Configuration PL 4
const unsigned int shim_stream_switch_subordinate_pl_4_slot2 = 0x000480B8;
// Stream Switch Subordinate Configuration PL 4
const unsigned int shim_stream_switch_subordinate_pl_4_slot3 = 0x000480BC;
// Stream Switch Subordinate Configuration PL 5
const unsigned int shim_stream_switch_subordinate_pl_5_slot0 = 0x000480C0;
// Stream Switch Subordinate Configuration PL 5
const unsigned int shim_stream_switch_subordinate_pl_5_slot1 = 0x000480C4;
// Stream Switch Subordinate Configuration PL 5
const unsigned int shim_stream_switch_subordinate_pl_5_slot2 = 0x000480C8;
// Stream Switch Subordinate Configuration PL 5
const unsigned int shim_stream_switch_subordinate_pl_5_slot3 = 0x000480CC;
// Stream Switch Subordinate Configuration PL 6
const unsigned int shim_stream_switch_subordinate_pl_6_slot0 = 0x000480D0;
// Stream Switch Subordinate Configuration PL 6
const unsigned int shim_stream_switch_subordinate_pl_6_slot1 = 0x000480D4;
// Stream Switch Subordinate Configuration PL 6
const unsigned int shim_stream_switch_subordinate_pl_6_slot2 = 0x000480D8;
// Stream Switch Subordinate Configuration PL 6
const unsigned int shim_stream_switch_subordinate_pl_6_slot3 = 0x000480DC;
// Stream Switch Subordinate Configuration PL 7
const unsigned int shim_stream_switch_subordinate_pl_7_slot0 = 0x000480E0;
// Stream Switch Subordinate Configuration PL 7
const unsigned int shim_stream_switch_subordinate_pl_7_slot1 = 0x000480E4;
// Stream Switch Subordinate Configuration PL 7
const unsigned int shim_stream_switch_subordinate_pl_7_slot2 = 0x000480E8;
// Stream Switch Subordinate Configuration PL 7
const unsigned int shim_stream_switch_subordinate_pl_7_slot3 = 0x000480EC;
// Stream Switch Subordinate Configuration West 2
const unsigned int shim_stream_switch_subordinate_west_2_slot0 = 0x000480F0;
// Stream Switch Subordinate Configuration West 2
const unsigned int shim_stream_switch_subordinate_west_2_slot1 = 0x000480F4;
// Stream Switch Subordinate Configuration West 2
const unsigned int shim_stream_switch_subordinate_west_2_slot2 = 0x000480F8;
// Stream Switch Subordinate Configuration West 2
const unsigned int shim_stream_switch_subordinate_west_2_slot3 = 0x000480FC;
// Stream Switch Subordinate Configuration West 3
const unsigned int shim_stream_switch_subordinate_west_3_slot0 = 0x00048100;
// Stream Switch Subordinate Configuration West 3
const unsigned int shim_stream_switch_subordinate_west_3_slot1 = 0x00048104;
// Stream Switch Subordinate Configuration West 3
const unsigned int shim_stream_switch_subordinate_west_3_slot2 = 0x00048108;
// Stream Switch Subordinate Configuration West 3
const unsigned int shim_stream_switch_subordinate_west_3_slot3 = 0x0004810C;
// Stream Switch Subordinate Configuration North 2
const unsigned int shim_stream_switch_subordinate_north_2_slot0 = 0x00048110;
// Stream Switch Subordinate Configuration North 2
const unsigned int shim_stream_switch_subordinate_north_2_slot1 = 0x00048114;
// Stream Switch Subordinate Configuration North 2
const unsigned int shim_stream_switch_subordinate_north_2_slot2 = 0x00048118;
// Stream Switch Subordinate Configuration North 2
const unsigned int shim_stream_switch_subordinate_north_2_slot3 = 0x0004811C;
// Stream Switch Subordinate Configuration North 3
const unsigned int shim_stream_switch_subordinate_north_3_slot0 = 0x00048120;
// Stream Switch Subordinate Configuration North 3
const unsigned int shim_stream_switch_subordinate_north_3_slot1 = 0x00048124;
// Stream Switch Subordinate Configuration North 3
const unsigned int shim_stream_switch_subordinate_north_3_slot2 = 0x00048128;
// Stream Switch Subordinate Configuration North 3
const unsigned int shim_stream_switch_subordinate_north_3_slot3 = 0x0004812C;
// Stream Switch Subordinate Configuration East 2
const unsigned int shim_stream_switch_subordinate_east_2_slot0 = 0x00048130;
// Stream Switch Subordinate Configuration East 2
const unsigned int shim_stream_switch_subordinate_east_2_slot1 = 0x00048134;
// Stream Switch Subordinate Configuration East 2
const unsigned int shim_stream_switch_subordinate_east_2_slot2 = 0x00048138;
// Stream Switch Subordinate Configuration East 2
const unsigned int shim_stream_switch_subordinate_east_2_slot3 = 0x0004813C;
// Stream Switch Subordinate Configuration East 3
const unsigned int shim_stream_switch_subordinate_east_3_slot0 = 0x00048140;
// Stream Switch Subordinate Configuration East 3
const unsigned int shim_stream_switch_subordinate_east_3_slot1 = 0x00048144;
// Stream Switch Subordinate Configuration East 3
const unsigned int shim_stream_switch_subordinate_east_3_slot2 = 0x00048148;
// Stream Switch Subordinate Configuration East 3
const unsigned int shim_stream_switch_subordinate_east_3_slot3 = 0x0004814C;
// Stream Switch Subordinate Configuration DMA_Control 1
const unsigned int shim_stream_switch_subordinate_dma_control_1_slot0 = 0x00048150;
// Stream Switch Subordinate Configuration DMA_Control 1
const unsigned int shim_stream_switch_subordinate_dma_control_1_slot1 = 0x00048154;
// Stream Switch Subordinate Configuration DMA_Control 1
const unsigned int shim_stream_switch_subordinate_dma_control_1_slot2 = 0x00048158;
// Stream Switch Subordinate Configuration DMA_Control 1
const unsigned int shim_stream_switch_subordinate_dma_control_1_slot3 = 0x0004815C;
// Stream Switch Subordinate Configuration 32b_Switch 1
const unsigned int shim_stream_switch_subordinate_32b_switch_1_slot0 = 0x00048160;
// Stream Switch Subordinate Configuration 32b_Switch 1
const unsigned int shim_stream_switch_subordinate_32b_switch_1_slot1 = 0x00048164;
// Stream Switch Subordinate Configuration 32b_Switch 1
const unsigned int shim_stream_switch_subordinate_32b_switch_1_slot2 = 0x00048168;
// Stream Switch Subordinate Configuration 32b_Switch 1
const unsigned int shim_stream_switch_subordinate_32b_switch_1_slot3 = 0x0004816C;
// Stream Switch Deterministic Merge Arbiter:4 Subordinate:0,1
const unsigned int shim_stream_switch_deterministic_merge_arb4_subordinate0_1 = 0x00048170;
// Stream Switch Deterministic Merge Arbiter:4 Subordinate:2,3
const unsigned int shim_stream_switch_deterministic_merge_arb4_subordinate2_3 = 0x00048174;
// Stream Switch Deterministic Merge Arbiter:4 Control
const unsigned int shim_stream_switch_deterministic_merge_arb4_ctrl = 0x00048178;
// Stream Switch Deterministic Merge Arbiter:5 Subordinate:0,1
const unsigned int shim_stream_switch_deterministic_merge_arb5_subordinate0_1 = 0x0004817C;
// Stream Switch Deterministic Merge Arbiter:5 Subordinate:2,3
const unsigned int shim_stream_switch_deterministic_merge_arb5_subordinate2_3 = 0x00048180;
// Stream Switch Deterministic Merge Arbiter:5 Control
const unsigned int shim_stream_switch_deterministic_merge_arb5_ctrl = 0x00048184;
// 32-bit Stream Switch Manager Configuration uController 1
const unsigned int shim_stream_switch_32b_manager_config_ucontroller_1 = 0x00048190;
// 32-bit Stream Switch Manager Configuration North 1
const unsigned int shim_stream_switch_32b_manager_config_north_1 = 0x00048198;
// 32-bit Stream Switch Manager Configuration 512-bit Switch 1
const unsigned int shim_stream_switch_32b_manager_config_512b_switch_1 = 0x000481A0;
// 32-bit Stream Switch Manager Configuration PL 1
const unsigned int shim_stream_switch_32b_manager_config_pl_1 = 0x000481A4;
// 32-bit Stream Switch Manager Configuration Tile Ctrl 1 (to be removed)
const unsigned int shim_stream_switch_32b_manager_config_tile_ctrl_1 = 0x000481A8;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 1
const unsigned int shim_stream_switch_32b_subordinate_config_tile_ctrl_1 = 0x000481B0;
// 32-bit Stream Switch Subordinate Configuration Trace 1
const unsigned int shim_stream_switch_32b_subordinate_config_trace_1 = 0x000481B4;
// 32-bit Stream Switch Subordinate Configuration uController 1
const unsigned int shim_stream_switch_32b_subordinate_config_ucontroller_1 = 0x000481B8;
// 32-bit Stream Switch Subordinate Configuration North 1
const unsigned int shim_stream_switch_32b_subordinate_config_north_1 = 0x000481C0;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 1
const unsigned int shim_stream_switch_32b_subordinate_config_512b_switch_1 = 0x000481C8;
// 32-bit Stream Switch Subordinate Configuration PL 1
const unsigned int shim_stream_switch_32b_subordinate_config_pl_1 = 0x000481CC;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 1
const unsigned int shim_stream_switch_32b_subordinate_tile_ctrl_1_slot0 = 0x000481D0;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 1
const unsigned int shim_stream_switch_32b_subordinate_tile_ctrl_1_slot1 = 0x000481D4;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 1
const unsigned int shim_stream_switch_32b_subordinate_tile_ctrl_1_slot2 = 0x000481D8;
// 32-bit Stream Switch Subordinate Configuration Tile Ctrl 1
const unsigned int shim_stream_switch_32b_subordinate_tile_ctrl_1_slot3 = 0x000481DC;
// 32-bit Stream Switch Subordinate Configuration Trace 1
const unsigned int shim_stream_switch_32b_subordinate_trace_1_slot0 = 0x000481E0;
// 32-bit Stream Switch Subordinate Configuration Trace 1
const unsigned int shim_stream_switch_32b_subordinate_trace_1_slot1 = 0x000481E4;
// 32-bit Stream Switch Subordinate Configuration Trace 1
const unsigned int shim_stream_switch_32b_subordinate_trace_1_slot2 = 0x000481E8;
// 32-bit Stream Switch Subordinate Configuration Trace 1
const unsigned int shim_stream_switch_32b_subordinate_trace_1_slot3 = 0x000481EC;
// 32-bit Stream Switch Subordinate Configuration uController 1
const unsigned int shim_stream_switch_32b_subordinate_ucontroller_1_slot0 = 0x000481F0;
// 32-bit Stream Switch Subordinate Configuration uController 1
const unsigned int shim_stream_switch_32b_subordinate_ucontroller_1_slot1 = 0x000481F4;
// 32-bit Stream Switch Subordinate Configuration uController 1
const unsigned int shim_stream_switch_32b_subordinate_ucontroller_1_slot2 = 0x000481F8;
// 32-bit Stream Switch Subordinate Configuration uController 1
const unsigned int shim_stream_switch_32b_subordinate_ucontroller_1_slot3 = 0x000481FC;
// 32-bit Stream Switch Subordinate Configuration North 1
const unsigned int shim_stream_switch_32b_subordinate_north_1_slot0 = 0x00048210;
// 32-bit Stream Switch Subordinate Configuration North 1
const unsigned int shim_stream_switch_32b_subordinate_north_1_slot1 = 0x00048214;
// 32-bit Stream Switch Subordinate Configuration North 1
const unsigned int shim_stream_switch_32b_subordinate_north_1_slot2 = 0x00048218;
// 32-bit Stream Switch Subordinate Configuration North 1
const unsigned int shim_stream_switch_32b_subordinate_north_1_slot3 = 0x0004821C;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 1
const unsigned int shim_stream_switch_32b_subordinate_512b_switch_1_slot0 = 0x00048230;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 1
const unsigned int shim_stream_switch_32b_subordinate_512b_switch_1_slot1 = 0x00048234;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 1
const unsigned int shim_stream_switch_32b_subordinate_512b_switch_1_slot2 = 0x00048238;
// 32-bit Stream Switch Subordinate Configuration 512-bit Switch 1
const unsigned int shim_stream_switch_32b_subordinate_512b_switch_1_slot3 = 0x0004823C;
// 32-bit Stream Switch Subordinate Configuration PL 1
const unsigned int shim_stream_switch_32b_subordinate_pl_1_slot0 = 0x00048240;
// 32-bit Stream Switch Subordinate Configuration PL 1
const unsigned int shim_stream_switch_32b_subordinate_pl_1_slot1 = 0x00048244;
// 32-bit Stream Switch Subordinate Configuration PL 1
const unsigned int shim_stream_switch_32b_subordinate_pl_1_slot2 = 0x00048248;
// 32-bit Stream Switch Subordinate Configuration PL 1
const unsigned int shim_stream_switch_32b_subordinate_pl_1_slot3 = 0x0004824C;
// Stream Switch Ports 0-3 for event generation in switch B
const unsigned int shim_stream_switch_event_port_selection_b_0 = 0x00048250;
// Stream Switch Ports 4-7 for event generation in switch B
const unsigned int shim_stream_switch_event_port_selection_b_1 = 0x00048254;
// Status of control packet handling for application B
const unsigned int shim_control_packet_handler_status_b = 0x00048260;
// BISR cache control (privileged) (TMR protection)
const unsigned int shim_bisr_cache_ctrl = 0x000E0000;
// BISR cache status (privileged)
const unsigned int shim_bisr_cache_status = 0x000E0004;
// BISR cache data (privileged)
const unsigned int shim_bisr_cache_data0 = 0x000E0008;
// BISR cache data (privileged)
const unsigned int shim_bisr_cache_data1 = 0x000E000C;
// BISR cache data (privileged)
const unsigned int shim_bisr_cache_data2 = 0x000E0010;
// BISR cache data (privileged)
const unsigned int shim_bisr_cache_data3 = 0x000E0014;
// BISR cache data (privileged)
const unsigned int shim_bisr_cache_data4 = 0x000E0018;
// BISR cache data (privileged)
const unsigned int shim_bisr_cache_data5 = 0x000E001C;
// BISR cache data (privileged)
const unsigned int shim_bisr_cache_data6 = 0x000E0020;
// BISR cache data (privileged)
const unsigned int shim_bisr_cache_data7 = 0x000E0024;
// BISR test data (privileged)
const unsigned int shim_bisr_test_data0 = 0x000E0028;
// BISR test data (privileged)
const unsigned int shim_bisr_test_data1 = 0x000E002C;
// BISR test data (privileged)
const unsigned int shim_bisr_test_data2 = 0x000E0030;
// BISR test data (privileged)
const unsigned int shim_bisr_test_data3 = 0x000E0034;
// BISR test data (privileged)
const unsigned int shim_bisr_test_data4 = 0x000E0038;
// BISR test data (privileged)
const unsigned int shim_bisr_test_data5 = 0x000E003C;
// BISR test data (privileged)
const unsigned int shim_bisr_test_data6 = 0x000E0040;
// BISR test data (privileged)
const unsigned int shim_bisr_test_data7 = 0x000E0044;
// Status bits for Parity errors on stream switch ports (error on any 32-bit word) (privileged)
const unsigned int shim_stream_switch_parity_status = 0x000E0050;
// Status bits for Parity errors on 32-bit stream switch ports (privileged)
const unsigned int shim_stream_switch_32b_parity_status = 0x000E0054;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int shim_stream_switch_parity_injection_0 = 0x000E0058;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int shim_stream_switch_parity_injection_1 = 0x000E005C;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int shim_stream_switch_parity_injection_2 = 0x000E0060;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int shim_stream_switch_parity_injection_3 = 0x000E0064;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int shim_stream_switch_parity_injection_4 = 0x000E0068;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int shim_stream_switch_parity_injection_5 = 0x000E006C;
// Injection of Parity errors on stream switch ports (privileged)
const unsigned int shim_stream_switch_parity_injection_6 = 0x000E0070;
// Injection of Parity errors on 32-bit stream switch ports (privileged)
const unsigned int shim_stream_switch_32b_parity_injection = 0x000E0074;
// Control clock gating of modules (privileged)
const unsigned int shim_module_clock_control_0 = 0x000E0080;
// Control clock gating of modules (privileged)
const unsigned int shim_module_clock_control_1 = 0x000E0084;
// Software override of medium-grained clock gating (privileged)
const unsigned int shim_medium_grained_clock_gating_control = 0x000E0088;
// Control of global clock gating (privileged) (TMR protection)
const unsigned int shim_column_clock_control = 0x000E0090;
// Application reset (privileged) (TMR protection)
const unsigned int shim_application_reset_control = 0x000E00A0;
// Application reset with hardware-assisted clock control (privileged) (TMR protection)
const unsigned int shim_application_reset_control_hw_clk_stop = 0x000E00A4;
// Delay between clock stop and clock resume during hardware-assisted application reset (privileged)
const unsigned int shim_reset_clk_stop_cycles = 0x000E00A8;
// Spare register (privileged)
const unsigned int shim_spare_reg_privileged = 0x000E00B0;
// Tile control register (Isolation) (privileged)
const unsigned int shim_tile_control = 0x000E00C0;
// Tile control register (AXI-MM Isolation) (privileged)
const unsigned int shim_tile_control_axi_mm = 0x000E00C4;
// Trigger for CSSD (privileged)
const unsigned int shim_cssd_trigger = 0x000E00D0;
// Interrupt controller hardware errors mask for application A (privileged)
const unsigned int shim_interrupt_controller_hw_error_mask_a = 0x000E00E0;
// Interrupt controller hardware errors mask for application B (privileged)
const unsigned int shim_interrupt_controller_hw_error_mask_b = 0x000E00E4;
// Interrupt controller hardware errors status register (not affected by mask) for application A (privileged)
const unsigned int shim_interrupt_controller_hw_error_status_a = 0x000E00E8;
// Interrupt controller hardware errors status register (not affected by mask) for application B (privileged)
const unsigned int shim_interrupt_controller_hw_error_status_b = 0x000E00EC;
// Interrupt controller hardware errors interrupt_out selection for application A (privileged)
const unsigned int shim_interrupt_controller_hw_error_interrupt_a = 0x000E00F0;
// Interrupt controller hardware errors interrupt_out selection for application B (privileged)
const unsigned int shim_interrupt_controller_hw_error_interrupt_b = 0x000E00F4;
// Single/two-application mode configuration (privileged)
const unsigned int shim_dual_app_mode = 0x000E0100;
// Address bit used to identify application for external AXI-MM requests (privileged)
const unsigned int shim_application_address_bit = 0x000E0104;
// Control of memory zeroization in uC-Module A (privileged)
const unsigned int shim_memory_zeroization_a = 0x000E0110;
// Control of memory zeroization in uC-Module B (privileged)
const unsigned int shim_memory_zeroization_b = 0x000E0114;
// Control of uC-PM, uC-Private-DM and uC-Core debug port privileged status in both uC-Modules (privileged)
const unsigned int shim_memory_privileged = 0x000E0120;
// uC-DM A and B ECC scrubbing period (privileged)
const unsigned int shim_memory_dm_ecc_scrubbing_period = 0x000E0130;
// Inhibits ECC check bits update to uC-DM A and B on writes (privileged)
const unsigned int shim_memory_dm_ecc_error_generation = 0x000E0140;
// uC-DMA A Pause (privileged)
const unsigned int shim_uc_dma_pause_a = 0x000E0150;
// uC-DMA B Pause (privileged)
const unsigned int shim_uc_dma_pause_b = 0x000E0154;
// Latching status bits for AXI-MM NSU errors for secure requests (captured by NSU_Error event in application A) (privileged)
const unsigned int shim_nsu_errors_physical = 0x000E0160;
// AXI-MM hang protection enable and timeout (opportunistic) (privileged)
const unsigned int shim_axi_mm_hang_protection_timeout = 0x000E0170;
// Enable Shim-DMA compression/decompression (privileged)
const unsigned int shim_compression_decompression_enable = 0x000E0180;
// uC-Core Program Memory (uC-PM) (32 kbyte)
const unsigned int shim_core_program_memory = 0x00020000;
// uC-Core private Data Memory (uC-private-DM) (16 kbyte)
const unsigned int shim_core_private_data_memory = 0x00028000;
// uC-Core status bits
const unsigned int shim_core_status = 0x0002C000;
// uC-Core control bits
const unsigned int shim_core_control = 0x0002C004;
// uC-Core external interrupts sticky bits
const unsigned int shim_core_interrupt_status = 0x0002C008;
// uC-Core AXI-MM errors sticky bits
const unsigned int shim_core_axi_mm_errors = 0x0002C00C;
// uC-Core PC_Event0
const unsigned int shim_core_pc_event0 = 0x0002C010;
// uC-Core PC_Event1
const unsigned int shim_core_pc_event1 = 0x0002C014;
// uC-Core PC_Event2
const unsigned int shim_core_pc_event2 = 0x0002C018;
// uC-Core PC_Event3
const unsigned int shim_core_pc_event3 = 0x0002C01C;
// uC-Core PC_Event4
const unsigned int shim_core_pc_event4 = 0x0002C020;
// uC-Core PC_Event5
const unsigned int shim_core_pc_event5 = 0x0002C024;
// AXI-MM address offset
const unsigned int shim_module_aximm_offset = 0x0002C030;
// DM2MM DMA Status
const unsigned int shim_dma_dm2mm_status = 0x0002C040;
// DM2MM DMA Control
const unsigned int shim_dma_dm2mm_control = 0x0002C044;
// DM2MM DMA External AXI Control
const unsigned int shim_dma_dm2mm_axi_control = 0x0002C048;
// MM2DM DMA Status
const unsigned int shim_dma_mm2dm_status = 0x0002C050;
// MM2DM DMA Control
const unsigned int shim_dma_mm2dm_control = 0x0002C054;
// MM2DM DMA External AXI Control
const unsigned int shim_dma_mm2dm_axi_control = 0x0002C058;
// Data memory shared between uC-Core and uC-DMAs of uC-Module (uC-DM) (32 kbyte)
const unsigned int shim_module_data_memory = 0x00030000;
// uC-Core debug register access control and status
const unsigned int shim_mdm_dbg_ctrl_status = 0x00038010;
// uC-Core debug register access data
const unsigned int shim_mdm_dbg_data = 0x00038014;
// uC-Core debug register access lock
const unsigned int shim_mdm_dbg_lock = 0x00038018;
// Microblaze Performance Counter Control
const unsigned int shim_mdm_pcctrlr = 0x0003D440;
// Microblaze Performance Counter Command
const unsigned int shim_mdm_pccmdr = 0x0003D480;
// Microblaze Performance Counter Status
const unsigned int shim_mdm_pcsr = 0x0003D4C0;
// Microblaze Performance Counter Data Read
const unsigned int shim_mdm_pcdrr = 0x0003D580;
// Microblaze Performance Counter Data Write
const unsigned int shim_mdm_pcwr = 0x0003D5C0;

// Register definitions for UC
// ###################################
// Base address of uC module A
const unsigned int uc_base_address_a = 0x00000000;
// Base address of uC module B
const unsigned int uc_base_address_b = 0x00040000;
// Debug register access control and status
const unsigned int uc_mdm_dbg_ctrl_status = 0x00038010;
// Debug register access data
const unsigned int uc_mdm_dbg_data = 0x00038014;
// Debug register access lock
const unsigned int uc_mdm_dbg_lock = 0x00038018;
// Microblaze Performance Counter Control
const unsigned int uc_mdm_pcctrlr = 0x0003d440;
// Microblaze Performance Counter Command
const unsigned int uc_mdm_pccmdr = 0x0003d480;
// Microblaze Performance Counter Status
const unsigned int uc_mdm_pcsr = 0x0003d4c0;
// Microblaze Performance Counter Data Read
const unsigned int uc_mdm_pcdrr = 0x0003d580;
// Microblaze Performance Counter Data Write
const unsigned int uc_mdm_pcwr = 0x0003d5c0;
// uC-Core status bits
const unsigned int uc_core_status = 0x0002c000;
// uC-Core control bits
const unsigned int uc_core_control = 0x0002c004;
// uC-Core external interrupts sticky bits
const unsigned int uc_core_interrupt_status = 0x0002c008;
// AXI-MM address offset
const unsigned int uc_module_aximm_offset = 0x0002c030;
// AXI-MM outstanding transactions monitors
const unsigned int uc_module_axi_mm_outstanding_transactions = 0x000e8060;
// Control of memory zeroization (module A)
const unsigned int uc_memory_zeroization_a = 0x000e0110;
// Control of memory zeroization (module B)
const unsigned int uc_memory_zeroization_b = 0x000e0114;
// Control of uC-PM, uC-Private-DM and uC-Core debug port privileged status (privileged)
const unsigned int uc_memory_privileged = 0x000e0120;
// uC-DM ECC scrubbing period (privileged)
const unsigned int uc_memory_dm_ecc_scrubbing_period = 0x000e0130;
// Inhibits ECC check bits update to uC-DM on writes (privileged)
const unsigned int uc_memory_dm_ecc_error_generation = 0x000e0140;
// MM2DM DMA Status
const unsigned int uc_dma_dm2mm_status = 0x0002c040;
// MM2DM DMA Control
const unsigned int uc_dma_dm2mm_control = 0x0002c044;
// MM2DM DMA External AXI Control
const unsigned int uc_dma_dm2mm_axi_control = 0x0002c048;
// DM2MM DMA Status
const unsigned int uc_dma_mm2dm_status = 0x0002c050;
// DM2MM DMA Control
const unsigned int uc_dma_mm2dm_control = 0x0002c054;
// DM2MM DMA External AXI Control
const unsigned int uc_dma_mm2dm_axi_control = 0x0002c058;
// DMA Pause (module A)
const unsigned int uc_dma_pause_a = 0x000e0150;
// DMA Pause (module B)
const unsigned int uc_dma_pause_b = 0x000e0154;

} // namespace npu3

#endif /* NPU3_REGISTERS_H_ */
