#include<reg52.h>
	sbit RED=P1^0;
	sbit YELLOW=P1^1;
	sbit GREEN=P1^2;
	void delay(void)
	{
		int i,j;
		for(i=0;i<50;i++)
		{
			for(j=0;j<2000;j++)
			{
			}
		}
	}
	void main(void)
	{
		while(1)
		{
		RED=1;
		YELLOW=0;
		GREEN=0;
		delay();
		
		RED=0;
		YELLOW=1;
		GREEN=0;
		delay();
		
		RED=0;
		YELLOW=0;
		GREEN=1;
		delay();
		}
	}
	