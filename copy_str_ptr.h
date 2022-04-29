#include<stdio.h>
#include<string.h>

void copy_str(char *s,char *d)
{
	int size=0,i;
	
	size=(char)find_size(d);
//	printf("size id %d\n",size);
	d=d+size;
//	printf("%c %c",*d++,++*d);
	while(*s!='\0')
	*d++=*s++;
}


int find_size(char *r)
{
	int s=0;
	while(*r!='\0')
	{
		r++;
		s++;
	}
return s;
}
