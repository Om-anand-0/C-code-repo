#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20];
    printf("Enter any word:");
    gets(str1);
    printf("the length of the string is:%d",strlen(str1));
    return 0;
}