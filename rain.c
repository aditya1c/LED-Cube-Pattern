#define F_CPU 14.7456e6
#include <avr/io.h>
#include<util/delay.h>
void uplayer(uint8_t a,uint8_t b)
{
	DDRB=a;
	DDRD=b;
	DDRA=0x08;
	_delay_ms(100);
	DDRA=0x04;
	_delay_ms(100);
	DDRA=0x02;
	_delay_ms(100);
	DDRA=0x01;
	_delay_ms(100);
	
}

void rain()
{
	uplayer(0x01,0x00);
	uplayer(0x04,0x00);
	uplayer(0x00,0x04);
	uplayer(0x00,0x01);
	uplayer(0x016,0x00);
	uplayer(0x00,0x16);
	uplayer(0x64,0x00);
	uplayer(0x00,0x32);
	
}


int main(void)
{ int i,j,k;
	PORTA=0xff;
	PORTB=0x00;
	PORTD=0x00;
    while(1)
    { rain();
		rain();
}}