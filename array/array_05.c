#include<stdio.h>

int main()
{
    int a[5],pos,i,val,count=0,n;
    printf("enter the array: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
        printf("enter the value to be inserted: \n");
        scanf("%d",&val);
        printf("enter the position to be inserted: \n");
        scanf("%d", &pos);
        if (pos >= 0 && pos <=count)
        {
            for(i=n;i>=pos;i--)
            {
                a[i] = a[i-1];
            }
        }
        a[pos-1] = val;
        n = n+1
        printf("array elememts the insertion are : ");
        for (i = 0; i <= n; i++)
        {
            printf("%d",a[i]);
        }
        

    return 0;
} 