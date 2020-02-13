#include <LPC29xx.H>
# include "delay.h"


void main()

{
	int i;	
while(1)
{
	GPIO2_DR=0xf0ffffff;
	for(i=15;1<=24;i++)
	{
delay(50);
GPIO2_OR=i;
}
}




}


