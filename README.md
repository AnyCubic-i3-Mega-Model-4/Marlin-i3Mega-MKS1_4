# Marlin 3D Printer Firmware for my modified Anycubic i3 Mega



# My hardware

  - **Printer** Anycubic i3 Mega version 4
    - Is a Prusa i3-like machine with Dual Z motors (second Z attached to E1) and Dual Z endstops (second one attached to X+ endstop on the board)
  - **Board** MKS Gen 1.4 (Arduino Mega and RAMPS 1.4 based) with the RepRap Discount-like LCD
  - **Stepper Drivers** 5 x TMC 2130

# Set up notes

## MKS Gen 1.4

  - All motor jumpers are taken off

## Stock Hardware
  - Second Z motor as stock
    - Z2 motor is connected to E1 on the board

## TMC2130's

  - Z, E0 and E1 drivers are in "dumb mode" (**un**-modified Fysetc TMC2130 version 1.0 boards)

  - X and Y drivers are in SPI mode (not if you got the Fysetc version 1.0, you'll need to modify them, see this page to know how): http://marlinfw.org/docs/features/tmc_drivers.html

## Wiring kinks

  - X endstop connected to Xmin on the board, as usual
  - Z1 endstop is connected to Zmin on the board, as usual
  - Z2 endstop is connected to Xmax on the board
  - Y endstop is connected to Ymin on the board, as usual

  - Hotend is connected normally.
  - Hotend fan is connected to E1 heater
  - Hotbed is connecto normally.

  **Important**: you are on your own to wire the rest.

## Before you flash

  - Modify Configuration.h at least in the following items: language (if you don't want Portuguese) and UUID.


# Thank you / Important Links

  - Tomas Sanladerer: https://www.youtube.com/watch?v=sPvTB3irCxQ

  - This 3D Campy article: http://www.3dcampy.com/2017/12/20/tutorial-instalacion-y-configuracion-driver-trinamic-tmc2130-en-ramps-y-mks-gen-1-4/

# Warranty

  There's none, you are own your own, good luck.

## License

Marlin is published under the [GPLv3 license](https://github.com/MarlinFirmware/Marlin/blob/1.0.x/COPYING.md) because we believe in open development. The GPL comes with both rights and obligations. Whether you use Marlin firmware as the driver for your open or closed-source product, you must keep Marlin open, and you must provide your compatible Marlin source code to end users upon request. The most straightforward way to comply with the Marlin license is to make a fork of Marlin on Github, perform your modifications, and direct users to your modified fork.
