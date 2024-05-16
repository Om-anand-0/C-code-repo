#include<stdio.h>

void main()
{
    int i=1,b,num;
    printf("Enter the Number:");
    scanf("%d", &num);
    do
    {
        b = num*i;
        printf("%d x %d = %d \n",num,i,b);
        i = i++;
    }while (i<=10);
    
}