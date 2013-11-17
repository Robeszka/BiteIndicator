
#include "Initialization.h"
#include "PortDefinitions.h"
#include "InterruptDefinitions.h"

#include <p18f45k20.h>

void initINT0 ()
{
    PORTB_Pull_up_Set_Enable; //Pull-up resisitor ON
    INT0_External_Interrupt_Enable_bit_set; //Enable INT0 interrupt
    External_Interrupt_0_Edge_Select_bit_set_falling; //Interrupt if falling (0)
    Global_Interrupt_Enable_bit_set;         //Global interrupt enable
    INT0_External_Interrupt_Flag_bit_clear;      //clear interrupt flag
}

void initLEDs ()
{
    LED_TRISX = LED_TRISX & LED_PINS_IO_SETTER;
    LED_PORTX = LED_PINS_VALUE_SET_DEFAULT;
}
