#include<stdio.h>
void display(int *x)
{
    printf("%d\n",*x);
}
int main()
{
    int a[]={10,20,30,40}, i, length;
    length = sizeof(a)/sizeof(a[0]);
    for (i = 0; i < length; i++)
    {
        display(&a[i]);
    }
    
    return 0;
}
