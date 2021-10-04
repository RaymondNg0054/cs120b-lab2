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

	unsigned char PA_1 = 0x00;
	unsigned char PA_0 = 0x00;
	unsigned char PB_0 = 0x00;
    /* Insert your solution below */
    while (1) {
	PA_1 = PINA & 0x02; // 0000 0010
	PA_0 = PINA & 0x01; // 0000 0001	
	if (PA_0 == 0x01 && PA_1 ==0x00) { // if PA0 garage door is open(1) and PA1 light is not sensed (0), then
		PB_0 = PB_0 | 0x01; // set PB0 to 0x01, which turns on the LED 	
	}
	else {
		PB_0 = 0x00;
	}
	PORTB = PB_0;
    }
    return 1;
}
