#include "stdint.h" 
#include "stdbool.h" 

#define SPI0 0
#define OFF 0
#define ON 1
#define GPIO_OUTPUT 0

void gpioWrite(int, bool);
void gpioInit(int, bool);
void spiConfig(int);
void delay(int );
void spiWrite(int, char*, int );