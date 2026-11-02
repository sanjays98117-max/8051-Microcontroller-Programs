#include<reg51.h>
sbit LED1=P1^0;
sbit LED2=P1^1;
sbit SW1=P3^0;
sbit SW2=P3^1;
void main(void)
{
	P1 = 0x00;
	P3 = 0x00;
	SW1=1;
	SW2=1;
	while(1)
	{
	if(SW1==0)
	{
		LED1=1;
	}
	else
	{
		LED1=0;
	}
	if(SW2==0)
	{
		LED2=1;
	}
	else
	{
		LED2=0;
	}
}
}
		
	