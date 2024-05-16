// sum of elements of array
#include<stdio.h>

int main()
{
    int a[100],sum=0,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter all the %d elements : ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of all elements: %d", sum);
    return 0;
}