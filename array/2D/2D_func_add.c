#include<stdio.h>

int sum(int x, int y) //formal parameter
{
    return x + y;
}

int main() {
    int a=10, b=20, c;
    c = sum(a,b); //actual parameter
    printf("Sum = %d", c);
    return 0;
}