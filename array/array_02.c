#include<stdio.h>
#include<stddef.h>
int main()
{
    int a1[10], a2[10], a3[10],i;
    printf("Enter the number of elements to 10 elements for 1st array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("Enter the number of elements upto 10 elements for 2nd array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a2[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        a3[i] = a1[i] + a2[i];
    }
    
    printf("The elements of a3 are:");
    for (i = 0; i < 10; i++)
    {
        printf("%d,",a3[i]);
    }
    
    
    return 0;
}