#include<stdio.h>

void check_toggle_nthbit(int data,int bit)
{
	int result;
	printf("before toggling %d bit data is %d\n",bit,data);
	result=data ^ (1<<bit);
	printf("after toggling %d bit new data is %d\n",bit,result);

		
}

