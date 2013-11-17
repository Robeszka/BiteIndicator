/* 
 * File:   main.c
 * Author: konyarobertmihaly
 *
 * Created on 2013. november 15., 14:18
 */

#include <stdio.h>
#include <stdlib.h>

#include <p18f45k20.h>

#include "Config.h"
#include "HardverTest.h"
#include "Initialization.h"


#include "OSC.h"
#include "OscDefinitions.h"
#include "InterruptDefinitions.h"

int freqGlobalInt;

/*
 * Main method for application start.
 */
int main(int argc, char** argv) {

    frequency startFreq = osc_frequency_2MHz;

    setOSCFrequency(startFreq);

    freqGlobalInt = 0;

    initLEDs();

    initINT0();
    
    runHardverCheck();

    while(1)
    {
        //Run forever
        runHardverTest();
    }

    return (EXIT_SUCCESS);
}


void interrupt ISR(void)
{
    Global_Interrupt_Enable_bit_clear;

        if(INT0_External_Interrupt_Enable_bit && INT0_External_Interrupt_Flag_bit)
        {
            if(freqGlobalInt == 5)
            {
                  freqGlobalInt = 0;
            }

            setOSCFrequency (freqGlobalInt);


            freqGlobalInt++;

            INT0_External_Interrupt_Flag_bit_clear;

            Global_Interrupt_Enable_bit_set;
        }
}
