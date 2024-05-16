#include<stdio.h>

int main()
{
    int a[100],n,i;
    float avg,sum = 0;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("enter the element %d: \n",i);
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    
    avg = sum/n;
    printf("the elements of the array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \n",a[i]);
    }
    
    printf("Average is %.2f",avg);
    return 0;
}