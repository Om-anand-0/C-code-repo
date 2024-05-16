// sum of elements of array
#include<stdio.h>

int main()
{
    int a[5],sum=0;
    printf("Enter all the 5 elements : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
// Here i declared first element of a2 is equals to first elemts of a.
    for (int i = 0; i < 5; i++)
    {
        sum=sum+a[i];
    }

    printf("Sum of all elements: %d", sum);
    return 0;
}