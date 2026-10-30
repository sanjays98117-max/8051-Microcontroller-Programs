#include<reg51.h>
sbit LED=P1^0;
sbit SW=P3^0;
void main(void)
{
	SW=0;
	while(1)
	{
		if(SW==0)
		{
			LED=1;
		}
		else
		{
			LED=0;
		}
	}
}