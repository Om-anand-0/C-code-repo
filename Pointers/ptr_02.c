#include<stdio.h>

int main()
{
    int a,b,c=5,*p;
    a = 4 * (c +5);
    p = &c;
    b = 4 *(*p + 5);
    printf("a = %d b = %d \n", a,b);
    return 0;
}