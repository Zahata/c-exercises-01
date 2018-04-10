
#define F_CPU 10000000L
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRA = 0xff;            // setting all I/O's in port A as outputs
	
	while (1)
	{
		PORTA = ~(1<<PA3);      // turning on led 3 (active low)
		_delay_ms(500);
		PORTA = ~(0<<PA3);		// turning off led3
		_delay_ms(500);
	}
	
	
	
}
