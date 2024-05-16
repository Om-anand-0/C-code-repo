//call by refernce

#include <stdio.h>
int change(int *a)
{
    (*a) = (*a) + 1;
    return 0;
}
int main()
{
    int a = 10;
    change(&a);
    printf("%d",a);
    return 0;
}