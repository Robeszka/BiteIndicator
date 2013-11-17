
#include "OSC.h"
#include "OscDefinitions.h"

void setOSCFrequency(int frequenc)
{
    frequency ii = frequenc;

    switch(ii)
    {
        case osc_frequency_16MHz:
        {
            Internal_Oscillator_Frequency_Select_bits_16MHz;
        }break;

        case osc_frequency_8MHz:
        {
            Internal_Oscillator_Frequency_Select_bits_8MHz;
        }break;

        case osc_frequency_4MHz:
        {
            Internal_Oscillator_Frequency_Select_bits_4MHz;
        }break;

        case osc_frequency_2MHz:
        {
            Internal_Oscillator_Frequency_Select_bits_2MHz;
        }break;

        case osc_frequency_1MHz:
        {
            Internal_Oscillator_Frequency_Select_bits_1MHz;
        }break;

        case osc_frequency_500kHz:
        {
            Internal_Oscillator_Frequency_Select_bits_500kHz;
        }break;

        case osc_frequency_250kHz:
        {
            Internal_Oscillator_Frequency_Select_bits_250kHz;
        }break;

        case osc_frequency_31kHz:
        {
            Internal_Oscillator_Frequency_Select_bits_31kHz;
        }break;
    }
}
