#include<reg52.h>
void delay(void)
{
	int i,j;
	for(i=0;i<500;i++)
	{
		for(j=0;j<2000;j++)
		{
		}
	}
}
void main(void)
{
	P1 = 0x00;
		
	while(1)
	{
		P1=0x80;
	while(P1 != 0)
	{
		delay();
		P1 = P1>>1;
		delay();
	}
	}
}

			