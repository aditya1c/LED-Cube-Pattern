#define F_CPU 14.5765e6
#include <avr/io.h>
#include<util/delay.h>

void rotation()
{
	 DDRA=0xff;
	 DDRB=0b11000000;
	 DDRD=0x03;
	 _delay_ms(100);
	 DDRA=0xff;
	 DDRB=0b00110000;
	 DDRD=0b00001100;
	 _delay_ms(100);
	 DDRA=0xff;
	 //DDRB=(1<<0);
	 DDRB=0b00100001;
	 //DDRB=(1<<5);
	 DDRD=0b10000100;
	 //DDRD=(1<<2);
	 //DDRD=(1<<7);
	 _delay_ms(100);
	 DDRA=0xff;
	 //DDRB=(1<<1);
	 DDRB=0b00100010;
	 //DDRB=(1<<5);
	 DDRD=0b01000100;
	 //DDRD=(1<<2);
	 //DDRD=(1<<6);
	 _delay_ms(100);
	 DDRA=0xff;
	 //DDRB=(1<<2);
	 DDRB=0b01000100;
	 //DDRB=(1<<6);
	 DDRD=0b00100010;
	 //DDRD=(1<<1);
	 //DDRD=(1<<5);
	 _delay_ms(100);
	 DDRA=0xff;
	 //DDRB=(1<<3);
	 DDRB=0b01001000;
	 //DDRB=(1<<6);
	 DDRD=0b00010010;
	 //DDRD=(1<<1);
	 //DDRD=(1<<4);
	 _delay_ms(100);

}


void downlayer()
{
	DDRB=0xff;
	DDRD=0xff;
	DDRA=0x01;
	_delay_ms(100);
	DDRA=0x02;
	_delay_ms(100);
	DDRA=0x04;
	_delay_ms(100);
	DDRA=0x08;
	_delay_ms(100);
	
}

void uplayer(int a,int b)
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





void counter()
{
	uint8_t i,j,k;
	DDRA=0xff;
	for(i=0;i<15;i++)
	{
		for(j=0;j<15;j++)
		{
			
			
			
			DDRD=i;
			DDRB=j;
		_delay_ms(50);
		  
		  }}
}



int main(void)
{ int i,j,k;
	PORTA=0xff;
	PORTB=0x00;
	PORTD=0x00;
	DDRC=0x00;
	int a;
    while(1)
    {for(a=0;a<15;a++)
    {rotation();}
		counter();
		rain();
		rain();
		
		
		for(a=0;a<8;a++)
	{uplayer(0xff,0xff);
	downlayer();}
		
    }
}