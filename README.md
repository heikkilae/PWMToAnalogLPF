Program for Arduino to generate analog signal from PWN by using low-pass filter.<br/>
<br/>
LPF Circuit:<br/>
PWM-+--------(R)------+-AnalogOut<br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|<br/>
			   (C)<br/>
				|<br/>
			   GND<br/>
<br/>
<br/>
Rule: RC >> T = 1/f	<br/>				
i.e. PWM pin 3 f = 31250Hz C = 4,7μF and R = 15k ohm<br/>
thus T = 0.000032s<br/>