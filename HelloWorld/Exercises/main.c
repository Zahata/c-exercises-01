/*
 * Exercises.c
 *
 * Created: 10-Apr-18 10:56:09 AM
 * Author : Zahata97
 */ 
#define F_CPU 10000000L
#include <avr/io.h>
#include <util/delay.h>

int i;
void ledOn(int i);

int main(void)
{
	DDRA = 0xff;
	
	for (int i=0; i<8; i++)
	{
		ledOn(i);
	}
	
	void ledOn(int i){
		PORTA = ~(1<<i);
		_delay_ms(1000);
	}
	
}

