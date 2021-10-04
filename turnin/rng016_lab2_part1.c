/*	Author: rng016
 *  Partner(s) Name
 *	Lab Section: 22
 *	Assignment: Lab #2  Exercise #2
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

	unsigned char PA1 = 0x00;
	unsigned char PA0 = 0x00;
	unsigned char PB0 = 0x00;
    /* Insert your solution below */
    while (1) {
	if (PA0 == 0x01 && PA1 ==0x00) {
		PB0 = 0x01;	
	}
    }
    return 1;
}
