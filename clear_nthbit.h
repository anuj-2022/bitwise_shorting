#include<stdio.h>

void check_clear_nthbit(int data,int bit)
{
	int result;
	result= (data >> bit) & 1;
	if(result)
	{
	result=data ^ (1<<bit);
	printf("data %d of %d bit after set new data %d\n",data,bit,result);
	}
	else
	printf("data %d of %d bit is alrady clear %d\n",data,bit,result);

		
}

