#include <stdio.h>

int main()
{
    int a[10], n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter all the %d elements : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Number of even numbers: %d\n", even);
    printf("Number of odd numbers: %d\n", odd);

    return 0;
}