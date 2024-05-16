#include <stdio.h>

int main()
{
    int a1[5], a2[5], merged[10], i, j, k;


    printf("Enter all the 5 elements of the first array: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a1[i]);
    }


    printf("Enter all the 5 elements of the second array: ");
    for (j = 0; j < 5; j++)
    {
        scanf("%d", &a2[j]);
    }


    for (i = 0, k = 0; i < 5; i++, k++)
    {
        merged[k] = a1[i];
    }
    for (j = 0; j < 5; j++, k++)
    {
        merged[k] = a2[j];
    }


    printf("Merged array: ");
    for (k = 0; k < 10; k++)
    {
        printf("%d ", merged[k]);
    }

    return 0;
}