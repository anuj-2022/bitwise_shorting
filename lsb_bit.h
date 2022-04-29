#include<stdio.h>


void check_lsb_bit(int a)
{
	if(a&1)
	printf("LSB bit is set 1\n");
	else
	printf("LSB bit is not set 0\n");
}
