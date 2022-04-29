#include<stdio.h>

void check_nthbit(int data,int bit)
{
	int result;
	result= (data >> bit) & 1;
	
	printf("data %d of %d bit is %d\n",data,bit,result);
}

