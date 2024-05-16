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

    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            printf("The first occurrence of element %d is at index %d.\n", element, i);
            found++;
            break;
        }
    }

    if (!found)
    {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}