#include<avr/io.h>
#include<util/delay.h>
int main()
{
	DDRB=0b00011110;
	while(1)
	{
		PORTB=0b00010000;
		_delay_ms(1000);
		PORTB=0b00001000;
		_delay_ms(1000);
		PORTB=0b00000100;
		_delay_ms(1000);
		PORTB=0b00000010;
		_delay_ms(1000);
		PORTB=0b00000000;
		_delay_ms(1000);
	}
}