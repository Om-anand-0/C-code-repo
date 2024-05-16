#include <stdio.h>

int main()
{
    int arr[10], n, element;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter all the %d elements : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find: ");
    scanf("%d", &element);

    int lo = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            lo = i;
        }
    }

    if (lo!= -1)
    {
        printf("The last occurrence of element %d is at index %d.\n", element, lo);
    }
    else
    {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}