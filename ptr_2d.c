#include <stdio.h>
#define ROW     3
#define COL     3
int main(void)
{
    // 2d array
    int data [ROW][COL] = { { 10, 2, 3 }, { 4, 5, 6 }, {7, 8, 9} };
    int *ptr = NULL; //pointer to integer
    int i =0, j =0,result=0;
    ptr = &data[0][0];
    for (i = 0; i < (ROW * COL); i++) 
            result +=  *(ptr+i);
    printf("result is %d\n",result);
    return 0;
}
