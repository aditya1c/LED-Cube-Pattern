#define F_CPU 14.7456e6
#include <avr/io.h>
#include<util/delay.h>

void coord(int x,int y,int z)
{ int tmp;
	
	DDRA=(1<<z);
 tmp=(4*x)+y;
 if (tmp<=7)
 {DDRB=(1<<tmp);}
else	
 {DDRD=(1<<(tmp-7)); }
	 _delay_ms(50);
	 DDRA=0x00;
	 DDRB=0x00;
	 DDRD=0x00;
	
}
int main(void)
{ int i,j,k;
	PORTA=0xff;
	PORTB=0x00;
	PORTD=0x00;
    while(1)
    {  DDRA=0xff;
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
}