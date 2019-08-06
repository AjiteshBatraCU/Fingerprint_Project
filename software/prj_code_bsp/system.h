/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu' in SOPC Builder design 'prj_processor'
 * SOPC Builder design path: ../../prj_processor.sopcinfo
 *
 * Generated: Mon Aug 05 19:30:36 MDT 2019
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * Buttons configuration
 *
 */

#define ALT_MODULE_CLASS_Buttons altera_avalon_pio
#define BUTTONS_BASE 0x41070
#define BUTTONS_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTONS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTONS_CAPTURE 0
#define BUTTONS_DATA_WIDTH 2
#define BUTTONS_DO_TEST_BENCH_WIRING 0
#define BUTTONS_DRIVEN_SIM_VALUE 0
#define BUTTONS_EDGE_TYPE "NONE"
#define BUTTONS_FREQ 50000000
#define BUTTONS_HAS_IN 1
#define BUTTONS_HAS_OUT 0
#define BUTTONS_HAS_TRI 0
#define BUTTONS_IRQ -1
#define BUTTONS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTONS_IRQ_TYPE "NONE"
#define BUTTONS_NAME "/dev/Buttons"
#define BUTTONS_RESET_VALUE 0
#define BUTTONS_SPAN 16
#define BUTTONS_TYPE "altera_avalon_pio"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00040820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x13
#define ALT_CPU_DCACHE_BYPASS_MASK 0x80000000
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 2048
#define ALT_CPU_EXCEPTION_ADDR 0x00020020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 512
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x13
#define ALT_CPU_NAME "cpu"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00020000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00040820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x13
#define NIOS2_DCACHE_BYPASS_MASK 0x80000000
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_EXCEPTION_ADDR 0x00020020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 512
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x13
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00020000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_UART
#define __ALTERA_NIOS2_GEN2


