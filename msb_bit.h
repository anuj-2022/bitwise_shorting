#include<stdio.h>
#define BITS	sizeof(int)*4

void msb_bit_check(int n)
{
	int result=0;
	result=1<<(BITS -1);

	if(result & n)
	printf("MSB bit is set 1\n");
	else
	printf("MSB bit is not set 0\n");
}
