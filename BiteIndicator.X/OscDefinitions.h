/* 
 * File:   OscDefinitions.h
 * Author: konyarobertmihaly
 *
 * Created on 2013. november 17., 12:42
 */

#ifndef OSCDEFINITIONS_H
#define	OSCDEFINITIONS_H

#include <p18f45k20.h>

typedef enum
{
    osc_frequency_16MHz,
    osc_frequency_8MHz,
    osc_frequency_4MHz,
    osc_frequency_2MHz,
    osc_frequency_1MHz,
    osc_frequency_500kHz,
    osc_frequency_250kHz,
    osc_frequency_31kHz
}frequency;

#define Internal_Oscillator_Frequency_Select_bits           OSCCONbits.IRCF

#define Internal_Oscillator_Frequency_Select_bits_16MHz     OSCCONbits.IRCF = 0b111
#define Internal_Oscillator_Frequency_Select_bits_8MHz      OSCCONbits.IRCF = 0b110
#define Internal_Oscillator_Frequency_Select_bits_4MHz      OSCCONbits.IRCF = 0b101
#define Internal_Oscillator_Frequency_Select_bits_2MHz      OSCCONbits.IRCF = 0b100
#define Internal_Oscillator_Frequency_Select_bits_1MHz      OSCCONbits.IRCF = 0b011
#define Internal_Oscillator_Frequency_Select_bits_500kHz    OSCCONbits.IRCF = 0b010
#define Internal_Oscillator_Frequency_Select_bits_250kHz    OSCCONbits.IRCF = 0b001
#define Internal_Oscillator_Frequency_Select_bits_31kHz     OSCCONbits.IRCF = 0b000

#endif	/* OSCDEFINITIONS_H */

