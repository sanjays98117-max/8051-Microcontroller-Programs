#include<reg52.h>
sbit LED=P1^0;
sbit SW=P3^0;
void delay(void)
{
	int i,j;
	for(i=0;i<500;i++)
	{
		for(j=0;j<1000;j++)
		{
		}
	}
}
void main(void)
{
	P1 = 0x00;
	P3 = 0x00;
	while(1)
	{
		if(SW==1)
		{
			LED = 1;
		}
		if(SW == 0)
		{
			LED = 0;
		}
	}
}