/* 
 * File:   InterruptDefinitions.h
 * Author: konyarobertmihaly
 *
 * Created on 2013. november 17., 12:41
 */

#ifndef INTERRUPTDEFINITIONS_H
#define	INTERRUPTDEFINITIONS_H


/*INTCON register*/

#define Global_Interrupt_Enable_bit                         INTCONbits.GIE
#define Global_Interrupt_Enable_bit_set                     INTCONbits.GIE = 1
#define Global_Interrupt_Enable_bit_clear                   INTCONbits.GIE = 0

#define INT0_External_Interrupt_Enable_bit                  INTCONbits.INT0IE
#define INT0_External_Interrupt_Enable_bit_set              INTCONbits.INT0IE = 1
#define INT0_External_Interrupt_Enable_bit_clear            INTCONbits.INT0IE = 0;

#define RB_Port_Change_Interrupt_Enable_bit                 INTCONbits.RBIE
#define RB_Port_Change_Interrupt_Enable_bit_set             INTCONbits.RBIE = 1
#define RB_Port_Change_Interrupt_Enable_bit_clear           INTCONbits.RBIE = 0

#define INT0_External_Interrupt_Flag_bit                    INTCONbits.INT0IF
#define INT0_External_Interrupt_Flag_bit_set                INTCONbits.INT0IF = 1
#define INT0_External_Interrupt_Flag_bit_clear              INTCONbits.INT0IF = 0

/*INTCON2 register*/

#define PORTB_Pull_up_Enable_bit                            INTCON2bits.RBPU
#define PORTB_Pull_up_Set_Enable                            INTCON2bits.RBPU = 0
#define PORTB_Pull_up_Set_Disable                           INTCON2bits.RBPU = 1

#define External_Interrupt_0_Edge_Select_bit                INTCON2bits.INTEDG0
#define External_Interrupt_0_Edge_Select_bit_set_rising     INTCON2bits.INTEDG0 = 1
#define External_Interrupt_0_Edge_Select_bit_set_falling    INTCON2bits.INTEDG0 = 0

#endif	/* INTERRUPTDEFINITIONS_H */

