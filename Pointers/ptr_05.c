#include<stdio.h>

int main()
{
    int m;
    int n,o;
    int *z;
    z = &m;
    printf("%u \n",z);
    printf("%d \n",*z);
    printf("%u \n",&m);
    printf("%u \n",&n);
    printf("%u \n",&o);
    printf("%u \n",&z);
    return 0;
}