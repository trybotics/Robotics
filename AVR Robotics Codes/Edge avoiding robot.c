#define F_CPU 12000000UL
#include<avr/io.h>
#include<util/delay.h>
int main()
{
	int rs=0,ls=0;
	DDRC=0b0000000;
	DDRB=0b00011110;
	while(1)
	{
		rs=PINC&0b0000001;
		ls=PINC&0b0001000;
		if((rs==0b0000001)&(ls==0b0001000)) {
			PORTB=0b00001100;  //forward
		}
		if((rs==0b0000000)&(ls==0b0001000)) {
			PORTB=0b00010100;  //left
			_delay_ms(1000);
		}
		if((rs==0b0000001)&(ls==0b0000000)) {
			PORTB=0b00001010;  //right
			_delay_ms(1000);
		}
		if((rs==0b0000000)&(ls==0b0000000)) {
			PORTB=0b00010010;  //backward
			_delay_ms(2000);
			PORTB=0b00001010;  //right
			_delay_ms(1000);
		}
	}
}