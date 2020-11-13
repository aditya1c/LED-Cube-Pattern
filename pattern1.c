#define F_CPU 14.5765e6
#include <avr/io.h>
#include<util/delay.h>

void coord(int x,int y,int z,int dly)
{ int tmp;
	
	DDRA=(1<<z);
 tmp=(4*x)+y;
 if (tmp<=7)
 {DDRB=(1<<tmp);}
else	
 {DDRD=(1<<(tmp-7)); }
	 for(int l=0;l<dly;l++){_delay_ms(1);}
	 DDRA=0x00;
	 DDRB=0x00;
	 DDRD=0x00;
	
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
int main(void)
{ int i,j,k;
	PORTA=0xff;
	PORTB=0x00;
	PORTD=0x00;
    while(1)
    {uplayer(0x01,0x00);
	 downlayer();
	 uplayer(0x10,0x00);
	 downlayer();
	 uplayer(0x02,0x00);
	 downlayer();
	 uplayer(0x20,0x00);
	 downlayer();
	 uplayer(0x00,0x01);
	 downlayer();
	 uplayer(0x00,0x10);
	 downlayer();
	 uplayer(0x00,0x02);
	 downlayer();
	 uplayer(0x00,0x20);
	 downlayer();
	 uplayer(0x04,0x00);
	 downlayer();
	 uplayer(0x40,0x00);
	 downlayer();
	 uplayer(0x00,0x04);
	 downlayer();
	 uplayer(0x00,0x40);
	 downlayer();
	 
	}
									 
    }
