## Scott Crump and Stratasys

- Crump invented FDM (not the first form of 3D printing, but the most mainstream)
- Sources differ on what the exact process was, but Crump invented the technology by additively manufacturing a toy frog for his daughter by extruding a meltable material through a nozzle.
	- https://www.tctmagazine.com/additive-manufacturing-3d-printing-news/exclusive-stratasys-scott-crump-3d-printing-legacy/
	- https://news.wsu.edu/news/2024/01/30/inventor-of-3d-printer-technology-to-speak/

## Marlin 1.0

- marlinfw.org
	- Created in 2011 for RepRap printers
	- Based on Sprinter and Grbl
		- Sprinter: basic firmware that could read gcode from an SD (and not much else) (sprinter github)
		- Grbl: CNC firmware that allows for gcode arcs, acceleration control, etc. (grbl github)
	- "Runs as a single large self-contained application on the 3D printer's mainboard"
	- Firmware manages all of the IO required for the printer's function/usability, including heaters, thermistors, display, button inputs from the user, motor movements/positions, endstops, etc.
	- Extremely efficient
		- Written in C++ Core (standard for Arduino microcontroller based systems)
		- a base configuration can flash to the mainboard in under 64KB
		- Made phenomenal usage of the hardware available
		- From 1.0 to 1.1
			- Automated bed leveling
			- Hysteresis/Thermal Runaway protections enabled by default (huge deal!)
				- Anet A8: the THERAC of 3D printers (https://www.thissmarthouse.net/dont-burn-your-house-down-3d-printing-a-cautionary-tale/)
				- ![](junk/Pasted%20image%2020241002152312.png)
			- More unit checks within the firmware build process
			- Improvements to host integration (which would build the foundation for Klipper and its web frontends)
- Ultimaker (likely not useful)
	- https://www.lincolninternational.com/transactions/ultimaker-a-portfolio-company-of-npm-capital-has-merged-with-makerbot-a-subsidiary-of-statasys/
		- Est. 2011
		- Merged along with Stratasys and NPM Capital with Makerbot

## Marlin 2.0

- Support for 32-bit ARM boards
- Improved support for select Multi-Material Units
- Tweaks to take advantage of the increased compute power
	- Support for up to 8 extruders for multihead machines
- Problems of Marlin as a firmware
	- Because it all runs on the board as a single application, *updating the firmware is a colossal pain*
	- 8 bit board procedure
		- Need to be loaded via ISP (In-System Programming)
		- Requires access to the board (so physical disassembly is often required)
		- Must be flashed from computer through a specialized cable (ISP->USB)
			- (https://www.youtube.com/watch?v=sVf9WUc3mZY) (Creality's guide)
	- 32 bit board procedure
		- Easier, simply load binary to SD, flashes on startup
		- Still requires full recompilation with every update to the config (which is slow)
			- (https://www.youtube.com/watch?v=KdUMe-uDQyQ)
			- (https://3dwork.io/en/skr-mini-e3-v3/)

## Klipper

- klipper3d.org
	- First released in 2016
	- "combines the power of a general purpose computer with one or more micro-controllers"
	- Instead of the microcontroller reading, interpreting, and executing on gcode, the computer does those tasks. The microcontroller only receives simple (stepper motor) step instructions
- Structure
	- Printer mainboard (recieves a stream of individual step controls)
	- General purpose computer: Optimized enough to run on a RPi, but works on x86 based systems (utilizes Linux features, convenience tools are built for Debian, but theoretically can work on most distros)
		- klippy: Linux service that communicates with the printer directly
		- moonraker: API allowing for communication to klippy through frontends
			- utilizes Unix domain sockets for communication with the klippy service
		- frontend options: [Fluidd](https://docs.fluidd.xyz/), [Mainsail](https://docs.mainsail.xyz/), [Octoprint](https://octoprint.org/)
			- Octoprint: bypasses moonraker, interacts with the klippy service directly
				- This is because Octoprint takes the approach of interacting over serial, making the usage with Marlin and Klipper identical
				- Does not have Klipper-centered features in mind, but supports extensions for their inclusion
- Emphasis on fast development
	- Modularized config files
		- Instead of requiring a complete reflash/recompile for an updated config, simply restart the firmware with the updated config from the host
	- Written in Python
		- "\[Simpler code\] makes it easier to develop new functionality"
- Results of this fast development
	- Pressure Advance: adjusting the flow rate to the hotend to compensate for backpressure, leading to more consistent extrusion
	- Resonance Compensation/Input Shaping: Reading vibration data from an accelerometer and induces opposite vibrations in the printhead
- These developments eventually trickled down to Marlin, but require pretty beefy microcontrollers to properly handle them at high speed
- Case study: Bambu lab
	- Unknown firmware (closed source)
- Major benefit: Builtin API Server (Moonraker)

## Moonraker

- First released in 2021*
	- Pre-release versions were in use by the Fluidd team in late 2020
## Fun facts

- Current versions of Marlin has input shaping, but only implemented it two years after it debuted on Klipper
	- The same thing happened with Pressure/Linear Advance
- Fluidd UI has reportedly been using Moonraker since before Moonraker's changelog was well-maintained. Oh well, that's open source documentation for you sometimes...
- 