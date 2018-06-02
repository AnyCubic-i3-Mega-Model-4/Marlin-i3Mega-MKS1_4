# Marlin 3D Printer Firmware for my modified Anycubic i3 Mega

**NOTE**: THIS STILL DOESN'T WORK, COME BACK LATER

**NOTE**: THIS STILL DOESN'T WORK, COME BACK LATER

**NOTE**: THIS STILL DOESN'T WORK, COME BACK LATER

**NOTE**: THIS STILL DOESN'T WORK, COME BACK LATER

**NOTE**: THIS STILL DOESN'T WORK, COME BACK LATER

**NOTE**: THIS STILL DOESN'T WORK, COME BACK LATER

**NOTE**: THIS STILL DOESN'T WORK, COME BACK LATER

**NOTE**: THIS STILL DOESN'T WORK, COME BACK LATER

**NOTE**: THIS STILL DOESN'T WORK, COME BACK LATER

**NOTE**: THIS STILL DOESN'T WORK, COME BACK LATER

**NOTE**: THIS STILL DOESN'T WORK, COME BACK LATER


# My hardware

  - **Printer** Anycubic i3 Mega version 4
    - Is a Prusa i3-like machine with Dual Z motors (second Z attached to E1) and Dual Z endstops (second one attached to X+ endstop on the board)
  - **Board** MKS Gen 1.4 (Arduino Mega and RAMPS 1.4 based)
  - **Stepper Drivers** 5 x TMC 2130 - Fysetc version 1.0, two of them modded to work with SPI (more bellow)

# Set up notes

## MKS Gen 1.4

  - All motor jumpers are taken off

## Stock Hardware
  - Second Z motor as stock
    - Z2 motor is connected to E1 on the board


## TMC2130's

  - Z, E0 and E1 drivers are in "dumb mode" (**un**-modified Fysetc TMC2130 version 1.0 boards)

  - X and Y drivers are in SPI mode (modified Fysetc TMC2130 version 1.0 boards)

    - Read Fysetc_mod.md for documentation about what I made
    - X CS is pin 42
    - Y CS is pin 44

## Wiring kinks

  - X endstop connected to Xmin on the board, as usual
  - Z1 endstop is connected to Zmin on the board, as usual
  - Z2 endstop is connected to Xmax on the board
  - Y endstop is connected to Zmax on the board (so all endstops are connected to interrupt capable pins)

  - Last "servo pin" (D4) on the board is can be connected to the PWM signal of a 5V PWM fan.



# Thank you / Important Links

  - Tomas Sanladerer: https://www.youtube.com/watch?v=sPvTB3irCxQ

  - This 3D Campy article: http://www.3dcampy.com/2017/12/20/tutorial-instalacion-y-configuracion-driver-trinamic-tmc2130-en-ramps-y-mks-gen-1-4/

 - Marlin documentation notes about the TMC2130 board I just bought by mistake: http://marlinfw.org/docs/features/tmc_drivers.html

## License

Marlin is published under the [GPLv3 license](https://github.com/MarlinFirmware/Marlin/blob/1.0.x/COPYING.md) because we believe in open development. The GPL comes with both rights and obligations. Whether you use Marlin firmware as the driver for your open or closed-source product, you must keep Marlin open, and you must provide your compatible Marlin source code to end users upon request. The most straightforward way to comply with the Marlin license is to make a fork of Marlin on Github, perform your modifications, and direct users to your modified fork.
