#include<reg51.h>
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
	while(1)
	{
		P1=0x55;
		delay();
		P1=0xAA;
		delay();
	}
}