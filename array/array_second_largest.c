#include <stdio.h>
int main()
{
    
    int a[10],n,first, second;
    printf("Enter the size of array: ");
    scanf("%d", &n);


    printf("Enter all the %d elements : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    first = a[0];
    second = a[1];

    for (int i = 2; i < n; i++)
    {
        if (a[i] > first)
        {
            second = first;
            first = a[i];
        }
        else if (a[i] > second && a[i] < first)
        {
            second = a[i];
        }
    }

    printf("Second largest element: %d\n", second);

    return 0;
}