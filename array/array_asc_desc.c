#include <stdio.h>
int main()
{
    
    int a[10],n,asc,desc;
    printf("Enter the size of array: ");
    scanf("%d", &n);


    printf("Enter all the %d elements : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            asc = 0;
            break;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            desc = 0;
            break;
        }
    }
    
if (asc)
    {
        printf("The array is sorted in ascending order.\n");
    }

if (desc)
    {
        printf("The array is sorted in ascending order.\n");
    }
return 0;
}