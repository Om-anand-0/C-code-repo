// sum of elements of array
#include<stdio.h>

int main()
{
    int a[5], a2[5];
    printf("Enter all the 5 elements : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
// Here i declared first element of a2 is equals to first elemts of a.
    for (int i = 0; i < 5; i++)
    {
        a2[i] = a[i];
    }
    
    
    for (int i = 1; i < 5; i++)
    {
        a2[i] = a[i] + a2[i-1];
    }

    printf("Sum of all elements: %d", a2[5]);
    return 0;
}