# TCL File Generated by Component Editor 16.1
# Sat Aug 03 12:23:18 MDT 2019
# DO NOT MODIFY


# 
# PWM "PWM" v1.0
#  2019.08.03.12:23:18
# PWM driver for the servo motor
# 

# 
# request TCL package from ACDS 16.1
# 
package require -exact qsys 16.1


# 
# module PWM
# 
set_module_property DESCRIPTION "PWM driver for the servo motor"
set_module_property NAME PWM
set_module_property VERSION 1.0
set_module_property INTERNAL false
set_module_property OPAQUE_ADDRESS_MAP true
set_module_property GROUP FingerPrint
set_module_property AUTHOR ""
set_module_property DISPLAY_NAME PWM
set_module_property INSTANTIATE_IN_SYSTEM_MODULE true
set_module_property EDITABLE true
set_module_property REPORT_TO_TALKBACK false
set_module_property ALLOW_GREYBOX_GENERATION false
set_module_property REPORT_HIERARCHY false


# 
# file sets
# 
add_fileset QUARTUS_SYNTH QUARTUS_SYNTH "" ""
set_fileset_property QUARTUS_SYNTH TOP_LEVEL PWM
set_fileset_property QUARTUS_SYNTH ENABLE_RELATIVE_INCLUDE_PATHS false
set_fileset_property QUARTUS_SYNTH ENABLE_FILE_OVERWRITE_MODE false
add_fileset_file PWM.v VERILOG PATH PWM.v TOP_LEVEL_FILE


# 
# parameters
# 


# 
# display items
# 


# 
# connection point clock
# 
add_interface clock clock end
set_interface_property clock clockRate 0
set_interface_property clock ENABLED true
set_interface_property clock EXPORT_OF ""
set_interface_property clock PORT_NAME_MAP ""
set_interface_property clock CMSIS_SVD_VARIABLES ""
set_interface_property clock SVD_ADDRESS_GROUP ""

add_interface_port clock fclk clk Input 1


# 
# connection point reset
# 
add_interface reset reset end
set_interface_property reset associatedClock clock
set_interface_property reset synchronousEdges DEASSERT
set_interface_property reset ENABLED true
set_interface_property reset EXPORT_OF ""
set_interface_property reset PORT_NAME_MAP ""
set_interface_property reset CMSIS_SVD_VARIABLES ""
set_interface_property reset SVD_ADDRESS_GROUP ""

add_interface_port reset resetn reset Input 1


# 
# connection point clock_source
# 
add_interface clock_source clock start
set_interface_property clock_source associatedDirectClock ""
set_interface_property clock_source clockRate 0
set_interface_property clock_source clockRateKnown false
set_interface_property clock_source ENABLED true
set_interface_property clock_source EXPORT_OF ""
set_interface_property clock_source PORT_NAME_MAP ""
set_interface_property clock_source CMSIS_SVD_VARIABLES ""
set_interface_property clock_source SVD_ADDRESS_GROUP ""

add_interface_port clock_source oPWM clk Output 1


# 
# connection point avalon_slave_1
# 
add_interface avalon_slave_1 avalon end
set_interface_property avalon_slave_1 addressUnits WORDS
set_interface_property avalon_slave_1 associatedClock ""
set_interface_property avalon_slave_1 associatedReset ""
set_interface_property avalon_slave_1 bitsPerSymbol 8
set_interface_property avalon_slave_1 burstOnBurstBoundariesOnly false
set_interface_property avalon_slave_1 burstcountUnits WORDS
set_interface_property avalon_slave_1 explicitAddressSpan 0
set_interface_property avalon_slave_1 holdTime 0
set_interface_property avalon_slave_1 linewrapBursts false
set_interface_property avalon_slave_1 maximumPendingReadTransactions 0
set_interface_property avalon_slave_1 maximumPendingWriteTransactions 0
set_interface_property avalon_slave_1 readLatency 0
set_interface_property avalon_slave_1 readWaitTime 1
set_interface_property avalon_slave_1 setupTime 0
set_interface_property avalon_slave_1 timingUnits Cycles
set_interface_property avalon_slave_1 writeWaitTime 0
set_interface_property avalon_slave_1 ENABLED true
set_interface_property avalon_slave_1 EXPORT_OF ""
set_interface_property avalon_slave_1 PORT_NAME_MAP ""
set_interface_property avalon_slave_1 CMSIS_SVD_VARIABLES ""
set_interface_property avalon_slave_1 SVD_ADDRESS_GROUP ""

add_interface_port avalon_slave_1 duty writedata Input 8
set_interface_assignment avalon_slave_1 embeddedsw.configuration.isFlash 0
set_interface_assignment avalon_slave_1 embeddedsw.configuration.isMemoryDevice 0
set_interface_assignment avalon_slave_1 embeddedsw.configuration.isNonVolatileStorage 0
set_interface_assignment avalon_slave_1 embeddedsw.configuration.isPrintableDevice 0

