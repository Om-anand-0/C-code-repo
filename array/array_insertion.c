//Array insertion

#include<stdio.h>

int main()
{
    int a[5], pos, i, val, count = 0,n = 5;


    printf("Enter the array: \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    printf("Enter the value to be inserted: \n");
    scanf("%d", &val);


    printf("Enter the position to be inserted: \n");
    scanf("%d", &pos);


    if (pos >= 0 && pos <= n)
    {

        for (i = n - 1; i >= pos - 1; i--)
        {
            a[i + 1] = a[i];
        }
    }


    a[pos - 1] = val;


    printf("Array elements after insertion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}