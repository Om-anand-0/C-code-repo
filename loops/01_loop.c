#include<stdio.h>

void main()
{
    int i=1,b,num;
    printf("Enter the Number:");
    scanf("%d", &num);
    while (i<=10)
    {
        b = num*i;
        printf("%d x %d = %d \n",num,i,b);
        i = i+1;
    }
    
}