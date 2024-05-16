#include<stdio.h>

int main()
{
    int a[100][100],m,n;
    printf("Enter the dimensions of the matrix (rows and columns): ");
    scanf("%d %d", &m,&n);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j)
            {
                /* code */
            }
            
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}