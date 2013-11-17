

#include "HardverTest.h"
#include "PortDefinitions.h"

#define DELAY_SCALE 5000

void runHardverCheck ()
{
    LED_PORTX = 0b00000001;

    for(int helper = 0; helper <= 1 ; helper++)
    {
        delay();

        LED_PORTX = LED_PORTX << 1;
    }

    for(int helper = 0; helper <= 1 ; helper++)
    {
        delay();

        LED_PORTX = LED_PORTX >> 1;
    }

    delay();

    LED_PORTX = 0b101;

    delay();

    LED_PORTX = 0b010;

    delay();

    LED_PORTX = 0b101;

    delay();

    LED_PORTX = 0;
}

void runHardverTest  (void)
{
    LED_TRISX_ALL_OUTPUT; //Set all pin of PORTD as OUTPUT

    LED_PORTX = 1;

    for(int helper = 0; helper <= 6; helper++)
    {
        delay();

        LED_PORTX = LED_PORTX << 1;

    }

    for(int helper = 0; helper <= 6; helper++)
    {
        delay();

        LED_PORTX = LED_PORTX >> 1;

    }
}

void delay ()
{
    for(int delay = 0; delay <= DELAY_SCALE; delay++)
    {}
}