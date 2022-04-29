#include<stdio.h>
#include"clear_nthbit.h"

int main()
{
	int b,n;
	printf("enter the data and bit");
	scanf("%d%d",&n,&b);
	check_clear_nthbit(n,b);
	return 0;
}
