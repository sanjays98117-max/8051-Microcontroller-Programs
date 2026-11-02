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
	char pattern;
	while(1)
	{
		pattern = 0x01;
		while(pattern != 0)
		{
			P1=pattern;
			delay();
			pattern=pattern<<1;
		}
	}
}
	