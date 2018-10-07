# STM32 + Visual Studio Code
Building and debugging a "STM32 IoT B-L475E-IOT01A" mbed based blink program with Visual Studio Code.

## Requirements

This is based on using Windows 10. It should not be that hard to tweak to run on Linux.

The following 3rd party tools need to be installed.

* Visual Studio Code <https://code.visualstudio.com/download>
* STLink USB Drivers <https://www.st.com/en/development-tools/stsw-link009.html>
* GNU Tools for ARM Processors (Compiler)  <https://developer.arm.com/open-source/gnu-toolchain/gnu-rm/downloads>
* GNU Win32 Make <http://gnuwin32.sourceforge.net/packages/make.htm>
* OpenOCD <http://www.freddiechopin.info/en/download/category/4-openocd>
* MBED sample code for the STM32 LED Blink Program.

* Make sure you have updated the STLink firmware on the development board to the latest version.

## MBED Compiler and Sample Code

You will need an mbed.com compiler account. This gives you access to various sample programs for the STM32L475 MCU.

## Required Changes

After downloading the above tools and sample code I found it didn't work in Visual Studio Code. The following changes needed to be made and are reflected in this repository.

1. Copy the .json files from the program root folder to the .vscode folder.
2. Edit the .vscode/tasks.json file to be compatible with version 2.00 file format.
3. Edit the "Makefile" to use GNUCC compiler and correct precompiled files.
4. Edit .vscode/launch.json to use Make, GNU Tool, and detect when the OpenOCD server is started.

## Helpful Hints

* If you are getting Exceptions on starting the debugger (F5) try adding a breakpoint at main().
