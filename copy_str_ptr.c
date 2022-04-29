#include<stdio.h>
#include"copy_str_ptr.h"

int main()
{
	char source[10]="HYDERABAD";
	char dest[21]="THUNDERSOFT";

	copy_str(source,dest);
	printf("size of string is %d\n",find_size(dest));
	
	printf("string data is : %s",dest);
	printf("\n");
	return 0;
}
