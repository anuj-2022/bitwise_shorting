#include<stdio.h>
#include"copy_array_ptr.h"

int main()
{
	int source[SIZE]={10,20,30,40,50,60,70,80,90,100};
	int dest[SIZE*2]={11,22,33,44,55,66,77,88,99,110};
	
	copy_data(source,dest);
	
	printf("after copy data source to destnation array data like :\n");
	for(int i=0;i<(SIZE*2);i++)
	printf("%d\t",dest[i]);
	
	printf("\n");
	return 0;
}
