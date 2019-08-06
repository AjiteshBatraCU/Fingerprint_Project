	component prj_processor is
		port (
			clk_clk                             : in  std_logic                    := 'X';             -- clk
			fp1_rxd                             : in  std_logic                    := 'X';             -- rxd
			fp1_txd                             : out std_logic;                                       -- txd
			fp2_rxd                             : in  std_logic                    := 'X';             -- rxd
			fp2_txd                             : out std_logic;                                       -- txd
			pwm_control_export                  : out std_logic_vector(7 downto 0);                    -- export
			reset_reset_n                       : in  std_logic                    := 'X';             -- reset_n
			switches_external_connection_export : in  std_logic_vector(8 downto 0) := (others => 'X'); -- export
			buttons_external_connection_export  : in  std_logic_vector(1 downto 0) := (others => 'X'); -- export
			hex_0_external_connection_export    : out std_logic_vector(7 downto 0);                    -- export
			leds_external_connection_export     : out std_logic_vector(9 downto 0);                    -- export
			hex_1_external_connection_export    : out std_logic_vector(7 downto 0);                    -- export
			hex_2_external_connection_export    : out std_logic_vector(7 downto 0);                    -- export
			hex_3_external_connection_export    : out std_logic_vector(7 downto 0);                    -- export
			hex_4_external_connection_export    : out std_logic_vector(7 downto 0);                    -- export
			hex_5_external_connection_export    : out std_logic_vector(7 downto 0)                     -- export
		);
	end component prj_processor;

	u0 : component prj_processor
		port map (
			clk_clk                             => CONNECTED_TO_clk_clk,                             --                          clk.clk
			fp1_rxd                             => CONNECTED_TO_fp1_rxd,                             --                          fp1.rxd
			fp1_txd                             => CONNECTED_TO_fp1_txd,                             --                             .txd
			fp2_rxd                             => CONNECTED_TO_fp2_rxd,                             --                          fp2.rxd
			fp2_txd                             => CONNECTED_TO_fp2_txd,                             --                             .txd
			pwm_control_export                  => CONNECTED_TO_pwm_control_export,                  --                  pwm_control.export
			reset_reset_n                       => CONNECTED_TO_reset_reset_n,                       --                        reset.reset_n
			switches_external_connection_export => CONNECTED_TO_switches_external_connection_export, -- switches_external_connection.export
			buttons_external_connection_export  => CONNECTED_TO_buttons_external_connection_export,  --  buttons_external_connection.export
			hex_0_external_connection_export    => CONNECTED_TO_hex_0_external_connection_export,    --    hex_0_external_connection.export
			leds_external_connection_export     => CONNECTED_TO_leds_external_connection_export,     --     leds_external_connection.export
			hex_1_external_connection_export    => CONNECTED_TO_hex_1_external_connection_export,    --    hex_1_external_connection.export
			hex_2_external_connection_export    => CONNECTED_TO_hex_2_external_connection_export,    --    hex_2_external_connection.export
			hex_3_external_connection_export    => CONNECTED_TO_hex_3_external_connection_export,    --    hex_3_external_connection.export
			hex_4_external_connection_export    => CONNECTED_TO_hex_4_external_connection_export,    --    hex_4_external_connection.export
			hex_5_external_connection_export    => CONNECTED_TO_hex_5_external_connection_export     --    hex_5_external_connection.export
		);

