#include<stdio.h>
void main()
{
    int i,b,num;
    printf("Enter the Number:");
    scanf("%d", &num);
    printf("Multiplication for %d: \n", num);
    for (int i = 1; i <= 10; i++)
    {
        b = num*i;
        printf("%d x %d = %d \n",num,i,b);
    }
    
}