
#include "Initialization.h"
#include "PortDefinitions.h"
#include "OscDefinitions.h"

#include <p18f45k20.h>

void initINT0 ()
{
    INTCON2bits.RBPU = 0; //Pull-up resisitor ON
    INTCONbits.INT0IE = 1; //Enable INT0 interrupt
    INTCON2bits.INTEDG0 = 0; //Interrupt if falling (0)
    INTCONbits.GIE = 1;         //Global interrupt enable
    INTCONbits.INT0IF = 0;      //clear interrupt flag
}

void initLEDs ()
{
    LED_TRISX = LED_TRISX & 0b11111000;
    LED_PORTX = 0b00000000;
}
