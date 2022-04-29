#include<stdio.h>

void check_set_nthbit(int data,int bit)
{
	int result;
	result= data | (1 << bit);
	
	printf("Before setting the bit %d  and data is %d\n",bit,data);
	printf("After setting the bit %d bit and new data is %d\n",bit,result);
}

