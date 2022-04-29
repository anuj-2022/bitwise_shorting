#include<stdio.h>
#include"set_nthbit.h"

int main()
{
	int b,n;
	printf("enter the data and bit");
	scanf("%d%d",&n,&b);
	check_set_nthbit(n,b);
	return 0;
}
