#include <stdio.h>

int change(int a)
{
    a = a + 1;
    return a;
}
int main()
{
    int a = 10,b;
    b = change(a);
    printf("%d",b);
    return 0;
}