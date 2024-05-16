#include<stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 0}, {6, 0, 0}};
    int m = 3, n = 3;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i%2==0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}