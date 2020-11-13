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
    { uint8_t i,j,k;
	    DDRA=0xff;
	    for(i=0;i<255;i++)
	    {
		    for(j=0;j<255;j++)
		    {
			    
			    
			    
			    DDRD=i;
			    DDRB=j;
		    _delay_ms(50);}}
    }
}