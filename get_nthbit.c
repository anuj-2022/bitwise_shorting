#include<stdio.h>
#include"get_nthbit.h"

int main()
{
	int b,n;
	printf("enter the data and bit");
	scanf("%d%d",&n,&b);
	check_nthbit(n,b);
	return 0;
}
