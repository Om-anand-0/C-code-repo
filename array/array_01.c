#include<stdio.h>

int main()
{
    int array[10],i,n;
    printf("Enter the number of elements upto 10 elements: ");
    scanf("%d",&n);
    printf("Enter the %d elements:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The elements are:");
    for (i = 0; i < n; i++)
    {
        printf("%d,",array[i]);
    }
    
    
    return 0;
}