/*
 * HEX_0 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX_0 altera_avalon_pio
#define HEX_0_BASE 0x410c0
#define HEX_0_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_0_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_0_CAPTURE 0
#define HEX_0_DATA_WIDTH 8
#define HEX_0_DO_TEST_BENCH_WIRING 0
#define HEX_0_DRIVEN_SIM_VALUE 0
#define HEX_0_EDGE_TYPE "NONE"
#define HEX_0_FREQ 50000000
#define HEX_0_HAS_IN 0
#define HEX_0_HAS_OUT 1
#define HEX_0_HAS_TRI 0
#define HEX_0_IRQ -1
#define HEX_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_0_IRQ_TYPE "NONE"
#define HEX_0_NAME "/dev/HEX_0"
#define HEX_0_RESET_VALUE 0
#define HEX_0_SPAN 16
#define HEX_0_TYPE "altera_avalon_pio"


/*
 * HEX_1 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX_1 altera_avalon_pio
#define HEX_1_BASE 0x410b0
#define HEX_1_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_1_CAPTURE 0
#define HEX_1_DATA_WIDTH 8
#define HEX_1_DO_TEST_BENCH_WIRING 0
#define HEX_1_DRIVEN_SIM_VALUE 0
#define HEX_1_EDGE_TYPE "NONE"
#define HEX_1_FREQ 50000000
#define HEX_1_HAS_IN 0
#define HEX_1_HAS_OUT 1
#define HEX_1_HAS_TRI 0
#define HEX_1_IRQ -1
#define HEX_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_1_IRQ_TYPE "NONE"
#define HEX_1_NAME "/dev/HEX_1"
#define HEX_1_RESET_VALUE 0
#define HEX_1_SPAN 16
#define HEX_1_TYPE "altera_avalon_pio"


/*
 * HEX_2 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX_2 altera_avalon_pio
#define HEX_2_BASE 0x410a0
#define HEX_2_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_2_CAPTURE 0
#define HEX_2_DATA_WIDTH 8
#define HEX_2_DO_TEST_BENCH_WIRING 0
#define HEX_2_DRIVEN_SIM_VALUE 0
#define HEX_2_EDGE_TYPE "NONE"
#define HEX_2_FREQ 50000000
#define HEX_2_HAS_IN 0
#define HEX_2_HAS_OUT 1
#define HEX_2_HAS_TRI 0
#define HEX_2_IRQ -1
#define HEX_2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_2_IRQ_TYPE "NONE"
#define HEX_2_NAME "/dev/HEX_2"
#define HEX_2_RESET_VALUE 0
#define HEX_2_SPAN 16
#define HEX_2_TYPE "altera_avalon_pio"


/*
 * HEX_3 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX_3 altera_avalon_pio
#define HEX_3_BASE 0x41090
#define HEX_3_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_3_CAPTURE 0
#define HEX_3_DATA_WIDTH 8
#define HEX_3_DO_TEST_BENCH_WIRING 0
#define HEX_3_DRIVEN_SIM_VALUE 0
#define HEX_3_EDGE_TYPE "NONE"
#define HEX_3_FREQ 50000000
#define HEX_3_HAS_IN 0
#define HEX_3_HAS_OUT 1
#define HEX_3_HAS_TRI 0
#define HEX_3_IRQ -1
#define HEX_3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_3_IRQ_TYPE "NONE"
#define HEX_3_NAME "/dev/HEX_3"
#define HEX_3_RESET_VALUE 0
#define HEX_3_SPAN 16
#define HEX_3_TYPE "altera_avalon_pio"


/*
 * HEX_4 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX_4 altera_avalon_pio
#define HEX_4_BASE 0x410d0
#define HEX_4_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_4_CAPTURE 0
#define HEX_4_DATA_WIDTH 8
#define HEX_4_DO_TEST_BENCH_WIRING 0
#define HEX_4_DRIVEN_SIM_VALUE 0
#define HEX_4_EDGE_TYPE "NONE"
#define HEX_4_FREQ 50000000
#define HEX_4_HAS_IN 0
#define HEX_4_HAS_OUT 1
#define HEX_4_HAS_TRI 0
#define HEX_4_IRQ -1
#define HEX_4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_4_IRQ_TYPE "NONE"
#define HEX_4_NAME "/dev/HEX_4"
#define HEX_4_RESET_VALUE 0
#define HEX_4_SPAN 16
#define HEX_4_TYPE "altera_avalon_pio"


/*
 * HEX_5 configuration
 *
 */

#define ALT_MODULE_CLASS_HEX_5 altera_avalon_pio
#define HEX_5_BASE 0x410e0
#define HEX_5_BIT_CLEARING_EDGE_REGISTER 0
#define HEX_5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define HEX_5_CAPTURE 0
#define HEX_5_DATA_WIDTH 8
#define HEX_5_DO_TEST_BENCH_WIRING 0
#define HEX_5_DRIVEN_SIM_VALUE 0
#define HEX_5_EDGE_TYPE "NONE"
#define HEX_5_FREQ 50000000
#define HEX_5_HAS_IN 0
#define HEX_5_HAS_OUT 1
#define HEX_5_HAS_TRI 0
#define HEX_5_IRQ -1
#define HEX_5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define HEX_5_IRQ_TYPE "NONE"
#define HEX_5_NAME "/dev/HEX_5"
#define HEX_5_RESET_VALUE 0
#define HEX_5_SPAN 16
#define HEX_5_TYPE "altera_avalon_pio"


/*
 * LEDs configuration
 *
 */

#define ALT_MODULE_CLASS_LEDs altera_avalon_pio
#define LEDS_BASE 0x41080
#define LEDS_BIT_CLEARING_EDGE_REGISTER 0
#define LEDS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDS_CAPTURE 0
#define LEDS_DATA_WIDTH 10
#define LEDS_DO_TEST_BENCH_WIRING 0
#define LEDS_DRIVEN_SIM_VALUE 0
#define LEDS_EDGE_TYPE "NONE"
#define LEDS_FREQ 50000000
#define LEDS_HAS_IN 0
#define LEDS_HAS_OUT 1
#define LEDS_HAS_TRI 0
#define LEDS_IRQ -1
#define LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDS_IRQ_TYPE "NONE"
#define LEDS_NAME "/dev/LEDs"
#define LEDS_RESET_VALUE 0
#define LEDS_SPAN 16
#define LEDS_TYPE "altera_avalon_pio"


