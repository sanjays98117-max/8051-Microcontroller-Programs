#include<reg51.h>
sbit LED=P1^0;
sbit SW=P3^0;
void delay(void)
{
	unsigned int i,j;
	for(i=0;i<100;i++)
	{
		for(j=0;j<1000;j++)
		{
		}
	}
}
void main(void)
{
	bit led_state=0;
	SW=1;
	LED=0;
	while(1)
	{
		if(SW==0)
		{
			delay();
			if(SW==0)
			{
				led_state != led_state;
				LED=led_state;
				while(SW==0)
				{
				}
			}
		}
	}
}