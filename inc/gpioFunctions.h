#ifndef GPIOFUNCTIONS_H_
#define GPIOFUNCTIONS_H_

#include "gpioLED.h"

#define  GETPIN(nGpio)		(nGpio % 32)
#define  GETBANK(nGpio)		(nGpio / 32)

int ledInit(int nGpio, int dir_in_out);
void Delay(volatile unsigned int count);
int getValue(unsigned int nGpio);
void writePinHigh(unsigned int nGpio);
void writePinLow(unsigned int nGpio);
void BCD0(unsigned int num);
void BCD1(unsigned int num);
void BCD2(unsigned int num);
void BCD3(unsigned int num);
void initPins();

#endif //GPIOFUNCTIONS_H_