/*
 * PWM_control configuration
 *
 */

#define ALT_MODULE_CLASS_PWM_control altera_avalon_pio
#define PWM_CONTROL_BASE 0x410f0
#define PWM_CONTROL_BIT_CLEARING_EDGE_REGISTER 0
#define PWM_CONTROL_BIT_MODIFYING_OUTPUT_REGISTER 0
#define PWM_CONTROL_CAPTURE 0
#define PWM_CONTROL_DATA_WIDTH 8
#define PWM_CONTROL_DO_TEST_BENCH_WIRING 0
#define PWM_CONTROL_DRIVEN_SIM_VALUE 0
#define PWM_CONTROL_EDGE_TYPE "NONE"
#define PWM_CONTROL_FREQ 50000000
#define PWM_CONTROL_HAS_IN 0
#define PWM_CONTROL_HAS_OUT 1
#define PWM_CONTROL_HAS_TRI 0
#define PWM_CONTROL_IRQ -1
#define PWM_CONTROL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PWM_CONTROL_IRQ_TYPE "NONE"
#define PWM_CONTROL_NAME "/dev/PWM_control"
#define PWM_CONTROL_RESET_VALUE 0
#define PWM_CONTROL_SPAN 16
#define PWM_CONTROL_TYPE "altera_avalon_pio"


/*
 * Switches configuration
 *
 */

#define ALT_MODULE_CLASS_Switches altera_avalon_pio
#define SWITCHES_BASE 0x41060
#define SWITCHES_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCHES_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCHES_CAPTURE 0
#define SWITCHES_DATA_WIDTH 9
#define SWITCHES_DO_TEST_BENCH_WIRING 0
#define SWITCHES_DRIVEN_SIM_VALUE 0
#define SWITCHES_EDGE_TYPE "NONE"
#define SWITCHES_FREQ 50000000
#define SWITCHES_HAS_IN 1
#define SWITCHES_HAS_OUT 0
#define SWITCHES_HAS_TRI 0
#define SWITCHES_IRQ -1
#define SWITCHES_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCHES_IRQ_TYPE "NONE"
#define SWITCHES_NAME "/dev/Switches"
#define SWITCHES_RESET_VALUE 0
#define SWITCHES_SPAN 16
#define SWITCHES_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "MAX 10"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0x41108
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0x41108
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0x41108
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "prj_processor"


/*
 * fp1_control configuration
 *
 */

#define ALT_MODULE_CLASS_fp1_control altera_avalon_uart
#define FP1_CONTROL_BASE 0x41040
#define FP1_CONTROL_BAUD 57600
#define FP1_CONTROL_DATA_BITS 8
#define FP1_CONTROL_FIXED_BAUD 1
#define FP1_CONTROL_FREQ 50000000
#define FP1_CONTROL_IRQ 0
#define FP1_CONTROL_IRQ_INTERRUPT_CONTROLLER_ID 0
#define FP1_CONTROL_NAME "/dev/fp1_control"
#define FP1_CONTROL_PARITY 'N'
#define FP1_CONTROL_SIM_CHAR_STREAM ""
#define FP1_CONTROL_SIM_TRUE_BAUD 0
#define FP1_CONTROL_SPAN 32
#define FP1_CONTROL_STOP_BITS 2
#define FP1_CONTROL_SYNC_REG_DEPTH 2
#define FP1_CONTROL_TYPE "altera_avalon_uart"
#define FP1_CONTROL_USE_CTS_RTS 0
#define FP1_CONTROL_USE_EOP_REGISTER 0


/*
 * fp2_control configuration
 *
 */

