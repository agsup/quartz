#Circuits 

[[Op Amps]]
### Low Pass Filter: Active
- Formula:
	- $V_0 = -\frac{Zf}{R_{in}}V_{in}$
		- Note: $V_0$ is inverting
	- $Z_f = \frac{R_f}{R_f\cdot j \cdot \omega \cdot C_f + 1}$
	- So, $V_0= -\frac{R_f}{R_{in}}(\frac{1}{R_f\cdot j \cdot \omega \cdot C_f + 1})V_{in}$
### High Pass Filter: Active
- Formula:
	- $V_0 = -\frac{Rf}{Z_{in}}V_{in}$
	- $Z_{in} = R_{in} + \frac{1}{j\omega c} = \frac{R_{in} \cdot j\cdot \omega \cdot C + 1}{j\omega c}$
	- So, $V_0 = -\frac{Rf \cdot j\cdot  \omega\cdot C_{in}}{R_{in}\cdot j\cdot \omega\cdot  C_{in} + 1}V_{in}$
Capacitors are used to smooth out voltages
- Exponential PWM output
	- Pulse Width Modulation
	- if `analogWrite(3, 128)` (arg 1 is a pin#, arg 2 is an 8 bit val), then wave is a square wave
	- `analogWrite(3, 64)` would be a 25% duty cycle
	- This can produce smoother (sinusoidal) waves if the output is run through a resistor, then split between a new output and a capacitor (capacitor goes to ground)
		- Resistance has to be a specific value, which needs to be calculated
		- $fc = \frac{1}{2\pi RC}$