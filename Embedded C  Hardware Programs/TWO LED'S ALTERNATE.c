#include<reg52.h>
sbit LED=P1^0;
sbit LED=P1^1;
void delay(void)
{
	int i,j;
	for(i=0;i<500;i++)
	{
		for(j=0;j<127;j++)
		{
		}
	}
}
void main(void)
{
	while(1)
	{
		LED=1;
		LED=0;
		delay();
		
		LED=0;
		LED=1;
		delay();
	}
}