#ifndef F_CPU
#define F_CPU 16000000UL // or whatever may be your frequency
#endif
 
#include <avr/io.h>
#include <util/delay.h>                // for _delay_ms()
#include "ArduinoCore-avr/cores/arduino/Arduino.h"

#define LED_PIN 13

int main(void)
{
	DDRB=0b11100000;//pin 13 is in output mode
	pinMode(13, OUTPUT);
	while (1) {
		PORTB=0b11100000; //make pin 13 high and power on the led
		_delay_ms(1000);
		PORTB=0b11000000; //make pin 13 low and power off the led
		_delay_ms(1000);
	}
}
