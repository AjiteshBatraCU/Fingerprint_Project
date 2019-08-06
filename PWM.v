module PWM (fclk, duty, oPWM, reset);
input fclk; //input clock at 100x desired output frequency
input [7:0] duty; //0-100 duty cycle value
output reg oPWM; //output PWM signal
input reset;

reg [31:0] counter;
always @(posedge fclk or negedge reset) begin
	if (!reset)
	begin
		oPWM <= 0;
		counter <= 0;
	end
		
	else
	begin
		counter = counter + 1;
		if (counter == 1000000) begin
			counter = 0;
		end

		if (counter <= (duty*10000)-1) begin
			oPWM = 1;
		end
		else begin
			oPWM = 0;
		end
	end

end
endmodule
