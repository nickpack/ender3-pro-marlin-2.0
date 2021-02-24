# Marlin "Terminator" 2.0 config for my Ender 3 Pro

Late 2020 Ender 3 Pro "v1.5":

* Creality v4.2.2 32-bit 24v board
* Micro Swiss Direct Drive Extruder
* Micro Swiss All Metal Hotend
* BLTouch ABL probe (Genuine Creality kit installed with official bracket and pin27 board)
* Meanwell PSU (24v)
* Glass bed (Creality) - held on with supplied binder clips
* Capricorn bowden tube
* Z end stop switch removed (Bltouch wired into Z end stop socket on motherboard)
* Octoprint on an RPi 4B 2GB with old v1.3 camera board

# Nozzle Z Offset

The nozzle Z offset in this firmware is set to 0, and you have to manually calibrate from the menu on your printer.

With the Creality bracket the z offset for PLA (for me) is ~-3.2 but set yours manually in small increments
so that you don't damage your bed (like I did first time)

# ABL

Bed levelling is set to a 5x5 grid, bilinear.

# Build

Drop the contents of this repository into your Marlin repo clone "Marlin" subfolder.
Build in VSCode (Install platform.io and use autobuild marlin plugin if you don't know how to do it yourself)

# Installation

Build will spit out a .bin file in $MARLIN_REPO_PATH/.pio/build/STM32F103RET6_creality or use the binaries in
"releases" here that I have uploaded - slap the resulting binary on an SD card.

The more modern Creality boards have a bootloader and don't require pissing around with an Arduino.

Turn your printer on with the SD card inserted and wait until you see a hastily added 80's sci-fi reference.
