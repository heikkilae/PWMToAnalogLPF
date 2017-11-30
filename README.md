Program for Arduino to generate analog signal from PWN by using low-pass filter.

LPF Circuit:
PWM-+--------(R)------+-AnalogOut
				|
			   (C)
				|
			   GND


Rule: RC >> T = 1/f					
i.e. PWM pin 3 f = 31250Hz C = 4,7μF and R = 15k ohm
thus T = 0.000032s