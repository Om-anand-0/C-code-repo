#include<stdio.h>

int main()
{
    char str1[20];
    int count=0;
    printf("Enter any word:");
    gets(str1);
    for (int i = 0; str1[i] != '\0'; i++)
    {
        count++;
    }
    
    printf("the length of the string is:%d",count);
    return 0;
}