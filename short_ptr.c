#include<stdio.h>
#include"short_ptr.h"

int main()
{
	int i,n;
	printf("Enter the size\n");
	scanf("%d",&n);
	int str[n];
	for(i=0;i<n;i++)
	{
	printf("Enter the data %d\n",i+1);
	scanf("%d",&str[i]);
	}
	short_order(str,n);
//	printf("after shorting assending order the data is :\n");
//	for(i=0;i<n;i++)
//	printf("%d\t",str[i]);
	return 0;
}
