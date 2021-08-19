#include "stdint.h" 
#include "stdbool.h" 

void gpioWrite(gpioMap_t, bool);
void gpioInit(gpioMap_t, bool);
void spiConfig(int);
void delay(int );