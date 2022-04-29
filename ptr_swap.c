#include<stdio.h>
#include"ptr_swap.h"

int main()
{
	int num,num1;
	printf("Enter the two number\n");
	scanf("%d%d",&num,&num1);
	printf("before swapping the data is num = %d num1 = %d\n",num,num1);
	swap(&num,&num1);
	printf("after swapping the data is num = %d num1 = %d\n",num,num1);
	return 0;
}
