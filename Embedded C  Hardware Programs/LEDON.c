#include<reg51.h>
sbit LED=P1^0;
void main(void)
{
	P1 = 0x00;
	LED=1;
while(1)
{
}
}