#ifndef GPIOLED_H_
#define GPIOLED_H_

/*
 * =====================================================================================
 *
 *       Filename:  gpioLED.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19/05/2016 20:03:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Francisco Helder (), helderhdw@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "hw_control_AM335x.h"
#include "soc_AM335x.h"
#include "hw_cm_wkup.h"
#include "hw_gpio_v2.h"
#include "beaglebone.h"
#include "hw_cm_per.h"
#include "hw_types.h"
#include "gpioClk.h"


/* This is used to configure a GPIO pin as an input pin. */
#define DIR_INPUT                1
/* This is used to configure a GPIO pin as an output pin.*/
#define DIR_OUTPUT               0

/* This is used to write a logic 0 to a pin.*/
#define PIN_LOW                  0

/* This is used to write a logic 1 to a pin.*/
#define PIN_HIGH                 1


#define GPIO_INSTANCE_PIN_NUMBER(n)     (n)

#define GPIO_INSTANCE_ADDRESS(n)	( (n==0) ? SOC_GPIO_0_REGS : (n==1) ? SOC_GPIO_1_REGS : (n==2) ? SOC_GPIO_2_REGS: SOC_GPIO_3_REGS)

#define TOGGLE                          (0x01u)

#define MSEG							(0xFFFFFFC)

#define CONTROL_CONF_RXACTIVE_IN			(0x00000020u)

#define CONTROL_CONF_PUTYPESEL_IN			(0x00000010u)

#define CONTROL_CONF_PUDEN_IN				(0x00000008u)


enum module{MODULE0, MODULE1, MODULE2, MODULE3}module;

enum pin{GPIO0, GPIO1, GPIO2, GPIO3, GPIO4, GPIO5, GPIO6,
		 GPIO7, GPIO8, GPIO9, GPIO10, GPIO11, GPIO12, GPIO13,
		 GPIO14, GPIO15, GPIO16, GPIO17, GPIO18, GPIO19, GPIO20,
		 GPIO21, GPIO22, GPIO23, GPIO24, GPIO25, GPIO26, GPIO27,
		 GPIO28, GPIO29, GPIO30, GPIO31}pin;

enum num{ZERO, 
		 UM, 
		 DOIS, 
		 TRES,
		 QUATRO,
		 CINCO,
		 SEIS,
		 SETE,
		 OITO,
		 NOVE
		}num;

#define LED_J1 5
#define LED_J2 7
#define buttonJ1 117
#define buttonJ2 115

#define A0  9 //pino 13, modulo 1
#define B0  10 //pino 15, modulo 1	
#define C0  45 //pino 27, modulo 0
#define D0  47 //pino 12, modulo 1
#define E0  61 //pino 26, modulo 0
#define F0  8 //pino 14, modulo 1
#define G0  78

#define A1  74 //pino 29, modulo 1
#define B1  76 //pino 16, modulo 1	
#define C1  27 //pino 17, modulo 0
#define D1  86 //pino 21, modulo 3
#define E1  87 //pino 19, modulo 3
#define F1  72 //pino 28, modulo 1
#define G1  70	//pino 7, modulo 0

#define A2  75 //pino 29, modulo 1
#define B2  77 //pino 16, modulo 1	
#define C2  26 //pino 17, modulo 0
#define D2  46 //pino 21, modulo 3
#define E2  65 //pino 19, modulo 3
#define F2  73 //pino 28, modulo 1
#define G2  71	//pino 7, modulo 0

#define A3  81 //pino 29, modulo 1
#define B3  11 //pino 16, modulo 1	
#define C3  49 //pino 17, modulo 0
#define D3  48 //pino 21, modulo 3
#define E3  44 //pino 19, modulo 3
#define F3  80 //pino 28, modulo 1
#define G3  79	//pino 7, modulo 0

void ledToggle(int nGpio, int GPIOModule);
void GPIOPinMuxSetup(unsigned int offsetAddr, unsigned int padConfValue);
void GPIOPinMuxSetup0(unsigned int offsetAddr, unsigned int padConfValue);
void GPIOModuleEnable(unsigned int baseAdd);
void GPIOModuleReset(unsigned int baseAdd);
void GPIODirModeSet(unsigned int baseAdd,
                            unsigned int pinNumber,
                            unsigned int pinDirection);
void GPIOPinWrite(unsigned int baseAdd,
                            unsigned int pinNumber,
                            unsigned int pinValue);
int getBank(int gpio);
int getPin(int gpio);

void ledToggle();



#endif //GPIOLED_H_