#define ALT_MODULE_CLASS_fp2_control altera_avalon_uart
#define FP2_CONTROL_BASE 0x41020
#define FP2_CONTROL_BAUD 57600
#define FP2_CONTROL_DATA_BITS 8
#define FP2_CONTROL_FIXED_BAUD 1
#define FP2_CONTROL_FREQ 50000000
#define FP2_CONTROL_IRQ 1
#define FP2_CONTROL_IRQ_INTERRUPT_CONTROLLER_ID 0
#define FP2_CONTROL_NAME "/dev/fp2_control"
#define FP2_CONTROL_PARITY 'N'
#define FP2_CONTROL_SIM_CHAR_STREAM ""
#define FP2_CONTROL_SIM_TRUE_BAUD 0
#define FP2_CONTROL_SPAN 32
#define FP2_CONTROL_STOP_BITS 2
#define FP2_CONTROL_SYNC_REG_DEPTH 2
#define FP2_CONTROL_TYPE "altera_avalon_uart"
#define FP2_CONTROL_USE_CTS_RTS 0
#define FP2_CONTROL_USE_EOP_REGISTER 0


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK SYS_TIMER
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0x41108
#define JTAG_UART_IRQ 2
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * prog_mem configuration
 *
 */

#define ALT_MODULE_CLASS_prog_mem altera_avalon_onchip_memory2
#define PROG_MEM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define PROG_MEM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define PROG_MEM_BASE 0x20000
#define PROG_MEM_CONTENTS_INFO ""
#define PROG_MEM_DUAL_PORT 0
#define PROG_MEM_GUI_RAM_BLOCK_TYPE "AUTO"
#define PROG_MEM_INIT_CONTENTS_FILE "prj_processor_prog_mem"
#define PROG_MEM_INIT_MEM_CONTENT 0
#define PROG_MEM_INSTANCE_ID "NONE"
#define PROG_MEM_IRQ -1
#define PROG_MEM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define PROG_MEM_NAME "/dev/prog_mem"
#define PROG_MEM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define PROG_MEM_RAM_BLOCK_TYPE "AUTO"
#define PROG_MEM_READ_DURING_WRITE_MODE "DONT_CARE"
#define PROG_MEM_SINGLE_CLOCK_OP 0
#define PROG_MEM_SIZE_MULTIPLE 1
#define PROG_MEM_SIZE_VALUE 80000
#define PROG_MEM_SPAN 80000
#define PROG_MEM_TYPE "altera_avalon_onchip_memory2"
#define PROG_MEM_WRITABLE 1


/*
 * sys_timer configuration
 *
 */

#define ALT_MODULE_CLASS_sys_timer altera_avalon_timer
#define SYS_TIMER_ALWAYS_RUN 0
#define SYS_TIMER_BASE 0x41000
#define SYS_TIMER_COUNTER_SIZE 32
#define SYS_TIMER_FIXED_PERIOD 0
#define SYS_TIMER_FREQ 50000000
#define SYS_TIMER_IRQ 3
#define SYS_TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define SYS_TIMER_LOAD_VALUE 49999
#define SYS_TIMER_MULT 0.001
#define SYS_TIMER_NAME "/dev/sys_timer"
#define SYS_TIMER_PERIOD 1
#define SYS_TIMER_PERIOD_UNITS "ms"
#define SYS_TIMER_RESET_OUTPUT 0
#define SYS_TIMER_SNAPSHOT 1
#define SYS_TIMER_SPAN 32
#define SYS_TIMER_TICKS_PER_SEC 1000
#define SYS_TIMER_TIMEOUT_PULSE_OUTPUT 0
#define SYS_TIMER_TYPE "altera_avalon_timer"


/*
 * sysid configuration
 *
 */

#define ALT_MODULE_CLASS_sysid altera_avalon_sysid_qsys
#define SYSID_BASE 0x41100
#define SYSID_ID -749882561
#define SYSID_IRQ -1
#define SYSID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_NAME "/dev/sysid"
#define SYSID_SPAN 8
#define SYSID_TIMESTAMP 1565053868
#define SYSID_TYPE "altera_avalon_sysid_qsys"

#endif /* __SYSTEM_H_ */
