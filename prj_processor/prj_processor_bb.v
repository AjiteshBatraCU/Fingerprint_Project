
module prj_processor (
	clk_clk,
	fp1_rxd,
	fp1_txd,
	fp2_rxd,
	fp2_txd,
	pwm_control_export,
	reset_reset_n,
	switches_external_connection_export,
	buttons_external_connection_export,
	hex_0_external_connection_export,
	leds_external_connection_export,
	hex_1_external_connection_export,
	hex_2_external_connection_export,
	hex_3_external_connection_export,
	hex_4_external_connection_export,
	hex_5_external_connection_export);	

	input		clk_clk;
	input		fp1_rxd;
	output		fp1_txd;
	input		fp2_rxd;
	output		fp2_txd;
	output	[7:0]	pwm_control_export;
	input		reset_reset_n;
	input	[8:0]	switches_external_connection_export;
	input	[1:0]	buttons_external_connection_export;
	output	[7:0]	hex_0_external_connection_export;
	output	[9:0]	leds_external_connection_export;
	output	[7:0]	hex_1_external_connection_export;
	output	[7:0]	hex_2_external_connection_export;
	output	[7:0]	hex_3_external_connection_export;
	output	[7:0]	hex_4_external_connection_export;
	output	[7:0]	hex_5_external_connection_export;
endmodule
