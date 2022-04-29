#include<stdio.h>
#include"toggle_nthbit.h"

int main()
{
	int b,n;
	printf("enter the data and bit");
	scanf("%d%d",&n,&b);
	check_toggle_nthbit(n,b);
	return 0;
}
