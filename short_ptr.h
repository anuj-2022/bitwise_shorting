#include<stdio.h>

void short_order(int *s,int n)
{
	int i,j,t=0,c;
	for(i=0;i<n;i++)
	{
//		printf("%d\t",*(s+i));
		for(j=i+1;j<n;j++)
		{	
			if(*(s+i)>*(s+j))
			{	
				t=*(s+i);
				*(s+i)=*(s+j);
				*(s+j)=t;
			}
		}
	}
	printf("after shorting assending order the data is :\n");
	for(i=0;i<n;i++)
	printf("%d\t",*(s+i));
}
	
