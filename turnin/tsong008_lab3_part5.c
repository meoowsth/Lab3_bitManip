/*	Author: Tinghui Song
 *  Partner(s) Name: none
 *	Lab Section:24
 *	Assignment: Lab #3  Exercise #5
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
	DDRB = 0xFE; PORTB = 0x01;
	DDRD = 0x00; PORTD = 0xFF;

    /* Insert your solution below */
	unsigned char tempB = 0x00;
	unsigned char tempD = 0x00;
	unsigned short weight = 0x0000;

    while (1) {
	weight = ((PIND & 0xFF) << 1) | (PINB & 0x01);
	if ( weight >= 0x46){
		tempB = 0x02;
	}
	else if( weight > 0x05){
		tempB = 0x04;
	}
	else{
		tempB = 0x00;
	}
	PORTB = tempB;
    }
    return 1;
}
