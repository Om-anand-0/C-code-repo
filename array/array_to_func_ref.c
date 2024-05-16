#include<stdio.h>

int sum(int *x, *int y)
{
    int i,sum=0;
    for(i=0;i<y;i++)
    sum = sum + x[i];
    return sum;
}
int main()
{
    int a[] = {10,20,30,40},i,c;
    c = sum(a,4);
    printf("sum of array is %d",c);
   return 0;
}