#include<stdio.h>
#define SIZE	10

void copy_data(int *s,int *d)
{
	int i=0,j=0;
//	s=s+SIZE;
	d=d+SIZE;
	for(i=0;i<=SIZE;i++)
		*d++=*s++;
		
	
//	printf("len is %d\n",i);
}	
