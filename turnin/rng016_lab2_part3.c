/*	Author: rng016
 *  Partner(s) Name
 *	Lab Section: 22
 *	Assignment: Lab #2  Exercise #3
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0XFF; PORTB = 0x00;
	PORTC = 0x00;
	unsigned char cntavail = 0x00;
    /* Insert your solution below */
    while (1) {
	    cntavail = (((PINA & 0x01)) +
	    		((PINA & 0x02) >> 1) +
			((PINA & 0x04) >> 2) +
			((PINA & 0x08) >> 3)); //bitshift right according to how far away each spot is and then add together
			if (cntavail == 0x04) {
				PORTC = 0x80;
			}
			else {
				PORTC = 0x00 + cntavail;
			}
	    }
    return 1;
}
