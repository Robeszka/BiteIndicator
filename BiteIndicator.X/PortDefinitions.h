/* 
 * File:   PortDefinitions.h
 * Author: konyarobertmihaly
 *
 * Created on 2013. november 16., 16:51
 */

#ifndef PORTDEFINITIONS_H
#define	PORTDEFINITIONS_H

#include <p18f45k20.h>

/********LED IO********/
#define LED_TRISX       TRISD
#define LED_PORTX       PORTD

#define LED_PINS_IO_SETTER                0b11111000
#define LED_PINS_VALUE_SET_DEFAULT        0b00000000

#define LED_TRISX_ALL_OUTPUT TRISD = TRISD & 0b00000000

#endif	/* PORTDEFINITIONS_H */

