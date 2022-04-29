#include<stdio.h>

void swap(int c,int d)
{
	printf("before swapping the number is c = %d d = %d\n",c,d);
	c = c ^ d;
	d = c ^ d;
	c = c ^ d;
	printf("after swapping the  number is c = %d d = %d\n",c,d);
}
